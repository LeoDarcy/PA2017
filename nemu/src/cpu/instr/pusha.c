#include"cpu/instr.h"
make_instr_func(pusha){
	//save temp
	uint32_t temp=cpu.esp;

	//push eax
	cpu.esp-=4;
	OPERAND rm;
	rm.data_size=data_size;
	rm.type=OPR_MEM;
	rm.sreg=SREG_SS;
	rm.addr=cpu.esp;
	rm.val=cpu.eax;
	operand_write(&rm);
	//push ecx
	cpu.esp-=4;
	rm.addr=cpu.esp;
	rm.val=cpu.ecx;
	operand_write(&rm);

	//push edx
	cpu.esp-=4;
	rm.addr=cpu.esp;
	rm.val=cpu.edx;
	operand_write(&rm);

	//push ebx
	cpu.esp-=4;
	rm.addr=cpu.esp;
	rm.val=cpu.ebx;
	operand_write(&rm);

	//push temp esp
	cpu.esp-=4;
	rm.addr=cpu.esp;
	rm.val=temp;
	operand_write(&rm);

	//push ebp
	cpu.esp-=4;
	rm.addr=cpu.esp;
	rm.val=cpu.ebp;
	operand_write(&rm);

	//push esi
	cpu.esp-=4;
	rm.addr=cpu.esp;
	rm.val=cpu.esi;
	operand_write(&rm);

	//push edi
	cpu.esp-=4;
	rm.addr=cpu.esp;
	rm.val=cpu.edi;
	operand_write(&rm);

	return 1;
}
