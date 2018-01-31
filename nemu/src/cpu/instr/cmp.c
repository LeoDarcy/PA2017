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
	alu_sub(opr_src.val,opr_dest.val);
	//printf("\ncmp_opr_src.val=%x\n ZF=%d   SF=%d\n",opr_src.val,cpu.eflags.ZF,cpu.eflags.SF);
}

make_instr_impl_2op(cmp,i,rm,bv)
make_instr_impl_2op(cmp,r,rm,v)
make_instr_impl_2op(cmp,i,rm,v)
make_instr_impl_2op(cmp,rm,r,v)
make_instr_impl_2op(cmp,i,a,b)
make_instr_impl_2op(cmp,i,rm,b)
make_instr_impl_2op(cmp,rm,r,b)

make_instr_impl_2op(cmp,i,a,v)

make_instr_impl_2op(cmp,r,rm,b)
