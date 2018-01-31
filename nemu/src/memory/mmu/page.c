#include "cpu/cpu.h"
#include "memory/memory.h"

// translate from linear address to physical address
paddr_t page_translate(laddr_t laddr) {
#ifndef TLB_ENABLED
	//printf("\nPlease implement page_translate()\n");
	//assert(0);
	laddr_t base=cpu.cr3.pdbr;

	//printf("pdbr=%x\n,laddr=%x\n",cpu.cr3.val,laddr);
	uint32_t index=(laddr>>22)&0x3FF;
	paddr_t paddr=(base<<12)+(index<<2);
	//printf("paddr=%x\n",paddr);
	PDE pde;
        //assert(0);	
	pde.val=paddr_read(paddr,4);	
	//printf("pde=%x\n",pde.val);
	if(pde.present==0){
		printf("\npde.val=%x, paddr=%x,eip=%x",pde.val,paddr,cpu.eip);
		assert(pde.present==1);
	}
	base=pde.page_frame;
	//printf("pdbr=%x\n",base);
	index=((laddr>>12)&0x3FF);
	paddr=(base<<12)+(index<<2);
	//printf("paddr=%x\n",paddr);
	PTE pte;
	pte.val=paddr_read(paddr,4);
	//printf("base=%x\n",base);
	assert(pte.present==1);
	base=pte.page_frame;
	paddr=(base<<12)+(laddr&0xFFF);
	//printf("\n paddr=%x,\n",paddr);
	return paddr;
#else	
	return tlb_read(laddr) | (laddr & PAGE_MASK);;
#endif
}
