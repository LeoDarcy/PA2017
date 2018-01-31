#include "cpu/cpu.h"
#include "memory/memory.h"

// return the linear address from the virtual address and segment selector
uint32_t segment_translate(uint32_t offset, uint8_t sreg) {
	/* TODO: perform segment translation from virtual address to linear address
	 * by reading the invisible part of the segment register 'sreg'
	 */
	//if(cpu.cr0.pe==1){
		uint32_t  addr=cpu.segReg[sreg].base;
		addr=addr+offset;
		//assert(addr<cpu.segReg[sreg].limit);
		return addr;
	//}
	//else
	//	return offset;
}

// load the invisible part of a segment register
void load_sreg(uint8_t sreg) {
	/* TODO: load the invisibile part of the segment register 'sreg' by reading the GDT.
	 * The visible part of 'sreg' should be assigned by mov or ljmp already.
	 */
	uint32_t indx=cpu.segReg[sreg].index;
	laddr_t addr=cpu.gdtr.base+sizeof(SegDesc)*indx;
	/*if((64+64*indx)>cpu.gdtr.limit)
		assert(0);*/
	SegDesc tem;
	tem.val[0]=paddr_read(addr,4);
	tem.val[1]=paddr_read(addr+4,4);
	/*check?????*/


	/*not finish yet*/
	cpu.segReg[sreg].soft_use=tem.soft_use;
	cpu.segReg[sreg].type=tem.type;
	cpu.segReg[sreg].privilege_level=tem.privilege_level;
	uint32_t t_base=0;
	t_base=tem.base_15_0;
	t_base=t_base+(tem.base_23_16<<16);
	t_base=t_base+(tem.base_31_24<<24);
	cpu.segReg[sreg].base=t_base;
	t_base=0;
	t_base=tem.limit_15_0;
	t_base=t_base+(tem.limit_19_16<<16);
	cpu.segReg[sreg].limit=t_base;
	//printf("\n tem.limit_15_0=%x,tem_limit_19_16=%x,limit=%x\n",tem.limit_15_0,tem.limit_19_16,t_base);
	assert(cpu.segReg[sreg].limit==0xfffff);
	assert(cpu.segReg[sreg].base==0);
	assert(tem.granularity==1);
	
}
