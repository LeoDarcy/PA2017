#include "cpu/intr.h"
#include "cpu/instr.h"
#include "memory/memory.h"


void raise_intr(uint8_t intr_no) {
#ifdef IA32_INTR
	//printf("Please implement raise_intr()");
	//assert(0);
	//push eflags
	cpu.esp-=4;
	OPERAND dst;
	dst.data_size=data_size;
	dst.type=OPR_MEM;
	dst.sreg=SREG_SS;
	dst.addr=cpu.esp;
	dst.val=cpu.eflags.val;
	operand_write(&dst);

	//push CS
	cpu.esp-=4;
	dst.addr=cpu.esp;
	dst.val=cpu.cs.val;
	operand_write(&dst);
	
	//Push eip
	cpu.esp-=4;
	dst.addr=cpu.esp;
	dst.val=cpu.eip;
	operand_write(&dst);

	//find the GateDesc
	//printf("\n idtr.base=%x,intr_no=%x\n",cpu.idtr.base,intr_no);
	uint32_t add=cpu.idtr.base+(sizeof(GateDesc))*intr_no;
	GateDesc inter;
	inter.val[0]=laddr_read(add,4);
	inter.val[1]=laddr_read(add+4,4);
	//clear the if
	if(inter.type==0xE)
		cpu.eflags.IF=0;
	//set CS and eip
	cpu.cs.val=inter.selector;
	uint32_t new_eip=inter.offset_15_0+(inter.offset_31_16<<16);
	//printf("\n eip=%x\n",new_eip);
	cpu.eip=new_eip;
#endif
}

void raise_sw_intr(uint8_t intr_no) {
	// return address is the next instruction
	cpu.eip += 2;
	raise_intr(intr_no);
}
