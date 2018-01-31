#include"cpu/instr.h"

make_instr_func(leave){
	cpu.esp=cpu.ebp;
	//pop
	OPERAND r;
	r.sreg=SREG_SS;
	r.data_size=data_size;
	r.type=OPR_MEM;
	r.addr=cpu.esp;
	cpu.esp+=data_size/8;
	operand_read(&r);
	cpu.ebp=r.val;
	print_asm_0("leave","",1);
//	printf("\nleave_eip=%x   leave_esp=%x  leave_ebp=%x  \n",cpu.eip,cpu.esp,cpu.ebp);
	return 1;
}
