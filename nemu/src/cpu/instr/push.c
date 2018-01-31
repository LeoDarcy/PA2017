#include "cpu/instr.h"


static void instr_execute_1op(){
	operand_read(&opr_src);
	/*if(opr_src.data_size==8&&opr_src.val&0x80)
		opr_src.val|=0xffffff00;*/
	if(((opr_src.val&0x80)==1)&&opr_src.data_size==8)
	{
		if(data_size==16)
			opr_src.val=(uint16_t )opr_src.val+0xFF00;
		else if(data_size==32)
			opr_src.val=(uint32_t)opr_src.val+0xFFFFFF00;
		else
			;
	}
	OPERAND dest;
	//esp-4
	cpu.esp-=4;
	//write
	dest.data_size=data_size;
	dest.type=OPR_MEM;
	dest.sreg=SREG_SS;
	dest.addr=cpu.esp;
	dest.val=opr_src.val;
	operand_write(&dest);
	//printf("esp=%x,eip=%x,ebp=%x",cpu.esp,cpu.eip,cpu.ebp);
	//assert(0);
}
make_instr_impl_1op(push,i,b)
make_instr_impl_1op(push,i,v)
make_instr_func(push_r_v){
	OPERAND src,dest;
	src.data_size=data_size;
	src.type=OPR_REG;
	src.sreg=SREG_CS;
	src.addr=opcode&0x7;
	operand_read(&src);
	//esp-4
	cpu.esp-=4;
	//write
	dest.data_size=data_size;
	dest.type=OPR_MEM;
	dest.sreg=SREG_SS;
	dest.addr=cpu.esp;
	dest.val=src.val;
	operand_write(&dest);

	print_asm_1("push","",2,&dest);
	return 1;
}
/*
make_instr_func(push_ebp_v){
	OPERAND r;
	r.data_size=data_size;
	r.val=cpu.ebp;
	r.type=OPR_MEM;
	r.addr=cpu.esp-4;
	cpu.esp=cpu.esp-4;
	operand_write(&r);
	return 1;
}
make_instr_func(push_ebx_v){
	OPERAND r;
	r.type=OPR_MEM;
	r.data_size=data_size;
	r.val=cpu.ebx;
	r.addr=cpu.esp-4;
	cpu.esp=cpu.esp-4;
	operand_write(&r);
	return 1;
}
make_instr_func(push_eax_v){
	OPERAND r;
	r.type=OPR_MEM;
	r.data_size=data_size;
	r.val=cpu.eax;
	r.addr=cpu.esp-4;
	cpu.esp=cpu.esp-4;
	operand_write(&r);
	return 1;
}
make_instr_func(push_ecx_v){
	OPERAND r;
	r.type=OPR_MEM;
	r.data_size=data_size;
	r.val=cpu.ecx;
	r.addr=cpu.esp-4;
	cpu.esp=cpu.esp-4;
	operand_write(&r);
	return 1;
}
make_instr_func(push_edx_v){
	OPERAND r;
	r.type=OPR_MEM;
	r.data_size=data_size;
	r.val=cpu.edx;
	r.addr=cpu.esp-4;
	cpu.esp=cpu.esp-4;
	operand_write(&r);
	return 1;
}
*/
make_instr_func(push_rm_v){
	OPERAND rm,dest;
	int len=1;
	rm.data_size=data_size;
	//len+=modrm_opcode_rm(cpu.eip+1,&opcode,&rm);
	len+=modrm_rm(eip+1,&rm);
	operand_read(&rm);
	cpu.esp-=4;
	dest.data_size=data_size;
	dest.type=OPR_MEM;
	dest.sreg=SREG_SS;
	dest.addr=cpu.esp;
	dest.val=rm.val;
	operand_write(&dest);
	return len;
}

/*
make_instr_func(push_edi_v){
	OPERAND r;
	r.type=OPR_MEM;
	r.data_size=data_size;
	r.val=cpu.edi;
	r.addr=cpu.esp-4;
	cpu.esp=cpu.esp-4;
	operand_write(&r);
	return 1;
}
make_instr_func(push_esi_v){
	OPERAND r;
	r.type=OPR_MEM;
	r.data_size=data_size;
	r.val=cpu.esi;
	r.addr=cpu.esp-4;
	cpu.esp=cpu.esp-4;
	operand_write(&r);
	return 1;
}
*/



	
