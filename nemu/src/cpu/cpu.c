#include "nemu.h"
#include "cpu/cpu.h"
#include "cpu/intr.h"
#include "cpu/instr.h"
#include "memory/memory.h"
#include "monitor/breakpoint.h"
#include <stdio.h>
#include <assert.h>

CPU_STATE cpu;
FPU fpu;
int nemu_state;

#define sign(x) ((uint32_t)(x) >> 31)

void init_cpu(const uint32_t init_eip) {
	cpu.eflags.val = 0x0;
	fpu.status.val = 0x0;
	int i=0;
	for(i = 0; i < 8; i++) {
		cpu.gpr[i].val = 0x0;
		fpu.regStack[i].val = 0x0;
	}
	cpu.eip = init_eip;
	cpu.esp = (128 << 20) - 16;

	//pa3.2 initial the CR0 and GDTR
//#ifndef IA32_SEG
	cpu.cr0.val=0;
	cpu.gdtr.limit=0;
	cpu.gdtr.base=0;

	for(i=0;i<6;i++){
		cpu.segReg[i].val=0;
		cpu.segReg[i].base=0;
		cpu.segReg[i].limit=0;
		cpu.segReg[i].type=0;
		cpu.segReg[i].privilege_level=0;
		cpu.segReg[i].soft_use=0;
	}
//#endif
	//pa3.2 end
//pa 4
	cpu.intr=0;
}

bool verbose = false;

#ifdef HAS_DEVICE_TIMER
static void do_intr();
#endif

void exec(uint32_t n) {
	static BP *bp = NULL;
	verbose = (n <= 100000);
	int instr_len = 0;
	bool hit_break_rerun = false;

	if(nemu_state == NEMU_BREAK) {
		hit_break_rerun = true;
	}

	nemu_state = NEMU_RUN;
	while( n > 0 && nemu_state == NEMU_RUN) {

#ifdef DEBUG
		if(verbose) clear_operand_mem_addr(&opr_src);
		if(verbose) clear_operand_mem_addr(&opr_dest);
#endif

		instr_len = exec_inst();

		cpu.eip += instr_len;
		n--;

		if(hit_break_rerun) {
			resume_breakpoints();
			hit_break_rerun = false;
		}

		// check for breakpoints
		if(nemu_state == NEMU_BREAK) {
			// find break in the list
			bp = find_breakpoint(cpu.eip - 1);
			if(bp) {
				// found, then restore the original opcode
				vaddr_write(bp->addr, SREG_CS, 1, bp->ori_byte);
				cpu.eip--;
			}
			// not found, it is triggered by BREAK_POINT in the code, do nothing
		}

		// check for watchpoints

		BP *wp = scan_watchpoint();
		if(wp != NULL) {
			// print_bin_instr(eip_temp, instr_len);
			// puts(assembly);
			printf("\n\nHit watchpoint %d at address 0x%08x, expr = %s\n", wp->NO, cpu.eip - instr_len, wp->expr);
			printf("old value = %#08x\nnew value = %#08x\n", wp->old_val, wp->new_val);
			wp->old_val = wp->new_val;
			nemu_state = NEMU_READY;
			break;
		}

#ifdef HAS_DEVICE_TIMER
		//printf("\nPlease call do_intr() here\n");
		do_intr();

		//assert(0);
#endif
	}
	if(nemu_state == NEMU_STOP)
		printf("NEMU2 terminated\n");
	else if(n == 0) {
		nemu_state = NEMU_READY;
	}
}

#ifdef HAS_DEVICE_TIMER
static void do_intr() {
	// check for interrupt
	if(cpu.intr && cpu.eflags.IF) {
		// get interrupt number
		uint8_t intr_no = i8259_query_intr_no(); // get interrupt number
		assert(intr_no != I8259_NO_INTR);
		i8259_ack_intr(); // tell the PIC interrupt info received
		raise_intr(intr_no); // raise intrrupt to turn into kernel handler
	}
}
#endif

int exec_inst() {
	uint8_t opcode = 0;
	// get the opcode
	opcode = instr_fetch(cpu.eip, 1);
	// instruction decode and execution
	int len = opcode_entry[opcode](cpu.eip, opcode);
//	printf("\ncpu_esp=%x   ebp=%x   \n  cpu.eax=%x  ebx=%x  ecx=%x  edx=%x  edi=%x\n",cpu.esp,cpu.ebp,cpu.eax,cpu.ebx,cpu.ecx,cpu.edx,cpu.edi);
	return len;
}



