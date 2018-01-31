#include"cpu/instr.h"
static void instr_execute_2op(){
	operand_read(&opr_src);
	operand_read(&opr_dest);
	opr_src.val=sign_ext(opr_src.val,opr_src.data_size);
	opr_src.data_size=data_size;
	opr_dest.val=alu_sbb(opr_src.val,opr_dest.val);
	operand_write(&opr_dest);
}
make_instr_impl_2op(sbb,rm,r,v)
