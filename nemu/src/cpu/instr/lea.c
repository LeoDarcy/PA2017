#include"cpu/instr.h"


make_instr_func(lea){
	OPERAND r,rm;
	rm.data_size=r.data_size=data_size;
	int len=1;
	len+=modrm_r_rm(eip+1,&r,&rm);
	r.val=rm.addr;
	operand_write(&r);
	//print_asm_2("lea","",2,&rm,&r);
	return len;
}
