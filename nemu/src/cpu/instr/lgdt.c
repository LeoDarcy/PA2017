#include"cpu/instr.h"

make_instr_func(lgdt)
{
	OPERAND rm;
	/*
	rm.addr=eip+2;
	rm.type=OPR_MEM;*/
	//rm.sreg=SREG_CS;
	rm.data_size=16;
	int len=modrm_opcode_rm(eip+1,&opcode,&rm);
	operand_read(&rm);
	cpu.gdtr.limit=rm.val;
	rm.addr=rm.addr+2;
	rm.data_size=32;
	operand_read(&rm);
	cpu.gdtr.base=rm.val;
	//printf("\n \n base=%x  \n limit=%x  \n",cpu.gdtr.base,cpu.gdtr.limit);
	return 1+len;
}
