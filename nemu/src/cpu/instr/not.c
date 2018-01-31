#include"cpu/instr.h"
static void instr_execute_1op(){
	operand_read(&opr_src);
	if(8==opr_src.data_size&&1==(opr_src.val&0x80))
	{
		opr_src.val=0xFFFFFF00|opr_src.val;
	}
	//printf("\nnot_before=%x",opr_src.val);
	opr_src.val=(~opr_src.val);
	//printf("   not_after=%x\n",opr_src.val);
	operand_write(&opr_src);
}
make_instr_impl_1op(not,rm,v)
