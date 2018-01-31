#include "common.h"
#include "memory.h"
#include "string.h"

#include <elf.h>

#ifdef HAS_DEVICE_IDE
#define ELF_OFFSET_IN_DISK 0
#endif

#define STACK_SIZE (1 << 20)

void ide_read(uint8_t *, uint32_t, uint32_t);
void create_video_mapping();
uint32_t get_ucr3();

uint32_t loader() {	
	Elf32_Ehdr *elf;
	Elf32_Phdr *ph, *eph;
	//BREAK_POINT
#ifdef HAS_DEVICE_IDE
	uint8_t buf[4096];
	ide_read(buf, ELF_OFFSET_IN_DISK, 4096);
	elf = (void*)buf;
	Log("ELF loading from hard disk.");
#else
	elf = (void *)0x0;
	Log("ELF loading from ram disk.");
#endif

	/* Load each program segment */
	ph = (void *)elf + elf->e_phoff;
	eph = ph + elf->e_phnum;
	for(; ph < eph; ph ++) {
		if(ph->p_type == PT_LOAD) {
#ifdef IA32_PAGE
			//panic("Please implement the loader");
			uint32_t padd=mm_malloc(ph->p_vaddr,ph->p_memsz);
			//BREAK_POINT
			//Log("padd=%s",padd);
	#ifdef HAS_DEVICE_IDE
			ide_read((void*)padd,ph->p_offset,ph->p_filesz);
			/*if(ph->p_memsz > ph->p_filesz)
				ide_write(padd+ph->p_filesz,  ?????
				*/
	#else
			memcpy((void*)padd,(void*)ph->p_offset,ph->p_filesz);
			if(ph->p_memsz > ph->p_filesz)
				memset((void*)padd+ph->p_filesz,0,ph->p_memsz-ph->p_filesz);
	#endif
#else
			/* TODO: copy the segment from the ELF file to its proper memory area */
			//printf("\nph_vadd=x,ph_filesz=%d,ph_memsz=%d\n",ph->p_filesz,ph->p_memsz);
			memcpy((void*)ph->p_vaddr,(void*)ph->p_offset,ph->p_filesz);
			/* TODO: zeror the memory area [vaddr + file_sz, vaddr + mem_sz) */
			if(ph->p_memsz > ph->p_filesz)
				memset((void*)ph->p_vaddr+ph->p_filesz,0,ph->p_memsz-ph->p_filesz);
#endif
#ifdef IA32_PAGE
			/* Record the program break for future use */
			extern uint32_t brk;
			uint32_t new_brk = ph->p_vaddr + ph->p_memsz - 1;
			if(brk < new_brk) { brk = new_brk; }
			/*uint32_t padd=mm_malloc(ph->p_vaddr,ph->p_memsz);
			memcpy((void*)padd,(void*)ph->p_offset,ph->p_filesz);*/
#endif
		}
	}

	volatile uint32_t entry = elf->e_entry;

#ifdef IA32_PAGE
	mm_malloc(KOFFSET - STACK_SIZE, STACK_SIZE);
	//mm_malloc(ph->p_vaddr,ph->p_memsz);
#ifdef HAS_DEVICE_VGA
	create_video_mapping();
#endif
	write_cr3(get_ucr3());
#endif
	return entry;
}
