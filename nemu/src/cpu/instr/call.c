#include "cpu/instr.h"


make_instr_func(call_v){
	OPERAND rm,p;
	//strange line
	rm.sreg=SREG_CS;
	rm.data_size=p.data_size=data_size;
	rm.type=OPR_IMM;
	rm.addr=eip+1;
	operand_read(&rm);
	//push
	p.type=OPR_MEM;
	p.sreg=SREG_SS;
	p.val=cpu.eip+1+data_size/8;
	cpu.esp=cpu.esp-data_size/8;
	p.addr=cpu.esp;
	operand_write(&p);
	//printf("\n eip=%x\n",cpu.eip+ 1+data_size/8+sign_ext(rm.val,data_size));
	return 1+data_size/8+sign_ext(rm.val,data_size);
}

make_instr_func(call_rm_v){
	OPERAND rm,p;
	//strange line
	rm.data_size=data_size;
	p.data_size=data_size;
	rm.type=OPR_MEM;
	int len=modrm_opcode_rm(cpu.eip+1,&opcode,&rm);
	operand_read(&rm);
	//push
	p.type=OPR_MEM;
	p.val=cpu.eip+1+len;//strange !!!!!!!!
	cpu.esp=cpu.esp-data_size/8;
	p.addr=cpu.esp;
	operand_write(&p);

	cpu.eip=rm.val;
	//printf("\n call_eip=%x,eax=%x,rm.addr=%x,val=%x\n",cpu.eip,cpu.eax,rm.addr,rm.val);
	
	return 0;
}

