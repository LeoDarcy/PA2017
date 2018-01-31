#include"cpu/instr.h"
static void instr_execute_2op(){
	operand_read(&opr_dest);
	operand_read(&opr_src);
	if(opr_src.data_size==8&&opr_src.data_size<opr_dest.data_size)
	{
		if(opr_src.val&0x80)
			opr_src.val=0xffffff00|opr_src.val;
		else
			opr_src.val=0xff&opr_src.val;
	}
	opr_dest.val=alu_or(opr_src.val,opr_dest.val);
	operand_write(&opr_dest);
}

make_instr_impl_2op(or,r,rm,v)
make_instr_impl_2op(or,rm,r,b)
make_instr_impl_2op(or,i,rm,bv)
make_instr_impl_2op(or,i,rm,b)
make_instr_impl_2op(or,i,rm,v)

make_instr_impl_2op(or,rm,r,v)
make_instr_impl_2op(or,i,a,b)
make_instr_impl_2op(or,i,a,v)
make_instr_impl_2op(or,r,rm,b)
