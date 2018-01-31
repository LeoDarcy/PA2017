#include"cpu/cpu.h"
#include"memory/memory.h"
#include<memory.h>
#include<time.h>
#include<stdlib.h>
#include"memory/cache.h"
//block=64b=2^6=2^3*2^3   cache=2^16=2^10*2^6//2^10block
/*typedef struct
{
	bool valid;
	uint32_t tap;
	uint32_t addr;
	uint8_t cac[64];
}block;
block cache[1024];*/
uint32_t cache_read(paddr_t paddr,size_t len,block cache[])
{
	uint32_t data=0;
	uint32_t addr=paddr&0x3F;
	uint32_t group=(paddr>>6)&0x7F;
	uint32_t Mytap=(paddr>>13);
	int i=0;
	for(;i<8;i++)
	{
		if(cache[group*8+i].tap==Mytap&&cache[group*8+i].valid)
		{
			uint32_t My=group*8+i;
			for(size_t j=0;j<len;j++)
			{
				uint32_t tem=cache[My].cac[addr];
				data=data+(tem<<(j*4));
				addr++;
			}
			return data;
			break;
		}
	}
	if(i>=8)
	{
		data=hw_mem_read(paddr,len);
		for( i=0;i<8;i++)//true==can add
		{
			if(cache[group*8+i].valid==0)
			{
				memcpy(cache[group*8+i].cac,hw_mem+(paddr-addr),64);
				break;
			}
		}
		if(i>=8)//replace
		{
			srand((unsigned )time(NULL));
			i=rand()%8;
			memcpy(cache[group*8+i].cac,hw_mem+paddr-addr,64);
			cache[group*8+i].valid=1;
			cache[group*8+i].tap=(paddr>>13);
			//cache[group*8+i].addr=0;
		}
		return data;
	}
	return data;
}
void cache_write(paddr_t paddr,size_t len,uint32_t data,block cache[])
{
	memcpy(hw_mem+paddr,&data,len);
	uint32_t group=(paddr>>6)&0x7F;
	uint32_t Mytap=(paddr>>13);
	uint32_t addr=paddr&0x3F;
	int i=0;
	for(;i<8;i++)
	{
		if(cache[group*8+i].tap==Mytap&&cache[group*8+i].valid)
		{
			uint32_t My=group*8+i;
			memcpy(&cache[My].cac[addr],hw_mem+paddr,len);//can be better
			break;
		}
	}
}
