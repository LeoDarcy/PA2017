#include"cpu/instr.h"
#include"device/port_io.h"
make_instr_func(out_al2dx){
	uint16_t port=cpu.edx;
	uint32_t data=cpu.eax;
	data=data&0xFF;
	pio_write(port,1,data);
	return 1;
}
