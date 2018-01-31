#include "cpu/instr.h"

make_instr_func(jmp_near) {
        OPERAND rel;
        rel.type = OPR_IMM;
	rel.sreg = SREG_CS;
        rel.data_size = data_size;
        rel.addr = eip + 1;

        operand_read(&rel);

	int offset = sign_ext(rel.val, data_size);
	print_asm_1("jmp", "", 1+data_size/8, &rel);
	/*
	printf("\njmp_eip=%x\n",cpu.eip);
	printf("\njmp.offset_eip=%x\n",offset);
	printf("\njmp.data_size_eip=%x\n",data_size);
*/
	cpu.eip += offset;
	//printf("\njmp_eip=%x\n",cpu.eip+1+data_size/8);
        return 1 + data_size / 8;
}

make_instr_func(jmp_short){
	OPERAND rel;
	rel.type=OPR_IMM;
	rel.sreg=SREG_CS;
	rel.data_size=8;
	rel.addr=eip+1;
	operand_read(&rel);
	int offset=sign_ext(rel.val,8);
	print_asm_1("jmp","",1+1,&rel);
	cpu.eip+=offset;
	//printf("\njmp_datasize=%x\n",data_size);
	return 1+1;
}

make_instr_func(jmp_rm_near){
	OPERAND rm;
	rm.sreg=SREG_CS;
	rm.data_size=data_size;
	int len=1;
	len+=modrm_rm(cpu.eip+1,&rm);
	operand_read(&rm);
	cpu.eip=rm.val;
	if(16==data_size)
		cpu.eip=cpu.eip&0xffff;
	return 0;
}



//pa3.2
make_instr_func(jmp_ptr){
	OPERAND imm;
	imm.data_size=32;
	imm.type=OPR_IMM;
	imm.sreg=SREG_CS;
	imm.addr=eip+1;
	operand_read(&imm);
	//cpu.eip=imm.val;
	OPERAND imm2;
	imm2.addr=cpu.eip+5;
	imm2.type=OPR_IMM;
	imm2.data_size=16;
	operand_read(&imm2);
	cpu.cs.val=imm2.val;
	//printf("\n eip=%x \n",cpu.eip);
	load_sreg(SREG_CS);
	cpu.eip=imm.val;
	//printf("\n eip=%x \n",cpu.eip);
	return 0;
}
