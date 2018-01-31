#include"cpu/instr.h"
#include"cpu/intr.h"
#include"memory/memory.h"
make_instr_func(into){
	OPERAND intr_no;
	intr_no.data_size=8;
	intr_no.type=OPR_IMM;
	intr_no.sreg=SREG_CS;
	//modrm_rm(cpu.eip+1,&intr_no);
	intr_no.addr=eip+1;
	operand_read(&intr_no);
	uint32_t num=intr_no.val;
	raise_sw_intr(num);
	return 0;
	/*if(0==cpu.cr0.pe){//REAL_ADDRESS_MODE
		//push eflags
		cpu.esp-=4;
		OPERAND dst;
		dst.data_size=data_size;
		dst.type=OPR_IMM;
		dst.sreg=SREG_SS;
		dst.addr=cpu.esp;
		dst.val=cpu.eflags.val;
		operand_write(&dst);

		//IF->0 TF->0
		cpu.eflags.IF=0;
		cpu.eflags.TF=0;
		//push CS.val
		cpu.esp-=4;
		dst.data_size=data_size;
		dst.type=OPR_IMM;
		dst.sreg=SREG_SS;
		dst.addr=cpu.esp;
		dst.val=cpu.cs.val;
		operand_write(&dst);*/
}
