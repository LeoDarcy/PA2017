#include"cpu/instr.h"


static void instr_execute_2op(){
	operand_read(&opr_src);
	operand_read(&opr_dest);

	uint32_t result=alu_and(opr_dest.val,opr_src.val);
	if(opr_src.data_size==8||opr_dest.data_size==8)
		cpu.eflags.SF=(result&0x80)?1:0;
//	printf("\ncmp.ZF=%d   SF=%d    OF=%d    PF=%d\n",cpu.eflags.ZF,cpu.eflags.SF,cpu.eflags.OF,cpu.eflags.PF);
}
make_instr_impl_2op(test,r,rm,v)
make_instr_impl_2op(test,r,rm,b)
make_instr_impl_2op(test,i,rm,v)
make_instr_impl_2op(test,i,a,v)
make_instr_impl_2op(test,i,a,b)
make_instr_impl_2op(test,i,rm,b)

