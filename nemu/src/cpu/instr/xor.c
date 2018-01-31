#include"cpu/instr.h"
static void instr_execute_2op(){
	operand_read(&opr_dest);
	operand_read(&opr_src);
	if(opr_src.data_size<opr_dest.data_size&&8==opr_src.data_size)
	{
		if(opr_src.val&0x80)
			opr_src.val=opr_src.val|0xFFFFFF00;
		else
			opr_src.val=opr_src.val&0xFF;
	}
	opr_dest.val=alu_xor(opr_src.val,opr_dest.val);
	operand_write(&opr_dest);
}

make_instr_impl_2op(xor,r,rm,v)
make_instr_impl_2op(xor,i,rm,bv)
