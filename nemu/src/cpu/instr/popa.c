#include"cpu/instr.h"
make_instr_func(popa){
	OPERAND pop;
	//pop edi
	pop.data_size=data_size;
	pop.type=OPR_MEM;
	pop.sreg=SREG_SS;
	pop.addr=cpu.esp;
	operand_read(&pop);
	cpu.edi=pop.val;
	cpu.esp+=4;
	//pop esi
	pop.addr=cpu.esp;
	operand_read(&pop);
	cpu.esi=pop.val;
	cpu.esp+=4;
	//pop ebp
	pop.addr=cpu.esp;
	operand_read(&pop);
	cpu.ebp=pop.val;
	cpu.esp+=4;
	//pop esp
	pop.addr=cpu.esp;
	operand_read(&pop);
		//throw away
	cpu.esp+=4;
	//pop ebx
	pop.addr=cpu.esp;
	operand_read(&pop);
	cpu.ebx=pop.val;
	cpu.esp+=4;
	//pop edx
	pop.addr=cpu.esp;
	operand_read(&pop);
	cpu.edx=pop.val;
	cpu.esp+=4;
	//pop ecx;
	pop.addr=cpu.esp;
	operand_read(&pop);
	cpu.ecx=pop.val;
	cpu.esp+=4;
	//pop eax
	pop.addr=cpu.esp;
	operand_read(&pop);
	cpu.eax=pop.val;
	cpu.esp+=4;
	return 1;
}

