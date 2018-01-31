#include "common.h"
#include "memory.h"
#include <string.h>

#define VMEM_ADDR 0xa0000
#define SCR_SIZE (320 * 200)
#define NR_PT ((SCR_SIZE + PT_SIZE - 1) / PT_SIZE)  // number of page tables to cover the vmem

PDE* get_updir();
//set the table
PTE vmtable[NR_PTE] align_to_page;
void create_video_mapping() {
	
	/* TODO: create an identical mapping from virtual memory area
	 * [0xa0000, 0xa0000 + SCR_SIZE) to physical memeory area
	 * [0xa0000, 0xa0000 + SCR_SIZE) for user program. You may define
	 * some page tables to create this mapping.
	 */

	//panic("please implement me");
	//find the PDE
	PDE*pdir=get_updir();
	PTE*ptable=(PTE*)va_to_pa(vmtable);
	pdir[0].val=make_pde(ptable);
	uint32_t pframe_idx=VMEM_ADDR;
	for(int i=0;i<(PAGE_SIZE+SCR_SIZE-1)/PAGE_SIZE;i++){
		vmtable[VMEM_ADDR/PAGE_SIZE+i].val=make_pte(pframe_idx);
		pframe_idx=pframe_idx+PAGE_SIZE;
	}
	/*PDE*updir=get_updir();
	updir->val=make_pde(va_to_pa(vmtable));
	for(int i=0;i<(PAGE_SIZE+SCR_SIZE-1)/PAGE_SIZE;i++){
		vmtable[VMEM_ADDR/PAGE_SIZE+i].val=make_pte(VMEM_ADDR+i*PAGE_SIZE);
	}*/
}

void video_mapping_write_test() {
	int i;
	uint32_t *buf = (void *)VMEM_ADDR;
	for(i = 0; i < SCR_SIZE / 4; i ++) {
		buf[i] = i;
	}
}

void video_mapping_read_test() {
	int i;
	uint32_t *buf = (void *)VMEM_ADDR;
	for(i = 0; i < SCR_SIZE / 4; i ++) {
		assert(buf[i] == i);
	}
}

void video_mapping_clear() {
	memset((void *)VMEM_ADDR, 0, SCR_SIZE);
}

