#include"cpu/instr.h"

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
	opr_dest.val=alu_add(opr_src.val,opr_dest.val);
	operand_write(&opr_dest);
	//printf("\nadd_cpu=%x\n",cpu.eip);
}

make_instr_impl_2op(add,r,rm,v)
make_instr_impl_2op(add,i,rm,v)
make_instr_impl_2op(add,i,rm,bv)
make_instr_impl_2op(add,i,a,v)

make_instr_impl_2op(add,rm,r,v)
make_instr_impl_2op(add,rm,r,b)
/*make_instr_func(add_i2eax_v){
	OPERAND imm;
	imm.data_size=data_size;
	imm.type=OPR_IMM;
	imm.addr=cpu.eip+1;
	operand_read(&imm);
	cpu.eax=alu_add(imm.val,cpu.eax);
	return 1+data_size/8;
}*/
