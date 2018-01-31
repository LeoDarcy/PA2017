#include"cpu/instr.h"
make_instr_func(iret){
	//eip
	OPERAND pop;
	pop.data_size=data_size;
	pop.sreg=SREG_SS;
	pop.type=OPR_MEM;
	pop.addr=cpu.esp;
	operand_read(&pop);
	cpu.esp+=4;
	cpu.eip=pop.val;
	//CS
	pop.addr=cpu.esp;
	operand_read(&pop);
	cpu.esp+=4;
	cpu.cs.val=pop.val;
	//eflags
	pop.addr=cpu.esp;
	operand_read(&pop);
	cpu.esp+=4;
	cpu.eflags.val=pop.val;
	return 0;

}
