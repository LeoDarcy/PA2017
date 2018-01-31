#include"nemu.h"
typedef struct
{
	bool valid;
	uint32_t tap;
	//uint32_t addr;
	uint8_t cac[64];
}block;
block cache[1024];
uint32_t  cache_read(paddr_t paddr,size_t len,block cache[]);
void cache_write(paddr_t paddr,size_t len,uint32_t data, block cache[]);
uint32_t hw_mem_read(paddr_t paddr,size_t len);
void hw_mem_write(paddr_t paddr ,size_t len,uint32_t data);
