#include"cpu/instr.h"
make_instr_func(lidt){
	OPERAND rm;
	rm.data_size=16;
	int len=1;
	len+=modrm_opcode_rm(eip+1,&opcode,&rm);
	operand_read(&rm);
	cpu.idtr.limit=rm.val;
	rm.addr+=2;
	rm.data_size=32;
	operand_read(&rm);
	cpu.idtr.base=rm.val;
	return len;

}
