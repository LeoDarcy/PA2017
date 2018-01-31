#ifndef __INSTRUCTIONS_H__
#define __INSTRUCTIONS_H__

#include "nemu.h"
#include "cpu/cpu.h"
#include "cpu/fpu.h"
#include "cpu/modrm.h"
#include "cpu/operand.h"
#include "cpu/instr_helper.h"
#include "memory/memory.h"

//add instr 9/27/2017
#include "cpu/instr/cmp.h"
#include "cpu/instr/add.h"
#include"cpu/instr/push.h"
#include"cpu/instr/call.h"
#include"cpu/instr/ret.h"
#include"cpu/instr/test.h"
#include"cpu/instr/jcc.h"
#include"cpu/instr/sub.h"
#include"cpu/instr/leave.h"
#include"cpu/instr/lea.h"
#include"cpu/instr/inc.h"
#include"cpu/instr/and.h"
#include"cpu/instr/adc.h"
#include"cpu/instr/pop.h"
#include"cpu/instr/xor.h"
#include"cpu/instr/or.h"
#include"cpu/instr/dec.h"
#include"cpu/instr/setcc.h"
#include"cpu/instr/not.h"
#include"cpu/instr/sbb.h"
#include"cpu/instr/imul.h"
#include"cpu/instr/idiv.h"
#include"cpu/instr/mul.h"
#include"cpu/instr/stos.h"
#include"cpu/instr/cmps.h"
#include"cpu/instr/lgdt.h"

//pa4
#include"cpu/instr/int.h"
#include"cpu/instr/cli.h"
#include"cpu/instr/lidt.h"
#include"cpu/instr/sti.h"
#include"cpu/instr/pusha.h"
#include"cpu/instr/popa.h"
#include"cpu/instr/iret.h"
#include"cpu/instr/in.h"
#include"cpu/instr/out.h"


//game
#include"cpu/instr/xchg.h"
#include"cpu/instr/neg.h"
#include"cpu/instr/div.h"

#include <stdio.h>
 
extern uint8_t data_size;

#include "cpu/instr/mov.h"
#include "cpu/instr/jmp.h"
#include "cpu/instr/shift.h"
#include "cpu/instr/flags.h"
#include "cpu/instr/group.h"
#include "cpu/instr/special.h"
#include "cpu/instr/x87.h"

/* TODO: add more instructions here */ 

/*
int add_r2rm_b(uint32_t eip,uint8_t opcode)
{
	OPERAND rm,r;
	rm.data_size=r.data_size=data_size;
	int len=1;
	len+=modrm_r_rm(eip+1,&r,&rm);
	operand_read(&r);
	operand_read(&rm);
	rm.val=alu_add(r.val,rm.val);
	operand_write(&rm);
	return len;
}
int add_r2rm_v(uint32_t eip,uint8_t opcode)
{
	OPERAND rm,r;
	rm.data_size=r.data_size=data_size;
	int len=1;
	len+=modrm_r_rm(eip+1,&r,&rm);
	operand_read(&r);
	operand_read(&rm);
	rm.val=alu_add(r.val,rm.val);
	operand_write(&rm);
	return len;
}
int add_rm2r_b(uint32_t eip,uint8_t opcode)
{
	OPERAND rm,r;
	rm.data_size=r.data_size=data_size;
	int len=1;
	len+=modrm_r_rm(eip+1,&r,&rm);
	operand_read(&rm);
	operand_read(&r);
	r.val=alu_add(r.val,rm.val);
	operand_write(&r);
	return len;
}
int add_rm2r_v(uint32_t eip,uint8_t opcode)
{
	OPERAND rm,r;
	rm.data_size=r.data_size=data_size;
	int len=1;
	len+=modrm_r_rm(eip+1,&r,&rm);
	operand_read(&rm);
	operand_read(&r);
	r.val=alu_add(r.val,rm.val);
	operand_write(&r);
	return len;
}


int mov_r2rm_b(uint32_t eip,uint8_t opcode)
{
	OPERAND rm,r;
	rm.data_size=r.data_size=data_size;
	int len=1;
	len+=modrm_r_rm(eip+1,&r,&rm);
	operand_read(&r);
	rm.val=r.val;
	operand_write(&rm);
	return len;
}

int mov_r2rm_v(uint32_t eip,uint8_t opcode)
{
	OPERAND rm,r;
	rm.data_size=r.data_size=data_size;
	int len=1;
	len+=modrm_r_rm(eip+1,&r,&rm);
	operand_read(&r);
	rm.val=r.val;
	operand_write(&rm);
	return len;
}
int mov_rm2r_b(uint32_t eip,uint8_t opcode)
{
	OPERAND rm,r;
	rm.data_size=r.data_size=data_size;
	int len=1;
	len+=modrm_r_rm(eip+1,&r,&rm);
	operand_read(&rm);
	r.val=rm.val;
	operand_write(&r);
	return len;
}
int mov_rm2r_v(uint32_t eip,uint8_t opcode)
{
	OPERAND rm,r;
	rm.data_size=r.data_size=data_size;
	int len=1;
	len+=modrm_r_rm(eip+1,&r,&rm);
	operand_read(&rm);
	r.val=rm.val;
	operand_write(&r);
	return len;
}
*/


#endif
