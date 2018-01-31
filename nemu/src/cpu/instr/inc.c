#include"cpu/instr.h"

//make_instr_func(inc_v){
//}
static void instr_execute_1op(){
	operand_read(&opr_src);	
	//printf("\ninc_val=%x\n",opr_src.val);
	opr_src.val=alu_add(1,opr_src.val);
	//printf("\ninc_addr=%x   val=%x\n",opr_src.addr,opr_src.val);
	operand_write(&opr_src);
}


make_instr_impl_1op(inc,rm,v)
make_instr_impl_1op(inc,r,v)
