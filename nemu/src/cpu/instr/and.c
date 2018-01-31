#include"cpu/instr.h"

static void instr_execute_2op(){
	operand_read(&opr_dest);
	operand_read(&opr_src);
//	printf("\nand_dest=%x src=%x",opr_dest.val,opr_src.val);
	if(opr_src.data_size<opr_dest.data_size&&opr_src.data_size==8)
	{
		if(opr_src.val&0x80)
			opr_src.val=0xffffff00|opr_src.val;
		else
			opr_src.val=opr_src.val&0xFF;
	}
	opr_dest.val=alu_and(opr_src.val,opr_dest.val);
//	printf("\nand_dest=%x src=%x\n",opr_dest.val,opr_src.val);
	operand_write(&opr_dest);
}

make_instr_impl_2op(and,i,rm,bv);
make_instr_impl_2op(and,rm,r,b);
make_instr_impl_2op(and,r,rm,v);
make_instr_impl_2op(and,i,rm,v);
make_instr_impl_2op(and,i,rm,b);

make_instr_impl_2op(and,i,a,b)





make_instr_impl_2op(and,i,a,v);
make_instr_impl_2op(and,rm,r,v);
/*make_instr_func(and_i2eax_v){
	OPERAND imm;
	imm.data_size=data_size;
	imm.type=OPR_IMM;
	imm.addr=cpu.eip+1;
	operand_read(&imm);
	cpu.eax=imm.val&cpu.eax;
	printf("and.c   cpu.eip=%x\n",cpu.eip);
	return 1+data_size/8;
}*/
