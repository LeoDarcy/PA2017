#include"cpu/instr.h"
static void instr_execute_1op(){
	operand_read(&opr_src);
	uint32_t tem=opr_src.val;
	opr_src.val=cpu.eax;
	cpu.eax=tem;
	operand_write(&opr_src);
}

make_instr_impl_1op(xchg,r,v)

