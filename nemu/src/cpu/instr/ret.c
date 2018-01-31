#include"cpu/instr.h"

make_instr_func(ret_v){
	OPERAND rm;
	rm.data_size=data_size;
	rm.addr=cpu.esp;
	rm.sreg=SREG_SS;
	rm.type=OPR_MEM;
	operand_read(&rm);
	print_asm_0("ret","v",0);
	cpu.eip=rm.val;
	//printf("\nret_eip=%x\n",cpu.eip);
	cpu.esp=cpu.esp+data_size/8;
	return 0;
}
make_instr_func(ret_iw){
	OPERAND rm;
	rm.data_size=data_size;
	rm.addr=cpu.esp;
	rm.sreg=SREG_SS;
	rm.type=OPR_MEM;
	operand_read(&rm);
	//add by myself
	print_asm_0("ret","w",0);

	cpu.eip=rm.val;
	//printf("\nret_eip=%x\n",cpu.eip);
	cpu.esp=cpu.esp+data_size/8;
	OPERAND imm;
	imm.data_size=16;
	imm.type=OPR_IMM;
	imm.sreg=SREG_CS;
	imm.addr=eip+1;
	operand_read(&imm);
	//printf("\nret_imm.val=%x esp=%x\n",imm.val,cpu.esp);
	/*uint32_t i=0;
	if(imm&0x8000)
		i=0xffff0000|imm;
	else
		i=0xffff&imm;*/
	cpu.esp+=imm.val;
	//printf("\nret_imm.val=%x esp=%x\n",imm.val,cpu.esp);
	return 0;
}
