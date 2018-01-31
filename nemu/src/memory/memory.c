#include "nemu.h"
#include "cpu/cpu.h"
#include "memory/memory.h"
#include "device/mm_io.h"
#include <memory.h>
#include <stdio.h>

#include"memory/cache.h"
uint8_t hw_mem[MEM_SIZE_B];

uint32_t hw_mem_read(paddr_t paddr, size_t len) {
	assert(paddr<MEM_SIZE_B);
	uint32_t ret = 0;
	//printf("hw_mem_read.c  paddr=%x",paddr);
	int map_NO=is_mmio(paddr);
	if(-1==map_NO)
	{memcpy(&ret, hw_mem + paddr, len);
	return ret;
	}
	else
		return mmio_read(paddr,len,map_NO);
}

void hw_mem_write(paddr_t paddr, size_t len, uint32_t data) {
	assert(paddr<MEM_SIZE_B);
	int map_NO=is_mmio(paddr);
	if(-1==map_NO)
		memcpy(hw_mem + paddr, &data, len);
	else
		mmio_write(paddr,len,data,map_NO);
}

uint32_t paddr_read(paddr_t paddr, size_t len) {
	uint32_t ret = 0;
	int map_NO=is_mmio(paddr);
	if(-1==map_NO){
#ifdef CACHE_ENABLED
	ret=cache_read(paddr,len,cache);
#else
	ret=hw_mem_read(paddr,len);
#endif
	//ret = hw_mem_read(paddr, len);
	return ret;
	}
	else
		assert(0);
		//return mmio_read(paddr,len,map_NO);
}

void paddr_write(paddr_t paddr, size_t len, uint32_t data) {
	//hw_mem_write(paddr, len, data);
	int map_NO=is_mmio(paddr);
	//assert(map_NO==-1);
	if(-1==map_NO){
#ifdef CACHE_ENABLED
	cache_write(paddr,len,data,cache);
#else
	hw_mem_write(paddr,len,data);
#endif
	}
	else
		assert(0);
		//mmio_write(paddr,len,data,map_NO);
}


uint32_t laddr_read(laddr_t laddr, size_t len) {
	assert(len==1||len==2||len==4);
	if(cpu.cr0.pg==1&&cpu.cr0.pe==1){
	/*	if((laddr&0xfff)>((laddr+len-1)&0xfff)){
			printf("cross the page eip=%x",cpu.eip);
			assert(0);
		}
		else{
			paddr_t hwaddr=page_translate(laddr);
			return hw_mem_read(hwaddr,len);
		}*/
		paddr_t hwaddr=page_translate(laddr);
		return hw_mem_read(hwaddr,len);
	}
	else{
		return paddr_read(laddr, len);
	}
}

void laddr_write(laddr_t laddr, size_t len, uint32_t data) {
	assert(len==1||len==2||len==4);
	if(cpu.cr0.pg==1&&cpu.cr0.pe==1){
		/*if((laddr&0xfff)>((laddr+len-1)&0xfff)){
			printf("\neip=%x,laddr=%x\n",cpu.eip,laddr);
			assert(0);
		}
		else{
			paddr_t hwaddr=page_translate(laddr);
			hw_mem_write(hwaddr,len,data);
		}*/
		paddr_t hwaddr=page_translate(laddr);
		hw_mem_write(hwaddr,len,data);
	}
	else{
		paddr_write(laddr, len, data);
	}
}


uint32_t vaddr_read(vaddr_t vaddr, uint8_t sreg, size_t len) {
	assert(len == 1 || len == 2 || len == 4);
#ifndef IA32_SEG
	return laddr_read(vaddr,len);
#else
	uint32_t laddr=vaddr;
	if(cpu.cr0.pe==1){
		laddr=segment_translate(vaddr,sreg);
	}
	return laddr_read(laddr, len);
#endif
}

void vaddr_write(vaddr_t vaddr, uint8_t sreg, size_t len, uint32_t data) {
	assert(len == 1 || len == 2 || len == 4);
#ifndef IA32_SEG
	laddr_write(vaddr, len, data);
#else
	uint32_t laddr=vaddr;
	/*if(cpu.cr0.pe==1){
		laddr=segment_translate(vaddr,sreg);
	}*/
	laddr_write(laddr,len,data);
#endif
}

void init_mem() {
	// clear the memory on initiation
	memset(hw_mem, 0, MEM_SIZE_B);
#ifdef CACHE_ENABLED
	for(int i=0;i<1024;i++)
	{
		cache[i].valid=0;
	}
#endif
#ifdef TLB_ENABLED
	make_all_tlb();
	init_all_tlb();
	//make_all_tlb();
#endif
}

uint32_t instr_fetch(vaddr_t vaddr, size_t len) {
	assert(len == 1 || len == 2 || len == 4);
	return vaddr_read(vaddr, SREG_CS, len);
}

uint8_t * get_mem_addr() {
	return hw_mem;
}
