#include"cpu/instr.h"
#include"nemu.h"
#include"device/port_io.h"
make_instr_func(in_dx2al){
	/*uint16_t port=cpu.edx;
	//printf("edx=%x,port=%x,",cpu.edx,port);
	uint32_t data=pio_read(port,1);
	uint32_t ex=cpu.eax;
	ex=((ex>>8)<<8);
	ex+=data;
	cpu.eax=ex;
	return 1;
	*/
	OPERAND src;
	src.data_size=16;
	src.type=OPR_REG;
	src.addr=REG_DX;
	operand_read(&src);
	//printf("\n src=%x\n",src.val);
	OPERAND dst;
	dst.type=OPR_REG;
	dst.data_size=8;
	dst.addr=REG_AL;
	dst.val=pio_read(src.val,1);
	operand_write(&dst);
	//printf("\neax=%x,ex=%x\n",cpu.eax,ex);	
	return 1;
}
make_instr_func(in_dx2eax){
	uint16_t port=cpu.edx;
	uint32_t data=pio_read(port,4);
	cpu.eax=data;
	return 1;
}
