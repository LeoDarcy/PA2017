#include "cpu/cpu.h"
//project 1.2 9/9/2017
//use part to simply the work!!
void set_CF_add(uint32_t result,uint32_t src)
{
	cpu.eflags.CF=(result<src);
}
void set_PF(uint32_t result)
{
	int for_PF=0;
	for(int i=0;i<8;i++)
	{
		for_PF+=(1&result);
		result=((unsigned)result>>1);

	}
	for_PF+=1;
	cpu.eflags.PF=for_PF%2;
}
void set_ZF(uint32_t result)
{
	cpu.eflags.ZF=(result==0);
}
void set_SF(uint32_t result)
{
	cpu.eflags.SF=sign(result);
}
void set_OF_add(uint32_t result,uint32_t src,uint32_t dest)
{
	if(sign(src)==sign(dest))
	{
		if(sign(src)!=sign(result))
			cpu.eflags.OF=1;
		else
			cpu.eflags.OF=0;
	}
	else
		cpu.eflags.OF=0;
}



uint32_t alu_add(uint32_t src, uint32_t dest) {
	//printf("\e[0;31mPlease implement me at alu.c\e[0m\n");
	//assert(0);
	cpu.eflags.ZF=0;
	cpu.eflags.SF=0;
	cpu.eflags.OF=0;
	cpu.eflags.PF=0;
	cpu.eflags.CF=0;
	uint32_t sum=src+dest;
	/*if(src>0x7fffffff&&dest>0x7fffffff&&0==sign(sum))
		cpu.eflags.OF=1;
	if(src<0x80000000&&dest<0x80000000&&1==sign(sum))
		cpu.eflags.OF=1;*/
	set_CF_add(sum,src);
	set_PF(sum);
	set_ZF(sum);
	set_SF(sum);
	set_OF_add(sum,src,dest);
	return sum;
}


//for the use
void set_OF_adc(uint32_t sum,uint32_t src,uint32_t dest)
{
	if(src>0x7fffffff&&dest>0x7fffffff&&0==sign(sum))
		cpu.eflags.OF=1;
	if(src<0x80000000&&dest<0x80000000&&1==sign(sum))
		cpu.eflags.OF=1;
}
void set_CF_adc(uint32_t sum,uint32_t dest, uint32_t src,int flag_CF)
{
	if(0==flag_CF)
		set_CF_add(sum,src);
	else if(sum<=src||sum<=dest||sum<=(dest+src))
		cpu.eflags.CF=1;
}


uint32_t alu_adc(uint32_t src, uint32_t dest) {
	//printf("\e[0;31mPlease implement me at alu.c\e[0m\n");
	//assert(0);
	int flag_CF=cpu.eflags.CF;
	uint32_t sum=src+dest+cpu.eflags.CF;
	cpu.eflags.ZF=0;
	cpu.eflags.SF=0;
	cpu.eflags.OF=0;
	cpu.eflags.PF=0;
	cpu.eflags.CF=0;
	set_PF(sum);
	set_ZF(sum);
	set_SF(sum);
	set_OF_adc(sum,src,dest);
	set_CF_adc(sum,src,dest,flag_CF);
	return sum;
}
//for the use 
void set_CF_sub(uint32_t sum,uint32_t dest)
{
	if(sum>dest)
		cpu.eflags.CF=1;
}
void set_OF_sub(uint32_t dest,uint32_t src)
{
	if(src==0x80000000&&dest<=0x7fffffff)
		cpu.eflags.OF=1;
	else if(src==0x80000000)
		cpu.eflags.OF=0;
	else
	{
		uint32_t new_src=-src;//~src+1;
		set_OF_add(new_src+dest,dest,new_src);
	}
}

uint32_t alu_sub(uint32_t src, uint32_t dest) {
	//printf("\e[0;31mPlease implement me at alu.c\e[0m\n");
	//assert(0);
	cpu.eflags.ZF=0;
	cpu.eflags.SF=0;
	cpu.eflags.OF=0;
	cpu.eflags.PF=0;
	cpu.eflags.CF=0;
	uint32_t sum=dest-src;
	set_PF(sum);
	set_ZF(sum);
	set_SF(sum);
	set_CF_sub(sum,dest);
	set_OF_sub(dest,src);
	return sum;
}

//for he use 
void set_CF_sbb(uint32_t sum,uint32_t src,uint32_t dest,int flag_CF)
{
	if(0==flag_CF)
		set_CF_sub(sum,dest);
	else 
	{
		sum=dest-src;
		set_CF_sub(sum,dest);
		if(cpu.eflags.CF==0)
		{
			if(sum==0)
				cpu.eflags.CF=1;
		}

	}
}
void set_OF_sbb(uint32_t src,uint32_t dest,int flag_CF)
{
	if(0==flag_CF)
		set_OF_sub(dest,src);
	else if(src==0x7fffffff)
	{
		if(dest==0x80000000)
			cpu.eflags.OF=0;
		else
			cpu.eflags.OF=1;
	}
	else
	{
		set_OF_sub(dest,src+1);
	}
}
uint32_t alu_sbb(uint32_t src, uint32_t dest)
{
	//printf("\e[0;31mPlease implement me at alu.c\e[0m\n");
	//assert(0);
	int flag_CF=cpu.eflags.CF;
	uint32_t sum=dest-src-cpu.eflags.CF;
	cpu.eflags.ZF=0;
	cpu.eflags.SF=0;
	cpu.eflags.OF=0;
	cpu.eflags.PF=0;
	cpu.eflags.CF=0;
	set_PF(sum);
	set_ZF(sum);
	set_SF(sum);
	set_OF_sbb(src,dest,flag_CF);
	set_CF_sbb(sum,src,dest,flag_CF);
	return sum;
}


uint64_t alu_mul(uint32_t src, uint32_t dest, size_t data_size) {
	uint64_t result=(uint64_t)src*(uint64_t)dest;
	set_PF(result);
	set_ZF(result);
	set_SF(result);
	uint64_t comp=1;//may make a mistake using uint32_t,actually if it is doubleword we must uint64_t
	for(int i=0;i<data_size;i++)
		comp=2*comp;
	if(result>=comp)
	{
		cpu.eflags.OF=1;
		cpu.eflags.CF=1;
	}
	else
	{
		cpu.eflags.OF=0;
		cpu.eflags.CF=0;
	}
	return result;
}

int64_t alu_imul(int32_t src, int32_t dest, size_t data_size) {
	//printf("\e[0;31mPlease implement me at alu.c\e[0m\n");
	uint64_t result=(uint64_t)src*(uint64_t)dest;
	set_PF(result);
	set_ZF(result);
	set_SF(result);
	uint64_t comp=1;//may make a mistake using uint32_t,actually if it is doubleword we must uint64_t
	for(int i=0;i<data_size;i++)
		comp=2*comp;
	if(result>=comp)
	{
		cpu.eflags.OF=1;
		cpu.eflags.CF=1;
	}
	else
	{
		cpu.eflags.OF=0;
		cpu.eflags.CF=0;
	}
	return result;
}

uint32_t alu_div(uint64_t src, uint64_t dest, size_t data_size) {
	//printf("\e[0;31mPlease implement me at alu.c\e[0m\n");
	if(src==0)
		assert(0);	
	uint64_t result =dest/src;
	/*set_PF(result);
	set_CF=(result);
	set_ZF(result);
	set_SF(result);
	set_OF(result);*/
	return result;
}

int32_t alu_idiv(int64_t src, int64_t dest, size_t data_size) {
	//printf("\e[0;31mPlease implement me at alu.c\e[0m\n");
	if(src==0)
		assert(0);
	int32_t result=dest/src;
	return result;
}

uint32_t alu_mod(uint64_t src, uint64_t dest) {
	uint64_t result =dest%src;
	return result;
}

int32_t alu_imod(int64_t src, int64_t dest) {
	//printf("\e[0;31mPlease implement me at alu.c\e[0m\n");
	//assert(0);
	int64_t result=dest%src;
	return result;
}

uint32_t alu_and(uint32_t src, uint32_t dest) {
	//printf("\e[0;31mPlease implement me at alu.c\e[0m\n");
	//assert(0);
	cpu.eflags.CF=0;
	cpu.eflags.OF=0;
	cpu.eflags.SF=0;
	cpu.eflags.ZF=0;
	cpu.eflags.PF=0;
	uint32_t sum=src&dest;
	set_PF(sum);
	set_SF(sum);
	set_ZF(sum);
	return sum;
}

uint32_t alu_xor(uint32_t src, uint32_t dest) {
	//printf("\e[0;31mPlease implement me at alu.c\e[0m\n");
	//assert(0);
	cpu.eflags.CF=0;
	cpu.eflags.OF=0;
	cpu.eflags.SF=0;
	cpu.eflags.ZF=0;
	cpu.eflags.PF=0;
	uint32_t sum=src^dest;
	set_PF(sum);
	set_SF(sum);
	set_ZF(sum);
	return sum;
}

uint32_t alu_or(uint32_t src, uint32_t dest) {
	//printf("\e[0;31mPlease implement me at alu.c\e[0m\n");
	//assert(0);
	cpu.eflags.CF=0;
	cpu.eflags.OF=0;
	cpu.eflags.SF=0;
	cpu.eflags.ZF=0;
	cpu.eflags.PF=0;
	uint32_t sum=src|dest;
	set_PF(sum);
	set_SF(sum);
	set_ZF(sum);
	return sum;
}

uint32_t alu_shl(uint32_t src, uint32_t dest, size_t data_size) {
	//printf("\e[0;31mPlease implement me at alu.c\e[0m\n");
	//assert(0);
	cpu.eflags.CF=0;
	//cpu.eflags.OF=0;
	cpu.eflags.SF=0;
	cpu.eflags.ZF=0;
	cpu.eflags.PF=0;
	/*if(data_size==8)
	{
		uint8_t cut=0xFF;
		uint8_t temp=dest&cut;
	}
	else if(16==data_size)
	{
		uint16_t cut=0xFFFF;
		uint16_t temp=dest&cut;
	}
	else
	{
		uint32_t cut=0xFFFFFFFF;
		uint32_t temp=dest&cut;
	}*/
	uint32_t temp=1;
	uint32_t cut=1;
	size_t siz=data_size;
	for(;siz>1;siz--)
	{
		temp=temp*2+1;
		cut=cut*2+1;
	}
	temp=temp&dest;
	if(1==src)
		cpu.eflags.OF=(temp>>(data_size-1));
	else
		cpu.eflags.OF=0;
	for(;src>0;src--)
	{
		cpu.eflags.CF=(temp>>(data_size-1));
		temp*=2;
		temp=temp&cut;
	}
	for(siz=data_size;siz>0;siz--)
		dest=dest>>1;
	for(siz=data_size;siz>0;siz--)
		dest=dest<<1;
	dest=dest|temp;
	//int key_SF=0;
	/*for(;data_size>1;data_size--)
		temp=temp>>1;*/
	cpu.eflags.SF=(temp>>(data_size-1));
	set_PF(temp);
	//set_SF(dest);
	set_ZF(temp);
	return dest;
}

uint32_t alu_shr(uint32_t src, uint32_t dest, size_t data_size) {
	cpu.eflags.CF=0;
	//cpu.eflags.OF=0;
	cpu.eflags.SF=0;
	cpu.eflags.ZF=0;
	cpu.eflags.PF=0;
	/*size_t count=src;
	if(src>data_size)
		count=data_size;
	if(1==count)
		cpu.eflags.OF=sign(src);
	for(;count>0;count--)
	{
		cpu.eflags.CF=(1&dest);
		dest/=2;
	}
	set_PF(dest);
	set_SF(dest);
	set_ZF(dest);
	return dest;*/
	uint32_t temp=1;
	uint32_t cut=1;
	uint32_t sign_for=1;
	size_t siz=data_size;
	for(;siz>1;siz--)
	{
		temp=temp*2+1;
		cut=cut*2+1;
		sign_for*=2;
	}
	temp=temp&dest;
	sign_for=sign_for&temp;
	if(1==src)
		cpu.eflags.OF=(temp>>(data_size-1));
	else
		cpu.eflags.OF=0;
	for(;src>0;src--)
	{
		cpu.eflags.CF=(temp&1);
		temp/=2;
		//temp=temp|sign_for;
		temp=temp&cut;
	}
	for(siz=data_size;siz>0;siz--)
		dest=dest>>1;
	for(siz=data_size;siz>0;siz--)
		dest=dest<<1;
	dest=dest|temp;
	//int key_SF=0;
	/*for(;data_size>1;data_size--)
		temp=temp>>1;*/
	cpu.eflags.SF=(temp>>(data_size-1));
	set_PF(temp);
	//set_SF(dest);
	set_ZF(temp);
	return dest;

}

uint32_t alu_sar(uint32_t src, uint32_t dest, size_t data_size) {
	//printf("\e[0;31mPlease implement me at alu.c\e[0m\n");
	cpu.eflags.CF=0;
	//cpu.eflags.OF=0;
	cpu.eflags.SF=0;
	cpu.eflags.ZF=0;
	cpu.eflags.PF=0;
/*	size_t count=src;
	if(src>data_size)
		count=data_size;
	if(1==count)
		cpu.eflags.OF=0;
	unsigned k=0;
	if(sign(dest)==1)
	{
		k=1;
		for(int i=1;i<data_size;i++)
			k*=2;
	}
	for(;count>0;count--)
	{
		cpu.eflags.CF=(1&dest);
		dest=dest/(2);
		dest=dest|k;
	}
	set_PF(dest);
	set_SF(dest);
	set_ZF(dest);
	return dest*/
	uint32_t temp=1;
	uint32_t cut=1;
	uint32_t sign_for=1;
	size_t siz=data_size;
	for(;siz>1;siz--)
	{
		temp=temp*2+1;
		cut=cut*2+1;
		sign_for*=2;
	}
	temp=temp&dest;
	sign_for=sign_for&temp;
	if(1==src)
		cpu.eflags.OF=(temp>>(data_size-1));
	else
		cpu.eflags.OF=0;
	for(;src>0;src--)
	{
		cpu.eflags.CF=(temp&1);
		temp/=2;
		temp=temp|sign_for;
		temp=temp&cut;
	}
	for(siz=data_size;siz>0;siz--)
		dest=dest>>1;
	for(siz=data_size;siz>0;siz--)
		dest=dest<<1;
	dest=dest|temp;
	//int key_SF=0;
	/*for(;data_size>1;data_size--)
		temp=temp>>1;*/
	cpu.eflags.SF=(temp>>(data_size-1));
	set_PF(temp);
	//set_SF(dest);
	set_ZF(temp);
	return dest;
}

uint32_t alu_sal(uint32_t src, uint32_t dest, size_t data_size) {
	//printf("\e[0;31mPlease implement me at alu.c\e[0m\n");
	//assert(0);
	cpu.eflags.CF=0;
	//cpu.eflags.OF=0;
	cpu.eflags.SF=0;
	cpu.eflags.ZF=0;
	cpu.eflags.PF=0;
	/*size_t count=src;
	if(src>data_size)
		count=data_size;
	if(1==count)
		cpu.eflags.OF=sign(dest);
	else
		cpu.eflags.OF=0;
	for(;count>0;count--)
	{
		cpu.eflags.CF=sign(dest);
		dest*=2;
	}
	set_PF(dest);
	set_SF(dest);
	set_ZF(dest);*/
	return alu_shl(src,dest,data_size);
}
