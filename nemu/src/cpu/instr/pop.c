#include"cpu/instr.h"
make_instr_func(pop_r_v){
	OPERAND r,src;
	src.type=OPR_MEM;
	src.addr=cpu.esp;
	src.data_size=data_size;
	src.sreg=SREG_SS;
	operand_read(&src);
	r.type=OPR_REG;
	r.data_size=data_size;
	r.addr=opcode&0x7;
	r.sreg=SREG_CS;
	r.val=src.val;
	operand_write(&r);
	cpu.esp+=4;
	print_asm_1("pop","",2,&r);
	return 1;
}
