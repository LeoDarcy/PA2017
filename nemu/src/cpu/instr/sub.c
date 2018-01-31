#include "cpu/instr.h"

static void instr_execute_2op(){
	operand_read(&opr_src);
	operand_read(&opr_dest);
	if(opr_src.data_size==8&&opr_src.data_size<opr_dest.data_size)
	{
		if(opr_src.val&0x80)
			opr_src.val|=0xffffff00;
		else
			opr_src.val&=0xff;
	}
	opr_dest.val=alu_sub(opr_src.val,opr_dest.val);
	operand_write(&opr_dest);
	//printf("\nhere\neip=%d\n\n",cpu.eip);
}

make_instr_impl_2op(sub,i,rm,bv)
make_instr_impl_2op(sub,rm,r,v)
make_instr_impl_2op(sub,r,rm,v)
make_instr_impl_2op(sub,i,rm,v)
make_instr_impl_2op(sub,i,a,v)
