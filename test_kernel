
./kernel/kernel:     file format elf32-i386


Disassembly of section .text:

00030000 <start>:
   30000:	bd 00 00 00 00       	mov    $0x0,%ebp
   30005:	bc 00 00 00 08       	mov    $0x8000000,%esp
   3000a:	e9 ed 12 00 00       	jmp    312fc <init>

0003000f <vec0>:
   3000f:	6a 00                	push   $0x0
   30011:	6a 00                	push   $0x0
   30013:	eb 72                	jmp    30087 <asm_do_irq>

00030015 <vec1>:
   30015:	6a 00                	push   $0x0
   30017:	6a 01                	push   $0x1
   30019:	eb 6c                	jmp    30087 <asm_do_irq>

0003001b <vec2>:
   3001b:	6a 00                	push   $0x0
   3001d:	6a 02                	push   $0x2
   3001f:	eb 66                	jmp    30087 <asm_do_irq>

00030021 <vec3>:
   30021:	6a 00                	push   $0x0
   30023:	6a 03                	push   $0x3
   30025:	eb 60                	jmp    30087 <asm_do_irq>

00030027 <vec4>:
   30027:	6a 00                	push   $0x0
   30029:	6a 04                	push   $0x4
   3002b:	eb 5a                	jmp    30087 <asm_do_irq>

0003002d <vec5>:
   3002d:	6a 00                	push   $0x0
   3002f:	6a 05                	push   $0x5
   30031:	eb 54                	jmp    30087 <asm_do_irq>

00030033 <vec6>:
   30033:	6a 00                	push   $0x0
   30035:	6a 06                	push   $0x6
   30037:	eb 4e                	jmp    30087 <asm_do_irq>

00030039 <vec7>:
   30039:	6a 00                	push   $0x0
   3003b:	6a 07                	push   $0x7
   3003d:	eb 48                	jmp    30087 <asm_do_irq>

0003003f <vec8>:
   3003f:	6a 08                	push   $0x8
   30041:	eb 44                	jmp    30087 <asm_do_irq>

00030043 <vec9>:
   30043:	6a 00                	push   $0x0
   30045:	6a 09                	push   $0x9
   30047:	eb 3e                	jmp    30087 <asm_do_irq>

00030049 <vec10>:
   30049:	6a 0a                	push   $0xa
   3004b:	eb 3a                	jmp    30087 <asm_do_irq>

0003004d <vec11>:
   3004d:	6a 0b                	push   $0xb
   3004f:	eb 36                	jmp    30087 <asm_do_irq>

00030051 <vec12>:
   30051:	6a 0c                	push   $0xc
   30053:	eb 32                	jmp    30087 <asm_do_irq>

00030055 <vec13>:
   30055:	6a 0d                	push   $0xd
   30057:	eb 2e                	jmp    30087 <asm_do_irq>

00030059 <vec14>:
   30059:	6a 0e                	push   $0xe
   3005b:	eb 2a                	jmp    30087 <asm_do_irq>

0003005d <vecsys>:
   3005d:	6a 00                	push   $0x0
   3005f:	68 80 00 00 00       	push   $0x80
   30064:	eb 21                	jmp    30087 <asm_do_irq>

00030066 <irq0>:
   30066:	6a 00                	push   $0x0
   30068:	68 e8 03 00 00       	push   $0x3e8
   3006d:	eb 18                	jmp    30087 <asm_do_irq>

0003006f <irq1>:
   3006f:	6a 00                	push   $0x0
   30071:	68 e9 03 00 00       	push   $0x3e9
   30076:	eb 0f                	jmp    30087 <asm_do_irq>

00030078 <irq14>:
   30078:	6a 00                	push   $0x0
   3007a:	68 f6 03 00 00       	push   $0x3f6
   3007f:	eb 06                	jmp    30087 <asm_do_irq>

00030081 <irq_empty>:
   30081:	6a 00                	push   $0x0
   30083:	6a ff                	push   $0xffffffff
   30085:	eb 00                	jmp    30087 <asm_do_irq>

00030087 <asm_do_irq>:
   30087:	60                   	pusha  
   30088:	54                   	push   %esp
   30089:	e8 98 05 00 00       	call   30626 <irq_handle>
   3008e:	83 c4 04             	add    $0x4,%esp
   30091:	61                   	popa   
   30092:	83 c4 08             	add    $0x8,%esp
   30095:	cf                   	iret   

00030096 <write_idtr>:
   30096:	55                   	push   %ebp
   30097:	89 e5                	mov    %esp,%ebp
   30099:	e8 b9 03 00 00       	call   30457 <__x86.get_pc_thunk.ax>
   3009e:	05 62 bf 00 00       	add    $0xbf62,%eax
   300a3:	8b 55 0c             	mov    0xc(%ebp),%edx
   300a6:	4a                   	dec    %edx
   300a7:	66 89 90 00 18 00 00 	mov    %dx,0x1800(%eax)
   300ae:	8b 55 08             	mov    0x8(%ebp),%edx
   300b1:	66 89 90 02 18 00 00 	mov    %dx,0x1802(%eax)
   300b8:	8b 55 08             	mov    0x8(%ebp),%edx
   300bb:	c1 ea 10             	shr    $0x10,%edx
   300be:	66 89 90 04 18 00 00 	mov    %dx,0x1804(%eax)
   300c5:	8d 80 00 18 00 00    	lea    0x1800(%eax),%eax
   300cb:	0f 01 18             	lidtl  (%eax)
   300ce:	90                   	nop
   300cf:	5d                   	pop    %ebp
   300d0:	c3                   	ret    

000300d1 <sti>:
   300d1:	55                   	push   %ebp
   300d2:	89 e5                	mov    %esp,%ebp
   300d4:	e8 7e 03 00 00       	call   30457 <__x86.get_pc_thunk.ax>
   300d9:	05 27 bf 00 00       	add    $0xbf27,%eax
   300de:	fb                   	sti    
   300df:	90                   	nop
   300e0:	5d                   	pop    %ebp
   300e1:	c3                   	ret    

000300e2 <set_intr>:
   300e2:	55                   	push   %ebp
   300e3:	89 e5                	mov    %esp,%ebp
   300e5:	e8 6d 03 00 00       	call   30457 <__x86.get_pc_thunk.ax>
   300ea:	05 16 bf 00 00       	add    $0xbf16,%eax
   300ef:	8b 45 10             	mov    0x10(%ebp),%eax
   300f2:	8b 55 08             	mov    0x8(%ebp),%edx
   300f5:	66 89 02             	mov    %ax,(%edx)
   300f8:	8b 45 0c             	mov    0xc(%ebp),%eax
   300fb:	8b 55 08             	mov    0x8(%ebp),%edx
   300fe:	66 89 42 02          	mov    %ax,0x2(%edx)
   30102:	8b 45 08             	mov    0x8(%ebp),%eax
   30105:	c6 40 04 00          	movb   $0x0,0x4(%eax)
   30109:	8b 45 08             	mov    0x8(%ebp),%eax
   3010c:	8a 50 05             	mov    0x5(%eax),%dl
   3010f:	83 e2 f0             	and    $0xfffffff0,%edx
   30112:	83 ca 0e             	or     $0xe,%edx
   30115:	88 50 05             	mov    %dl,0x5(%eax)
   30118:	8b 45 08             	mov    0x8(%ebp),%eax
   3011b:	8a 50 05             	mov    0x5(%eax),%dl
   3011e:	83 e2 ef             	and    $0xffffffef,%edx
   30121:	88 50 05             	mov    %dl,0x5(%eax)
   30124:	8b 45 14             	mov    0x14(%ebp),%eax
   30127:	83 e0 03             	and    $0x3,%eax
   3012a:	88 c2                	mov    %al,%dl
   3012c:	8b 45 08             	mov    0x8(%ebp),%eax
   3012f:	83 e2 03             	and    $0x3,%edx
   30132:	88 d1                	mov    %dl,%cl
   30134:	c1 e1 05             	shl    $0x5,%ecx
   30137:	8a 50 05             	mov    0x5(%eax),%dl
   3013a:	83 e2 9f             	and    $0xffffff9f,%edx
   3013d:	09 ca                	or     %ecx,%edx
   3013f:	88 50 05             	mov    %dl,0x5(%eax)
   30142:	8b 45 08             	mov    0x8(%ebp),%eax
   30145:	8a 50 05             	mov    0x5(%eax),%dl
   30148:	83 ca 80             	or     $0xffffff80,%edx
   3014b:	88 50 05             	mov    %dl,0x5(%eax)
   3014e:	8b 45 10             	mov    0x10(%ebp),%eax
   30151:	c1 e8 10             	shr    $0x10,%eax
   30154:	8b 55 08             	mov    0x8(%ebp),%edx
   30157:	66 89 42 06          	mov    %ax,0x6(%edx)
   3015b:	90                   	nop
   3015c:	5d                   	pop    %ebp
   3015d:	c3                   	ret    

0003015e <set_trap>:
   3015e:	55                   	push   %ebp
   3015f:	89 e5                	mov    %esp,%ebp
   30161:	e8 f1 02 00 00       	call   30457 <__x86.get_pc_thunk.ax>
   30166:	05 9a be 00 00       	add    $0xbe9a,%eax
   3016b:	8b 45 10             	mov    0x10(%ebp),%eax
   3016e:	8b 55 08             	mov    0x8(%ebp),%edx
   30171:	66 89 02             	mov    %ax,(%edx)
   30174:	8b 45 0c             	mov    0xc(%ebp),%eax
   30177:	8b 55 08             	mov    0x8(%ebp),%edx
   3017a:	66 89 42 02          	mov    %ax,0x2(%edx)
   3017e:	8b 45 08             	mov    0x8(%ebp),%eax
   30181:	c6 40 04 00          	movb   $0x0,0x4(%eax)
   30185:	8b 45 08             	mov    0x8(%ebp),%eax
   30188:	8a 50 05             	mov    0x5(%eax),%dl
   3018b:	83 ca 0f             	or     $0xf,%edx
   3018e:	88 50 05             	mov    %dl,0x5(%eax)
   30191:	8b 45 08             	mov    0x8(%ebp),%eax
   30194:	8a 50 05             	mov    0x5(%eax),%dl
   30197:	83 e2 ef             	and    $0xffffffef,%edx
   3019a:	88 50 05             	mov    %dl,0x5(%eax)
   3019d:	8b 45 14             	mov    0x14(%ebp),%eax
   301a0:	83 e0 03             	and    $0x3,%eax
   301a3:	88 c2                	mov    %al,%dl
   301a5:	8b 45 08             	mov    0x8(%ebp),%eax
   301a8:	83 e2 03             	and    $0x3,%edx
   301ab:	88 d1                	mov    %dl,%cl
   301ad:	c1 e1 05             	shl    $0x5,%ecx
   301b0:	8a 50 05             	mov    0x5(%eax),%dl
   301b3:	83 e2 9f             	and    $0xffffff9f,%edx
   301b6:	09 ca                	or     %ecx,%edx
   301b8:	88 50 05             	mov    %dl,0x5(%eax)
   301bb:	8b 45 08             	mov    0x8(%ebp),%eax
   301be:	8a 50 05             	mov    0x5(%eax),%dl
   301c1:	83 ca 80             	or     $0xffffff80,%edx
   301c4:	88 50 05             	mov    %dl,0x5(%eax)
   301c7:	8b 45 10             	mov    0x10(%ebp),%eax
   301ca:	c1 e8 10             	shr    $0x10,%eax
   301cd:	8b 55 08             	mov    0x8(%ebp),%edx
   301d0:	66 89 42 06          	mov    %ax,0x6(%edx)
   301d4:	90                   	nop
   301d5:	5d                   	pop    %ebp
   301d6:	c3                   	ret    

000301d7 <init_idt>:
   301d7:	55                   	push   %ebp
   301d8:	89 e5                	mov    %esp,%ebp
   301da:	53                   	push   %ebx
   301db:	83 ec 10             	sub    $0x10,%esp
   301de:	e8 78 02 00 00       	call   3045b <__x86.get_pc_thunk.bx>
   301e3:	81 c3 1d be 00 00    	add    $0xbe1d,%ebx
   301e9:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
   301f0:	eb 2b                	jmp    3021d <init_idt+0x46>
   301f2:	c7 c0 81 00 03 00    	mov    $0x30081,%eax
   301f8:	89 c2                	mov    %eax,%edx
   301fa:	8b 45 f8             	mov    -0x8(%ebp),%eax
   301fd:	8d 0c c5 00 00 00 00 	lea    0x0(,%eax,8),%ecx
   30204:	8d 83 00 10 00 00    	lea    0x1000(%ebx),%eax
   3020a:	01 c8                	add    %ecx,%eax
   3020c:	6a 00                	push   $0x0
   3020e:	52                   	push   %edx
   3020f:	6a 08                	push   $0x8
   30211:	50                   	push   %eax
   30212:	e8 47 ff ff ff       	call   3015e <set_trap>
   30217:	83 c4 10             	add    $0x10,%esp
   3021a:	ff 45 f8             	incl   -0x8(%ebp)
   3021d:	81 7d f8 ff 00 00 00 	cmpl   $0xff,-0x8(%ebp)
   30224:	7e cc                	jle    301f2 <init_idt+0x1b>
   30226:	c7 c0 0f 00 03 00    	mov    $0x3000f,%eax
   3022c:	6a 00                	push   $0x0
   3022e:	50                   	push   %eax
   3022f:	6a 08                	push   $0x8
   30231:	8d 83 00 10 00 00    	lea    0x1000(%ebx),%eax
   30237:	50                   	push   %eax
   30238:	e8 21 ff ff ff       	call   3015e <set_trap>
   3023d:	83 c4 10             	add    $0x10,%esp
   30240:	c7 c0 15 00 03 00    	mov    $0x30015,%eax
   30246:	89 c2                	mov    %eax,%edx
   30248:	8d 83 08 10 00 00    	lea    0x1008(%ebx),%eax
   3024e:	6a 00                	push   $0x0
   30250:	52                   	push   %edx
   30251:	6a 08                	push   $0x8
   30253:	50                   	push   %eax
   30254:	e8 05 ff ff ff       	call   3015e <set_trap>
   30259:	83 c4 10             	add    $0x10,%esp
   3025c:	c7 c0 1b 00 03 00    	mov    $0x3001b,%eax
   30262:	89 c2                	mov    %eax,%edx
   30264:	8d 83 10 10 00 00    	lea    0x1010(%ebx),%eax
   3026a:	6a 00                	push   $0x0
   3026c:	52                   	push   %edx
   3026d:	6a 08                	push   $0x8
   3026f:	50                   	push   %eax
   30270:	e8 e9 fe ff ff       	call   3015e <set_trap>
   30275:	83 c4 10             	add    $0x10,%esp
   30278:	c7 c0 21 00 03 00    	mov    $0x30021,%eax
   3027e:	89 c2                	mov    %eax,%edx
   30280:	8d 83 18 10 00 00    	lea    0x1018(%ebx),%eax
   30286:	6a 00                	push   $0x0
   30288:	52                   	push   %edx
   30289:	6a 08                	push   $0x8
   3028b:	50                   	push   %eax
   3028c:	e8 cd fe ff ff       	call   3015e <set_trap>
   30291:	83 c4 10             	add    $0x10,%esp
   30294:	c7 c0 27 00 03 00    	mov    $0x30027,%eax
   3029a:	89 c2                	mov    %eax,%edx
   3029c:	8d 83 20 10 00 00    	lea    0x1020(%ebx),%eax
   302a2:	6a 00                	push   $0x0
   302a4:	52                   	push   %edx
   302a5:	6a 08                	push   $0x8
   302a7:	50                   	push   %eax
   302a8:	e8 b1 fe ff ff       	call   3015e <set_trap>
   302ad:	83 c4 10             	add    $0x10,%esp
   302b0:	c7 c0 2d 00 03 00    	mov    $0x3002d,%eax
   302b6:	89 c2                	mov    %eax,%edx
   302b8:	8d 83 28 10 00 00    	lea    0x1028(%ebx),%eax
   302be:	6a 00                	push   $0x0
   302c0:	52                   	push   %edx
   302c1:	6a 08                	push   $0x8
   302c3:	50                   	push   %eax
   302c4:	e8 95 fe ff ff       	call   3015e <set_trap>
   302c9:	83 c4 10             	add    $0x10,%esp
   302cc:	c7 c0 33 00 03 00    	mov    $0x30033,%eax
   302d2:	89 c2                	mov    %eax,%edx
   302d4:	8d 83 30 10 00 00    	lea    0x1030(%ebx),%eax
   302da:	6a 00                	push   $0x0
   302dc:	52                   	push   %edx
   302dd:	6a 08                	push   $0x8
   302df:	50                   	push   %eax
   302e0:	e8 79 fe ff ff       	call   3015e <set_trap>
   302e5:	83 c4 10             	add    $0x10,%esp
   302e8:	c7 c0 39 00 03 00    	mov    $0x30039,%eax
   302ee:	89 c2                	mov    %eax,%edx
   302f0:	8d 83 38 10 00 00    	lea    0x1038(%ebx),%eax
   302f6:	6a 00                	push   $0x0
   302f8:	52                   	push   %edx
   302f9:	6a 08                	push   $0x8
   302fb:	50                   	push   %eax
   302fc:	e8 5d fe ff ff       	call   3015e <set_trap>
   30301:	83 c4 10             	add    $0x10,%esp
   30304:	c7 c0 3f 00 03 00    	mov    $0x3003f,%eax
   3030a:	89 c2                	mov    %eax,%edx
   3030c:	8d 83 40 10 00 00    	lea    0x1040(%ebx),%eax
   30312:	6a 00                	push   $0x0
   30314:	52                   	push   %edx
   30315:	6a 08                	push   $0x8
   30317:	50                   	push   %eax
   30318:	e8 41 fe ff ff       	call   3015e <set_trap>
   3031d:	83 c4 10             	add    $0x10,%esp
   30320:	c7 c0 43 00 03 00    	mov    $0x30043,%eax
   30326:	89 c2                	mov    %eax,%edx
   30328:	8d 83 48 10 00 00    	lea    0x1048(%ebx),%eax
   3032e:	6a 00                	push   $0x0
   30330:	52                   	push   %edx
   30331:	6a 08                	push   $0x8
   30333:	50                   	push   %eax
   30334:	e8 25 fe ff ff       	call   3015e <set_trap>
   30339:	83 c4 10             	add    $0x10,%esp
   3033c:	c7 c0 49 00 03 00    	mov    $0x30049,%eax
   30342:	89 c2                	mov    %eax,%edx
   30344:	8d 83 50 10 00 00    	lea    0x1050(%ebx),%eax
   3034a:	6a 00                	push   $0x0
   3034c:	52                   	push   %edx
   3034d:	6a 08                	push   $0x8
   3034f:	50                   	push   %eax
   30350:	e8 09 fe ff ff       	call   3015e <set_trap>
   30355:	83 c4 10             	add    $0x10,%esp
   30358:	c7 c0 4d 00 03 00    	mov    $0x3004d,%eax
   3035e:	89 c2                	mov    %eax,%edx
   30360:	8d 83 58 10 00 00    	lea    0x1058(%ebx),%eax
   30366:	6a 00                	push   $0x0
   30368:	52                   	push   %edx
   30369:	6a 08                	push   $0x8
   3036b:	50                   	push   %eax
   3036c:	e8 ed fd ff ff       	call   3015e <set_trap>
   30371:	83 c4 10             	add    $0x10,%esp
   30374:	c7 c0 51 00 03 00    	mov    $0x30051,%eax
   3037a:	89 c2                	mov    %eax,%edx
   3037c:	8d 83 60 10 00 00    	lea    0x1060(%ebx),%eax
   30382:	6a 00                	push   $0x0
   30384:	52                   	push   %edx
   30385:	6a 08                	push   $0x8
   30387:	50                   	push   %eax
   30388:	e8 d1 fd ff ff       	call   3015e <set_trap>
   3038d:	83 c4 10             	add    $0x10,%esp
   30390:	c7 c0 55 00 03 00    	mov    $0x30055,%eax
   30396:	89 c2                	mov    %eax,%edx
   30398:	8d 83 68 10 00 00    	lea    0x1068(%ebx),%eax
   3039e:	6a 00                	push   $0x0
   303a0:	52                   	push   %edx
   303a1:	6a 08                	push   $0x8
   303a3:	50                   	push   %eax
   303a4:	e8 b5 fd ff ff       	call   3015e <set_trap>
   303a9:	83 c4 10             	add    $0x10,%esp
   303ac:	c7 c0 59 00 03 00    	mov    $0x30059,%eax
   303b2:	89 c2                	mov    %eax,%edx
   303b4:	8d 83 70 10 00 00    	lea    0x1070(%ebx),%eax
   303ba:	6a 00                	push   $0x0
   303bc:	52                   	push   %edx
   303bd:	6a 08                	push   $0x8
   303bf:	50                   	push   %eax
   303c0:	e8 99 fd ff ff       	call   3015e <set_trap>
   303c5:	83 c4 10             	add    $0x10,%esp
   303c8:	c7 c0 5d 00 03 00    	mov    $0x3005d,%eax
   303ce:	89 c2                	mov    %eax,%edx
   303d0:	8d 83 00 14 00 00    	lea    0x1400(%ebx),%eax
   303d6:	6a 03                	push   $0x3
   303d8:	52                   	push   %edx
   303d9:	6a 08                	push   $0x8
   303db:	50                   	push   %eax
   303dc:	e8 7d fd ff ff       	call   3015e <set_trap>
   303e1:	83 c4 10             	add    $0x10,%esp
   303e4:	c7 c0 66 00 03 00    	mov    $0x30066,%eax
   303ea:	89 c2                	mov    %eax,%edx
   303ec:	8d 83 00 11 00 00    	lea    0x1100(%ebx),%eax
   303f2:	6a 00                	push   $0x0
   303f4:	52                   	push   %edx
   303f5:	6a 08                	push   $0x8
   303f7:	50                   	push   %eax
   303f8:	e8 e5 fc ff ff       	call   300e2 <set_intr>
   303fd:	83 c4 10             	add    $0x10,%esp
   30400:	c7 c0 6f 00 03 00    	mov    $0x3006f,%eax
   30406:	89 c2                	mov    %eax,%edx
   30408:	8d 83 08 11 00 00    	lea    0x1108(%ebx),%eax
   3040e:	6a 00                	push   $0x0
   30410:	52                   	push   %edx
   30411:	6a 08                	push   $0x8
   30413:	50                   	push   %eax
   30414:	e8 c9 fc ff ff       	call   300e2 <set_intr>
   30419:	83 c4 10             	add    $0x10,%esp
   3041c:	c7 c0 78 00 03 00    	mov    $0x30078,%eax
   30422:	89 c2                	mov    %eax,%edx
   30424:	8d 83 70 11 00 00    	lea    0x1170(%ebx),%eax
   3042a:	6a 00                	push   $0x0
   3042c:	52                   	push   %edx
   3042d:	6a 08                	push   $0x8
   3042f:	50                   	push   %eax
   30430:	e8 ad fc ff ff       	call   300e2 <set_intr>
   30435:	83 c4 10             	add    $0x10,%esp
   30438:	68 00 08 00 00       	push   $0x800
   3043d:	8d 83 00 10 00 00    	lea    0x1000(%ebx),%eax
   30443:	50                   	push   %eax
   30444:	e8 4d fc ff ff       	call   30096 <write_idtr>
   30449:	83 c4 08             	add    $0x8,%esp
   3044c:	e8 80 fc ff ff       	call   300d1 <sti>
   30451:	90                   	nop
   30452:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   30455:	c9                   	leave  
   30456:	c3                   	ret    

00030457 <__x86.get_pc_thunk.ax>:
   30457:	8b 04 24             	mov    (%esp),%eax
   3045a:	c3                   	ret    

0003045b <__x86.get_pc_thunk.bx>:
   3045b:	8b 1c 24             	mov    (%esp),%ebx
   3045e:	c3                   	ret    

0003045f <out_byte>:
   3045f:	55                   	push   %ebp
   30460:	89 e5                	mov    %esp,%ebp
   30462:	83 ec 08             	sub    $0x8,%esp
   30465:	e8 ed ff ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   3046a:	05 96 bb 00 00       	add    $0xbb96,%eax
   3046f:	8b 45 08             	mov    0x8(%ebp),%eax
   30472:	8b 55 0c             	mov    0xc(%ebp),%edx
   30475:	66 89 45 fc          	mov    %ax,-0x4(%ebp)
   30479:	88 55 f8             	mov    %dl,-0x8(%ebp)
   3047c:	8a 45 f8             	mov    -0x8(%ebp),%al
   3047f:	8b 55 fc             	mov    -0x4(%ebp),%edx
   30482:	ee                   	out    %al,(%dx)
   30483:	90                   	nop
   30484:	c9                   	leave  
   30485:	c3                   	ret    

00030486 <init_i8259>:
   30486:	55                   	push   %ebp
   30487:	89 e5                	mov    %esp,%ebp
   30489:	e8 c9 ff ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   3048e:	05 72 bb 00 00       	add    $0xbb72,%eax
   30493:	68 ff 00 00 00       	push   $0xff
   30498:	6a 21                	push   $0x21
   3049a:	e8 c0 ff ff ff       	call   3045f <out_byte>
   3049f:	83 c4 08             	add    $0x8,%esp
   304a2:	68 ff 00 00 00       	push   $0xff
   304a7:	68 a1 00 00 00       	push   $0xa1
   304ac:	e8 ae ff ff ff       	call   3045f <out_byte>
   304b1:	83 c4 08             	add    $0x8,%esp
   304b4:	6a 11                	push   $0x11
   304b6:	6a 20                	push   $0x20
   304b8:	e8 a2 ff ff ff       	call   3045f <out_byte>
   304bd:	83 c4 08             	add    $0x8,%esp
   304c0:	6a 20                	push   $0x20
   304c2:	6a 21                	push   $0x21
   304c4:	e8 96 ff ff ff       	call   3045f <out_byte>
   304c9:	83 c4 08             	add    $0x8,%esp
   304cc:	6a 04                	push   $0x4
   304ce:	6a 21                	push   $0x21
   304d0:	e8 8a ff ff ff       	call   3045f <out_byte>
   304d5:	83 c4 08             	add    $0x8,%esp
   304d8:	6a 03                	push   $0x3
   304da:	6a 21                	push   $0x21
   304dc:	e8 7e ff ff ff       	call   3045f <out_byte>
   304e1:	83 c4 08             	add    $0x8,%esp
   304e4:	6a 11                	push   $0x11
   304e6:	68 a0 00 00 00       	push   $0xa0
   304eb:	e8 6f ff ff ff       	call   3045f <out_byte>
   304f0:	83 c4 08             	add    $0x8,%esp
   304f3:	6a 28                	push   $0x28
   304f5:	68 a1 00 00 00       	push   $0xa1
   304fa:	e8 60 ff ff ff       	call   3045f <out_byte>
   304ff:	83 c4 08             	add    $0x8,%esp
   30502:	6a 02                	push   $0x2
   30504:	68 a1 00 00 00       	push   $0xa1
   30509:	e8 51 ff ff ff       	call   3045f <out_byte>
   3050e:	83 c4 08             	add    $0x8,%esp
   30511:	6a 03                	push   $0x3
   30513:	68 a1 00 00 00       	push   $0xa1
   30518:	e8 42 ff ff ff       	call   3045f <out_byte>
   3051d:	83 c4 08             	add    $0x8,%esp
   30520:	6a 68                	push   $0x68
   30522:	6a 20                	push   $0x20
   30524:	e8 36 ff ff ff       	call   3045f <out_byte>
   30529:	83 c4 08             	add    $0x8,%esp
   3052c:	6a 0a                	push   $0xa
   3052e:	6a 20                	push   $0x20
   30530:	e8 2a ff ff ff       	call   3045f <out_byte>
   30535:	83 c4 08             	add    $0x8,%esp
   30538:	6a 68                	push   $0x68
   3053a:	68 a0 00 00 00       	push   $0xa0
   3053f:	e8 1b ff ff ff       	call   3045f <out_byte>
   30544:	83 c4 08             	add    $0x8,%esp
   30547:	6a 0a                	push   $0xa
   30549:	68 a0 00 00 00       	push   $0xa0
   3054e:	e8 0c ff ff ff       	call   3045f <out_byte>
   30553:	83 c4 08             	add    $0x8,%esp
   30556:	90                   	nop
   30557:	c9                   	leave  
   30558:	c3                   	ret    

00030559 <add_irq_handle>:
   30559:	55                   	push   %ebp
   3055a:	89 e5                	mov    %esp,%ebp
   3055c:	53                   	push   %ebx
   3055d:	83 ec 14             	sub    $0x14,%esp
   30560:	e8 f6 fe ff ff       	call   3045b <__x86.get_pc_thunk.bx>
   30565:	81 c3 9b ba 00 00    	add    $0xba9b,%ebx
   3056b:	83 7d 08 0f          	cmpl   $0xf,0x8(%ebp)
   3056f:	7e 2f                	jle    305a0 <add_irq_handle+0x47>
   30571:	83 ec 0c             	sub    $0xc,%esp
   30574:	8d 83 40 c5 ff ff    	lea    -0x3ac0(%ebx),%eax
   3057a:	50                   	push   %eax
   3057b:	8d 83 2c c7 ff ff    	lea    -0x38d4(%ebx),%eax
   30581:	50                   	push   %eax
   30582:	6a 16                	push   $0x16
   30584:	8d 83 53 c5 ff ff    	lea    -0x3aad(%ebx),%eax
   3058a:	50                   	push   %eax
   3058b:	8d 83 68 c5 ff ff    	lea    -0x3a98(%ebx),%eax
   30591:	50                   	push   %eax
   30592:	e8 01 0a 00 00       	call   30f98 <printk>
   30597:	83 c4 20             	add    $0x20,%esp
   3059a:	b8 01 00 00 00       	mov    $0x1,%eax
   3059f:	82 8b 83 60 19 00 00 	orb    $0x0,0x196083(%ebx)
   305a6:	83 f8 20             	cmp    $0x20,%eax
   305a9:	7e 2f                	jle    305da <add_irq_handle+0x81>
   305ab:	83 ec 0c             	sub    $0xc,%esp
   305ae:	8d 83 b2 c5 ff ff    	lea    -0x3a4e(%ebx),%eax
   305b4:	50                   	push   %eax
   305b5:	8d 83 2c c7 ff ff    	lea    -0x38d4(%ebx),%eax
   305bb:	50                   	push   %eax
   305bc:	6a 17                	push   $0x17
   305be:	8d 83 53 c5 ff ff    	lea    -0x3aad(%ebx),%eax
   305c4:	50                   	push   %eax
   305c5:	8d 83 68 c5 ff ff    	lea    -0x3a98(%ebx),%eax
   305cb:	50                   	push   %eax
   305cc:	e8 c7 09 00 00       	call   30f98 <printk>
   305d1:	83 c4 20             	add    $0x20,%esp
   305d4:	b8 01 00 00 00       	mov    $0x1,%eax
   305d9:	82 8b 83 60 19 00 00 	orb    $0x0,0x196083(%ebx)
   305e0:	8d 50 01             	lea    0x1(%eax),%edx
   305e3:	89 93 60 19 00 00    	mov    %edx,0x1960(%ebx)
   305e9:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
   305f0:	8d 83 20 18 00 00    	lea    0x1820(%ebx),%eax
   305f6:	01 d0                	add    %edx,%eax
   305f8:	89 45 f4             	mov    %eax,-0xc(%ebp)
   305fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
   305fe:	8b 55 0c             	mov    0xc(%ebp),%edx
   30601:	89 10                	mov    %edx,(%eax)
   30603:	8b 45 08             	mov    0x8(%ebp),%eax
   30606:	8b 94 83 20 19 00 00 	mov    0x1920(%ebx,%eax,4),%edx
   3060d:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30610:	89 50 04             	mov    %edx,0x4(%eax)
   30613:	8b 45 08             	mov    0x8(%ebp),%eax
   30616:	8b 55 f4             	mov    -0xc(%ebp),%edx
   30619:	89 94 83 20 19 00 00 	mov    %edx,0x1920(%ebx,%eax,4)
   30620:	90                   	nop
   30621:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   30624:	c9                   	leave  
   30625:	c3                   	ret    

00030626 <irq_handle>:
   30626:	55                   	push   %ebp
   30627:	89 e5                	mov    %esp,%ebp
   30629:	53                   	push   %ebx
   3062a:	83 ec 14             	sub    $0x14,%esp
   3062d:	e8 29 fe ff ff       	call   3045b <__x86.get_pc_thunk.bx>
   30632:	81 c3 ce b9 00 00    	add    $0xb9ce,%ebx
   30638:	8b 45 08             	mov    0x8(%ebp),%eax
   3063b:	8b 40 20             	mov    0x20(%eax),%eax
   3063e:	89 45 f0             	mov    %eax,-0x10(%ebp)
   30641:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
   30645:	79 2a                	jns    30671 <irq_handle+0x4b>
   30647:	8d 83 3c c7 ff ff    	lea    -0x38c4(%ebx),%eax
   3064d:	50                   	push   %eax
   3064e:	6a 24                	push   $0x24
   30650:	8d 83 53 c5 ff ff    	lea    -0x3aad(%ebx),%eax
   30656:	50                   	push   %eax
   30657:	8d 83 d0 c5 ff ff    	lea    -0x3a30(%ebx),%eax
   3065d:	50                   	push   %eax
   3065e:	e8 35 09 00 00       	call   30f98 <printk>
   30663:	83 c4 10             	add    $0x10,%esp
   30666:	b8 01 00 00 00       	mov    $0x1,%eax
   3066b:	82 e9 f9             	sub    $0xf9,%cl
   3066e:	00 00                	add    %al,(%eax)
   30670:	00 81 7d f0 80 00    	add    %al,0x80f07d(%ecx)
   30676:	00 00                	add    %al,(%eax)
   30678:	75 13                	jne    3068d <irq_handle+0x67>
   3067a:	83 ec 0c             	sub    $0xc,%esp
   3067d:	ff 75 08             	pushl  0x8(%ebp)
   30680:	e8 89 0b 00 00       	call   3120e <do_syscall>
   30685:	83 c4 10             	add    $0x10,%esp
   30688:	e9 dd 00 00 00       	jmp    3076a <irq_handle+0x144>
   3068d:	81 7d f0 e7 03 00 00 	cmpl   $0x3e7,-0x10(%ebp)
   30694:	7f 37                	jg     306cd <irq_handle+0xa7>
   30696:	8b 45 08             	mov    0x8(%ebp),%eax
   30699:	8b 40 28             	mov    0x28(%eax),%eax
   3069c:	83 ec 08             	sub    $0x8,%esp
   3069f:	50                   	push   %eax
   306a0:	ff 75 f0             	pushl  -0x10(%ebp)
   306a3:	8d 83 3c c7 ff ff    	lea    -0x38c4(%ebx),%eax
   306a9:	50                   	push   %eax
   306aa:	6a 28                	push   $0x28
   306ac:	8d 83 53 c5 ff ff    	lea    -0x3aad(%ebx),%eax
   306b2:	50                   	push   %eax
   306b3:	8d 83 1c c6 ff ff    	lea    -0x39e4(%ebx),%eax
   306b9:	50                   	push   %eax
   306ba:	e8 d9 08 00 00       	call   30f98 <printk>
   306bf:	83 c4 20             	add    $0x20,%esp
   306c2:	b8 01 00 00 00       	mov    $0x1,%eax
   306c7:	82 e9 9d             	sub    $0x9d,%cl
   306ca:	00 00                	add    %al,(%eax)
   306cc:	00 81 7d f0 e7 03    	add    %al,0x3e7f07d(%ecx)
   306d2:	00 00                	add    %al,(%eax)
   306d4:	0f 8e 90 00 00 00    	jle    3076a <irq_handle+0x144>
   306da:	8b 45 f0             	mov    -0x10(%ebp),%eax
   306dd:	2d e8 03 00 00       	sub    $0x3e8,%eax
   306e2:	89 45 ec             	mov    %eax,-0x14(%ebp)
   306e5:	83 7d ec 0f          	cmpl   $0xf,-0x14(%ebp)
   306e9:	7e 2f                	jle    3071a <irq_handle+0xf4>
   306eb:	83 ec 0c             	sub    $0xc,%esp
   306ee:	8d 83 76 c6 ff ff    	lea    -0x398a(%ebx),%eax
   306f4:	50                   	push   %eax
   306f5:	8d 83 3c c7 ff ff    	lea    -0x38c4(%ebx),%eax
   306fb:	50                   	push   %eax
   306fc:	6a 2b                	push   $0x2b
   306fe:	8d 83 53 c5 ff ff    	lea    -0x3aad(%ebx),%eax
   30704:	50                   	push   %eax
   30705:	8d 83 68 c5 ff ff    	lea    -0x3a98(%ebx),%eax
   3070b:	50                   	push   %eax
   3070c:	e8 87 08 00 00       	call   30f98 <printk>
   30711:	83 c4 20             	add    $0x20,%esp
   30714:	b8 01 00 00 00       	mov    $0x1,%eax
   30719:	82 83 7d ec 00 75 25 	addb   $0x25,0x7500ec7d(%ebx)
   30720:	8d 83 3c c7 ff ff    	lea    -0x38c4(%ebx),%eax
   30726:	50                   	push   %eax
   30727:	6a 2d                	push   $0x2d
   30729:	8d 83 53 c5 ff ff    	lea    -0x3aad(%ebx),%eax
   3072f:	50                   	push   %eax
   30730:	8d 83 8c c6 ff ff    	lea    -0x3974(%ebx),%eax
   30736:	50                   	push   %eax
   30737:	e8 5c 08 00 00       	call   30f98 <printk>
   3073c:	83 c4 10             	add    $0x10,%esp
   3073f:	b8 01 00 00 00       	mov    $0x1,%eax
   30744:	82 8b 45 ec 8b 84 83 	orb    $0x83,-0x7b7413bb(%ebx)
   3074b:	20 19                	and    %bl,(%ecx)
   3074d:	00 00                	add    %al,(%eax)
   3074f:	89 45 f4             	mov    %eax,-0xc(%ebp)
   30752:	eb 10                	jmp    30764 <irq_handle+0x13e>
   30754:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30757:	8b 00                	mov    (%eax),%eax
   30759:	ff d0                	call   *%eax
   3075b:	8b 45 f4             	mov    -0xc(%ebp),%eax
   3075e:	8b 40 04             	mov    0x4(%eax),%eax
   30761:	89 45 f4             	mov    %eax,-0xc(%ebp)
   30764:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
   30768:	75 ea                	jne    30754 <irq_handle+0x12e>
   3076a:	90                   	nop
   3076b:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   3076e:	c9                   	leave  
   3076f:	c3                   	ret    

00030770 <wait_intr>:
   30770:	55                   	push   %ebp
   30771:	89 e5                	mov    %esp,%ebp
   30773:	e8 df fc ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   30778:	05 88 b8 00 00       	add    $0xb888,%eax
   3077d:	f4                   	hlt    
   3077e:	90                   	nop
   3077f:	5d                   	pop    %ebp
   30780:	c3                   	ret    

00030781 <ide_read>:
   30781:	55                   	push   %ebp
   30782:	89 e5                	mov    %esp,%ebp
   30784:	56                   	push   %esi
   30785:	53                   	push   %ebx
   30786:	83 ec 10             	sub    $0x10,%esp
   30789:	e8 cd fc ff ff       	call   3045b <__x86.get_pc_thunk.bx>
   3078e:	81 c3 72 b8 00 00    	add    $0xb872,%ebx
   30794:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
   3079b:	eb 22                	jmp    307bf <ide_read+0x3e>
   3079d:	8b 55 08             	mov    0x8(%ebp),%edx
   307a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
   307a3:	8d 34 02             	lea    (%edx,%eax,1),%esi
   307a6:	8b 55 0c             	mov    0xc(%ebp),%edx
   307a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
   307ac:	01 d0                	add    %edx,%eax
   307ae:	83 ec 0c             	sub    $0xc,%esp
   307b1:	50                   	push   %eax
   307b2:	e8 1b 06 00 00       	call   30dd2 <read_byte>
   307b7:	83 c4 10             	add    $0x10,%esp
   307ba:	88 06                	mov    %al,(%esi)
   307bc:	ff 45 f4             	incl   -0xc(%ebp)
   307bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
   307c2:	3b 45 10             	cmp    0x10(%ebp),%eax
   307c5:	72 d6                	jb     3079d <ide_read+0x1c>
   307c7:	90                   	nop
   307c8:	8d 65 f8             	lea    -0x8(%ebp),%esp
   307cb:	5b                   	pop    %ebx
   307cc:	5e                   	pop    %esi
   307cd:	5d                   	pop    %ebp
   307ce:	c3                   	ret    

000307cf <ide_write>:
   307cf:	55                   	push   %ebp
   307d0:	89 e5                	mov    %esp,%ebp
   307d2:	53                   	push   %ebx
   307d3:	83 ec 14             	sub    $0x14,%esp
   307d6:	e8 80 fc ff ff       	call   3045b <__x86.get_pc_thunk.bx>
   307db:	81 c3 25 b8 00 00    	add    $0xb825,%ebx
   307e1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
   307e8:	eb 25                	jmp    3080f <ide_write+0x40>
   307ea:	8b 55 08             	mov    0x8(%ebp),%edx
   307ed:	8b 45 f4             	mov    -0xc(%ebp),%eax
   307f0:	01 d0                	add    %edx,%eax
   307f2:	8a 00                	mov    (%eax),%al
   307f4:	0f b6 c0             	movzbl %al,%eax
   307f7:	8b 4d 0c             	mov    0xc(%ebp),%ecx
   307fa:	8b 55 f4             	mov    -0xc(%ebp),%edx
   307fd:	01 ca                	add    %ecx,%edx
   307ff:	83 ec 08             	sub    $0x8,%esp
   30802:	50                   	push   %eax
   30803:	52                   	push   %edx
   30804:	e8 06 06 00 00       	call   30e0f <write_byte>
   30809:	83 c4 10             	add    $0x10,%esp
   3080c:	ff 45 f4             	incl   -0xc(%ebp)
   3080f:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30812:	3b 45 10             	cmp    0x10(%ebp),%eax
   30815:	72 d3                	jb     307ea <ide_write+0x1b>
   30817:	90                   	nop
   30818:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   3081b:	c9                   	leave  
   3081c:	c3                   	ret    

0003081d <ide_writeback>:
   3081d:	55                   	push   %ebp
   3081e:	89 e5                	mov    %esp,%ebp
   30820:	53                   	push   %ebx
   30821:	83 ec 04             	sub    $0x4,%esp
   30824:	e8 32 fc ff ff       	call   3045b <__x86.get_pc_thunk.bx>
   30829:	81 c3 d7 b7 00 00    	add    $0xb7d7,%ebx
   3082f:	8b 83 68 19 00 00    	mov    0x1968(%ebx),%eax
   30835:	40                   	inc    %eax
   30836:	89 83 68 19 00 00    	mov    %eax,0x1968(%ebx)
   3083c:	8b 83 68 19 00 00    	mov    0x1968(%ebx),%eax
   30842:	83 f8 64             	cmp    $0x64,%eax
   30845:	75 0f                	jne    30856 <ide_writeback+0x39>
   30847:	e8 4b 04 00 00       	call   30c97 <cache_writeback>
   3084c:	c7 83 68 19 00 00 00 	movl   $0x0,0x1968(%ebx)
   30853:	00 00 00 
   30856:	90                   	nop
   30857:	83 c4 04             	add    $0x4,%esp
   3085a:	5b                   	pop    %ebx
   3085b:	5d                   	pop    %ebp
   3085c:	c3                   	ret    

0003085d <ide_intr>:
   3085d:	55                   	push   %ebp
   3085e:	89 e5                	mov    %esp,%ebp
   30860:	e8 f2 fb ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   30865:	05 9b b7 00 00       	add    $0xb79b,%eax
   3086a:	c7 80 64 19 00 00 01 	movl   $0x1,0x1964(%eax)
   30871:	00 00 00 
   30874:	90                   	nop
   30875:	5d                   	pop    %ebp
   30876:	c3                   	ret    

00030877 <clear_ide_intr>:
   30877:	55                   	push   %ebp
   30878:	89 e5                	mov    %esp,%ebp
   3087a:	e8 d8 fb ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   3087f:	05 81 b7 00 00       	add    $0xb781,%eax
   30884:	c7 80 64 19 00 00 00 	movl   $0x0,0x1964(%eax)
   3088b:	00 00 00 
   3088e:	90                   	nop
   3088f:	5d                   	pop    %ebp
   30890:	c3                   	ret    

00030891 <wait_ide_intr>:
   30891:	55                   	push   %ebp
   30892:	89 e5                	mov    %esp,%ebp
   30894:	53                   	push   %ebx
   30895:	e8 c1 fb ff ff       	call   3045b <__x86.get_pc_thunk.bx>
   3089a:	81 c3 66 b7 00 00    	add    $0xb766,%ebx
   308a0:	eb 05                	jmp    308a7 <wait_ide_intr+0x16>
   308a2:	e8 c9 fe ff ff       	call   30770 <wait_intr>
   308a7:	8b 83 64 19 00 00    	mov    0x1964(%ebx),%eax
   308ad:	85 c0                	test   %eax,%eax
   308af:	74 f1                	je     308a2 <wait_ide_intr+0x11>
   308b1:	e8 c1 ff ff ff       	call   30877 <clear_ide_intr>
   308b6:	90                   	nop
   308b7:	5b                   	pop    %ebx
   308b8:	5d                   	pop    %ebp
   308b9:	c3                   	ret    

000308ba <init_ide>:
   308ba:	55                   	push   %ebp
   308bb:	89 e5                	mov    %esp,%ebp
   308bd:	53                   	push   %ebx
   308be:	83 ec 04             	sub    $0x4,%esp
   308c1:	e8 95 fb ff ff       	call   3045b <__x86.get_pc_thunk.bx>
   308c6:	81 c3 3a b7 00 00    	add    $0xb73a,%ebx
   308cc:	e8 83 03 00 00       	call   30c54 <cache_init>
   308d1:	83 ec 08             	sub    $0x8,%esp
   308d4:	8d 83 1d 48 ff ff    	lea    -0xb7e3(%ebx),%eax
   308da:	50                   	push   %eax
   308db:	6a 00                	push   $0x0
   308dd:	e8 77 fc ff ff       	call   30559 <add_irq_handle>
   308e2:	83 c4 10             	add    $0x10,%esp
   308e5:	83 ec 08             	sub    $0x8,%esp
   308e8:	8d 83 5d 48 ff ff    	lea    -0xb7a3(%ebx),%eax
   308ee:	50                   	push   %eax
   308ef:	6a 0e                	push   $0xe
   308f1:	e8 63 fc ff ff       	call   30559 <add_irq_handle>
   308f6:	83 c4 10             	add    $0x10,%esp
   308f9:	90                   	nop
   308fa:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   308fd:	c9                   	leave  
   308fe:	c3                   	ret    

000308ff <in_byte>:
   308ff:	55                   	push   %ebp
   30900:	89 e5                	mov    %esp,%ebp
   30902:	83 ec 14             	sub    $0x14,%esp
   30905:	e8 4d fb ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   3090a:	05 f6 b6 00 00       	add    $0xb6f6,%eax
   3090f:	8b 45 08             	mov    0x8(%ebp),%eax
   30912:	66 89 45 ec          	mov    %ax,-0x14(%ebp)
   30916:	8b 45 ec             	mov    -0x14(%ebp),%eax
   30919:	89 c2                	mov    %eax,%edx
   3091b:	ec                   	in     (%dx),%al
   3091c:	88 45 ff             	mov    %al,-0x1(%ebp)
   3091f:	8a 45 ff             	mov    -0x1(%ebp),%al
   30922:	c9                   	leave  
   30923:	c3                   	ret    

00030924 <in_long>:
   30924:	55                   	push   %ebp
   30925:	89 e5                	mov    %esp,%ebp
   30927:	83 ec 14             	sub    $0x14,%esp
   3092a:	e8 28 fb ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   3092f:	05 d1 b6 00 00       	add    $0xb6d1,%eax
   30934:	8b 45 08             	mov    0x8(%ebp),%eax
   30937:	66 89 45 ec          	mov    %ax,-0x14(%ebp)
   3093b:	8b 45 ec             	mov    -0x14(%ebp),%eax
   3093e:	89 c2                	mov    %eax,%edx
   30940:	ed                   	in     (%dx),%eax
   30941:	89 45 fc             	mov    %eax,-0x4(%ebp)
   30944:	8b 45 fc             	mov    -0x4(%ebp),%eax
   30947:	c9                   	leave  
   30948:	c3                   	ret    

00030949 <out_byte>:
   30949:	55                   	push   %ebp
   3094a:	89 e5                	mov    %esp,%ebp
   3094c:	83 ec 08             	sub    $0x8,%esp
   3094f:	e8 03 fb ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   30954:	05 ac b6 00 00       	add    $0xb6ac,%eax
   30959:	8b 45 08             	mov    0x8(%ebp),%eax
   3095c:	8b 55 0c             	mov    0xc(%ebp),%edx
   3095f:	66 89 45 fc          	mov    %ax,-0x4(%ebp)
   30963:	88 55 f8             	mov    %dl,-0x8(%ebp)
   30966:	8a 45 f8             	mov    -0x8(%ebp),%al
   30969:	8b 55 fc             	mov    -0x4(%ebp),%edx
   3096c:	ee                   	out    %al,(%dx)
   3096d:	90                   	nop
   3096e:	c9                   	leave  
   3096f:	c3                   	ret    

00030970 <out_long>:
   30970:	55                   	push   %ebp
   30971:	89 e5                	mov    %esp,%ebp
   30973:	83 ec 04             	sub    $0x4,%esp
   30976:	e8 dc fa ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   3097b:	05 85 b6 00 00       	add    $0xb685,%eax
   30980:	8b 45 08             	mov    0x8(%ebp),%eax
   30983:	66 89 45 fc          	mov    %ax,-0x4(%ebp)
   30987:	8b 45 0c             	mov    0xc(%ebp),%eax
   3098a:	8b 55 fc             	mov    -0x4(%ebp),%edx
   3098d:	ef                   	out    %eax,(%dx)
   3098e:	90                   	nop
   3098f:	c9                   	leave  
   30990:	c3                   	ret    

00030991 <waitdisk>:
   30991:	55                   	push   %ebp
   30992:	89 e5                	mov    %esp,%ebp
   30994:	e8 be fa ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   30999:	05 67 b6 00 00       	add    $0xb667,%eax
   3099e:	90                   	nop
   3099f:	68 f7 01 00 00       	push   $0x1f7
   309a4:	e8 56 ff ff ff       	call   308ff <in_byte>
   309a9:	83 c4 04             	add    $0x4,%esp
   309ac:	0f b6 c0             	movzbl %al,%eax
   309af:	25 c0 00 00 00       	and    $0xc0,%eax
   309b4:	83 f8 40             	cmp    $0x40,%eax
   309b7:	75 e6                	jne    3099f <waitdisk+0xe>
   309b9:	90                   	nop
   309ba:	c9                   	leave  
   309bb:	c3                   	ret    

000309bc <ide_prepare>:
   309bc:	55                   	push   %ebp
   309bd:	89 e5                	mov    %esp,%ebp
   309bf:	e8 93 fa ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   309c4:	05 3c b6 00 00       	add    $0xb63c,%eax
   309c9:	e8 c3 ff ff ff       	call   30991 <waitdisk>
   309ce:	6a 00                	push   $0x0
   309d0:	68 f1 01 00 00       	push   $0x1f1
   309d5:	e8 6f ff ff ff       	call   30949 <out_byte>
   309da:	83 c4 08             	add    $0x8,%esp
   309dd:	6a 01                	push   $0x1
   309df:	68 f2 01 00 00       	push   $0x1f2
   309e4:	e8 60 ff ff ff       	call   30949 <out_byte>
   309e9:	83 c4 08             	add    $0x8,%esp
   309ec:	8b 45 08             	mov    0x8(%ebp),%eax
   309ef:	0f b6 c0             	movzbl %al,%eax
   309f2:	50                   	push   %eax
   309f3:	68 f3 01 00 00       	push   $0x1f3
   309f8:	e8 4c ff ff ff       	call   30949 <out_byte>
   309fd:	83 c4 08             	add    $0x8,%esp
   30a00:	8b 45 08             	mov    0x8(%ebp),%eax
   30a03:	c1 e8 08             	shr    $0x8,%eax
   30a06:	0f b6 c0             	movzbl %al,%eax
   30a09:	50                   	push   %eax
   30a0a:	68 f4 01 00 00       	push   $0x1f4
   30a0f:	e8 35 ff ff ff       	call   30949 <out_byte>
   30a14:	83 c4 08             	add    $0x8,%esp
   30a17:	8b 45 08             	mov    0x8(%ebp),%eax
   30a1a:	c1 e8 10             	shr    $0x10,%eax
   30a1d:	0f b6 c0             	movzbl %al,%eax
   30a20:	50                   	push   %eax
   30a21:	68 f5 01 00 00       	push   $0x1f5
   30a26:	e8 1e ff ff ff       	call   30949 <out_byte>
   30a2b:	83 c4 08             	add    $0x8,%esp
   30a2e:	8b 45 08             	mov    0x8(%ebp),%eax
   30a31:	c1 e8 18             	shr    $0x18,%eax
   30a34:	83 c8 e0             	or     $0xffffffe0,%eax
   30a37:	0f b6 c0             	movzbl %al,%eax
   30a3a:	50                   	push   %eax
   30a3b:	68 f6 01 00 00       	push   $0x1f6
   30a40:	e8 04 ff ff ff       	call   30949 <out_byte>
   30a45:	83 c4 08             	add    $0x8,%esp
   30a48:	90                   	nop
   30a49:	c9                   	leave  
   30a4a:	c3                   	ret    

00030a4b <issue_read>:
   30a4b:	55                   	push   %ebp
   30a4c:	89 e5                	mov    %esp,%ebp
   30a4e:	e8 04 fa ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   30a53:	05 ad b5 00 00       	add    $0xb5ad,%eax
   30a58:	6a 20                	push   $0x20
   30a5a:	68 f7 01 00 00       	push   $0x1f7
   30a5f:	e8 e5 fe ff ff       	call   30949 <out_byte>
   30a64:	83 c4 08             	add    $0x8,%esp
   30a67:	90                   	nop
   30a68:	c9                   	leave  
   30a69:	c3                   	ret    

00030a6a <issue_write>:
   30a6a:	55                   	push   %ebp
   30a6b:	89 e5                	mov    %esp,%ebp
   30a6d:	e8 e5 f9 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   30a72:	05 8e b5 00 00       	add    $0xb58e,%eax
   30a77:	6a 30                	push   $0x30
   30a79:	68 f7 01 00 00       	push   $0x1f7
   30a7e:	e8 c6 fe ff ff       	call   30949 <out_byte>
   30a83:	83 c4 08             	add    $0x8,%esp
   30a86:	90                   	nop
   30a87:	c9                   	leave  
   30a88:	c3                   	ret    

00030a89 <disk_do_read>:
   30a89:	55                   	push   %ebp
   30a8a:	89 e5                	mov    %esp,%ebp
   30a8c:	53                   	push   %ebx
   30a8d:	83 ec 14             	sub    $0x14,%esp
   30a90:	e8 c6 f9 ff ff       	call   3045b <__x86.get_pc_thunk.bx>
   30a95:	81 c3 6b b5 00 00    	add    $0xb56b,%ebx
   30a9b:	e8 d7 fd ff ff       	call   30877 <clear_ide_intr>
   30aa0:	83 ec 0c             	sub    $0xc,%esp
   30aa3:	ff 75 0c             	pushl  0xc(%ebp)
   30aa6:	e8 11 ff ff ff       	call   309bc <ide_prepare>
   30aab:	83 c4 10             	add    $0x10,%esp
   30aae:	e8 98 ff ff ff       	call   30a4b <issue_read>
   30ab3:	e8 d9 fd ff ff       	call   30891 <wait_ide_intr>
   30ab8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
   30abf:	eb 25                	jmp    30ae6 <disk_do_read+0x5d>
   30ac1:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30ac4:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
   30acb:	8b 45 08             	mov    0x8(%ebp),%eax
   30ace:	8d 1c 02             	lea    (%edx,%eax,1),%ebx
   30ad1:	83 ec 0c             	sub    $0xc,%esp
   30ad4:	68 f0 01 00 00       	push   $0x1f0
   30ad9:	e8 46 fe ff ff       	call   30924 <in_long>
   30ade:	83 c4 10             	add    $0x10,%esp
   30ae1:	89 03                	mov    %eax,(%ebx)
   30ae3:	ff 45 f4             	incl   -0xc(%ebp)
   30ae6:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30ae9:	83 f8 7f             	cmp    $0x7f,%eax
   30aec:	76 d3                	jbe    30ac1 <disk_do_read+0x38>
   30aee:	90                   	nop
   30aef:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   30af2:	c9                   	leave  
   30af3:	c3                   	ret    

00030af4 <disk_do_write>:
   30af4:	55                   	push   %ebp
   30af5:	89 e5                	mov    %esp,%ebp
   30af7:	83 ec 10             	sub    $0x10,%esp
   30afa:	e8 58 f9 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   30aff:	05 01 b5 00 00       	add    $0xb501,%eax
   30b04:	ff 75 0c             	pushl  0xc(%ebp)
   30b07:	e8 b0 fe ff ff       	call   309bc <ide_prepare>
   30b0c:	83 c4 04             	add    $0x4,%esp
   30b0f:	e8 56 ff ff ff       	call   30a6a <issue_write>
   30b14:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
   30b1b:	eb 22                	jmp    30b3f <disk_do_write+0x4b>
   30b1d:	8b 45 fc             	mov    -0x4(%ebp),%eax
   30b20:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
   30b27:	8b 45 08             	mov    0x8(%ebp),%eax
   30b2a:	01 d0                	add    %edx,%eax
   30b2c:	8b 00                	mov    (%eax),%eax
   30b2e:	50                   	push   %eax
   30b2f:	68 f0 01 00 00       	push   $0x1f0
   30b34:	e8 37 fe ff ff       	call   30970 <out_long>
   30b39:	83 c4 08             	add    $0x8,%esp
   30b3c:	ff 45 fc             	incl   -0x4(%ebp)
   30b3f:	8b 45 fc             	mov    -0x4(%ebp),%eax
   30b42:	83 f8 7f             	cmp    $0x7f,%eax
   30b45:	76 d6                	jbe    30b1d <disk_do_write+0x29>
   30b47:	90                   	nop
   30b48:	c9                   	leave  
   30b49:	c3                   	ret    

00030b4a <in_byte>:
   30b4a:	55                   	push   %ebp
   30b4b:	89 e5                	mov    %esp,%ebp
   30b4d:	83 ec 14             	sub    $0x14,%esp
   30b50:	e8 02 f9 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   30b55:	05 ab b4 00 00       	add    $0xb4ab,%eax
   30b5a:	8b 45 08             	mov    0x8(%ebp),%eax
   30b5d:	66 89 45 ec          	mov    %ax,-0x14(%ebp)
   30b61:	8b 45 ec             	mov    -0x14(%ebp),%eax
   30b64:	89 c2                	mov    %eax,%edx
   30b66:	ec                   	in     (%dx),%al
   30b67:	88 45 ff             	mov    %al,-0x1(%ebp)
   30b6a:	8a 45 ff             	mov    -0x1(%ebp),%al
   30b6d:	c9                   	leave  
   30b6e:	c3                   	ret    

00030b6f <out_byte>:
   30b6f:	55                   	push   %ebp
   30b70:	89 e5                	mov    %esp,%ebp
   30b72:	83 ec 08             	sub    $0x8,%esp
   30b75:	e8 dd f8 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   30b7a:	05 86 b4 00 00       	add    $0xb486,%eax
   30b7f:	8b 45 08             	mov    0x8(%ebp),%eax
   30b82:	8b 55 0c             	mov    0xc(%ebp),%edx
   30b85:	66 89 45 fc          	mov    %ax,-0x4(%ebp)
   30b89:	88 55 f8             	mov    %dl,-0x8(%ebp)
   30b8c:	8a 45 f8             	mov    -0x8(%ebp),%al
   30b8f:	8b 55 fc             	mov    -0x4(%ebp),%edx
   30b92:	ee                   	out    %al,(%dx)
   30b93:	90                   	nop
   30b94:	c9                   	leave  
   30b95:	c3                   	ret    

00030b96 <out_long>:
   30b96:	55                   	push   %ebp
   30b97:	89 e5                	mov    %esp,%ebp
   30b99:	83 ec 04             	sub    $0x4,%esp
   30b9c:	e8 b6 f8 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   30ba1:	05 5f b4 00 00       	add    $0xb45f,%eax
   30ba6:	8b 45 08             	mov    0x8(%ebp),%eax
   30ba9:	66 89 45 fc          	mov    %ax,-0x4(%ebp)
   30bad:	8b 45 0c             	mov    0xc(%ebp),%eax
   30bb0:	8b 55 fc             	mov    -0x4(%ebp),%edx
   30bb3:	ef                   	out    %eax,(%dx)
   30bb4:	90                   	nop
   30bb5:	c9                   	leave  
   30bb6:	c3                   	ret    

00030bb7 <dma_prepare>:
   30bb7:	55                   	push   %ebp
   30bb8:	89 e5                	mov    %esp,%ebp
   30bba:	83 ec 10             	sub    $0x10,%esp
   30bbd:	e8 95 f8 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   30bc2:	05 3e b4 00 00       	add    $0xb43e,%eax
   30bc7:	8b 55 08             	mov    0x8(%ebp),%edx
   30bca:	89 55 fc             	mov    %edx,-0x4(%ebp)
   30bcd:	c7 c2 54 f0 06 00    	mov    $0x6f054,%edx
   30bd3:	8b 4d fc             	mov    -0x4(%ebp),%ecx
   30bd6:	89 0a                	mov    %ecx,(%edx)
   30bd8:	c7 c2 54 f0 06 00    	mov    $0x6f054,%edx
   30bde:	66 c7 42 04 00 02    	movw   $0x200,0x4(%edx)
   30be4:	c7 c2 54 f0 06 00    	mov    $0x6f054,%edx
   30bea:	8a 4a 07             	mov    0x7(%edx),%cl
   30bed:	83 c9 80             	or     $0xffffff80,%ecx
   30bf0:	88 4a 07             	mov    %cl,0x7(%edx)
   30bf3:	c7 c1 54 f0 06 00    	mov    $0x6f054,%ecx
   30bf9:	66 8b 51 06          	mov    0x6(%ecx),%dx
   30bfd:	81 e2 00 80 ff ff    	and    $0xffff8000,%edx
   30c03:	66 89 51 06          	mov    %dx,0x6(%ecx)
   30c07:	c7 c0 54 f0 06 00    	mov    $0x6f054,%eax
   30c0d:	89 45 f8             	mov    %eax,-0x8(%ebp)
   30c10:	ff 75 f8             	pushl  -0x8(%ebp)
   30c13:	68 44 c0 00 00       	push   $0xc044
   30c18:	e8 79 ff ff ff       	call   30b96 <out_long>
   30c1d:	83 c4 08             	add    $0x8,%esp
   30c20:	90                   	nop
   30c21:	c9                   	leave  
   30c22:	c3                   	ret    

00030c23 <dma_issue_read>:
   30c23:	55                   	push   %ebp
   30c24:	89 e5                	mov    %esp,%ebp
   30c26:	e8 2c f8 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   30c2b:	05 d5 b3 00 00       	add    $0xb3d5,%eax
   30c30:	68 40 c0 00 00       	push   $0xc040
   30c35:	e8 10 ff ff ff       	call   30b4a <in_byte>
   30c3a:	83 c4 04             	add    $0x4,%esp
   30c3d:	83 c8 09             	or     $0x9,%eax
   30c40:	0f b6 c0             	movzbl %al,%eax
   30c43:	50                   	push   %eax
   30c44:	68 40 c0 00 00       	push   $0xc040
   30c49:	e8 21 ff ff ff       	call   30b6f <out_byte>
   30c4e:	83 c4 08             	add    $0x8,%esp
   30c51:	90                   	nop
   30c52:	c9                   	leave  
   30c53:	c3                   	ret    

00030c54 <cache_init>:
   30c54:	55                   	push   %ebp
   30c55:	89 e5                	mov    %esp,%ebp
   30c57:	53                   	push   %ebx
   30c58:	83 ec 10             	sub    $0x10,%esp
   30c5b:	e8 fd 01 00 00       	call   30e5d <__x86.get_pc_thunk.dx>
   30c60:	81 c2 a0 b3 00 00    	add    $0xb3a0,%edx
   30c66:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
   30c6d:	eb 1b                	jmp    30c8a <cache_init+0x36>
   30c6f:	8b 4d f8             	mov    -0x8(%ebp),%ecx
   30c72:	8d 9a 84 19 00 00    	lea    0x1984(%edx),%ebx
   30c78:	89 c8                	mov    %ecx,%eax
   30c7a:	c1 e0 06             	shl    $0x6,%eax
   30c7d:	01 c8                	add    %ecx,%eax
   30c7f:	c1 e0 03             	shl    $0x3,%eax
   30c82:	01 d8                	add    %ebx,%eax
   30c84:	c6 00 00             	movb   $0x0,(%eax)
   30c87:	ff 45 f8             	incl   -0x8(%ebp)
   30c8a:	83 7d f8 7f          	cmpl   $0x7f,-0x8(%ebp)
   30c8e:	7e df                	jle    30c6f <cache_init+0x1b>
   30c90:	90                   	nop
   30c91:	83 c4 10             	add    $0x10,%esp
   30c94:	5b                   	pop    %ebx
   30c95:	5d                   	pop    %ebp
   30c96:	c3                   	ret    

00030c97 <cache_writeback>:
   30c97:	55                   	push   %ebp
   30c98:	89 e5                	mov    %esp,%ebp
   30c9a:	53                   	push   %ebx
   30c9b:	83 ec 14             	sub    $0x14,%esp
   30c9e:	e8 b8 f7 ff ff       	call   3045b <__x86.get_pc_thunk.bx>
   30ca3:	81 c3 5d b3 00 00    	add    $0xb35d,%ebx
   30ca9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
   30cb0:	eb 72                	jmp    30d24 <cache_writeback+0x8d>
   30cb2:	8b 55 f4             	mov    -0xc(%ebp),%edx
   30cb5:	8d 8b 85 19 00 00    	lea    0x1985(%ebx),%ecx
   30cbb:	89 d0                	mov    %edx,%eax
   30cbd:	c1 e0 06             	shl    $0x6,%eax
   30cc0:	01 d0                	add    %edx,%eax
   30cc2:	c1 e0 03             	shl    $0x3,%eax
   30cc5:	01 c8                	add    %ecx,%eax
   30cc7:	8a 00                	mov    (%eax),%al
   30cc9:	3c 01                	cmp    $0x1,%al
   30ccb:	75 54                	jne    30d21 <cache_writeback+0x8a>
   30ccd:	8b 55 f4             	mov    -0xc(%ebp),%edx
   30cd0:	8d 8b 80 19 00 00    	lea    0x1980(%ebx),%ecx
   30cd6:	89 d0                	mov    %edx,%eax
   30cd8:	c1 e0 06             	shl    $0x6,%eax
   30cdb:	01 d0                	add    %edx,%eax
   30cdd:	c1 e0 03             	shl    $0x3,%eax
   30ce0:	01 c8                	add    %ecx,%eax
   30ce2:	8b 10                	mov    (%eax),%edx
   30ce4:	8b 4d f4             	mov    -0xc(%ebp),%ecx
   30ce7:	89 c8                	mov    %ecx,%eax
   30ce9:	c1 e0 06             	shl    $0x6,%eax
   30cec:	01 c8                	add    %ecx,%eax
   30cee:	c1 e0 03             	shl    $0x3,%eax
   30cf1:	8d 8b 80 19 00 00    	lea    0x1980(%ebx),%ecx
   30cf7:	01 c8                	add    %ecx,%eax
   30cf9:	83 c0 06             	add    $0x6,%eax
   30cfc:	83 ec 08             	sub    $0x8,%esp
   30cff:	52                   	push   %edx
   30d00:	50                   	push   %eax
   30d01:	e8 ee fd ff ff       	call   30af4 <disk_do_write>
   30d06:	83 c4 10             	add    $0x10,%esp
   30d09:	8b 55 f4             	mov    -0xc(%ebp),%edx
   30d0c:	8d 8b 85 19 00 00    	lea    0x1985(%ebx),%ecx
   30d12:	89 d0                	mov    %edx,%eax
   30d14:	c1 e0 06             	shl    $0x6,%eax
   30d17:	01 d0                	add    %edx,%eax
   30d19:	c1 e0 03             	shl    $0x3,%eax
   30d1c:	01 c8                	add    %ecx,%eax
   30d1e:	c6 00 00             	movb   $0x0,(%eax)
   30d21:	ff 45 f4             	incl   -0xc(%ebp)
   30d24:	83 7d f4 7f          	cmpl   $0x7f,-0xc(%ebp)
   30d28:	7e 88                	jle    30cb2 <cache_writeback+0x1b>
   30d2a:	90                   	nop
   30d2b:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   30d2e:	c9                   	leave  
   30d2f:	c3                   	ret    

00030d30 <cache_fetch>:
   30d30:	55                   	push   %ebp
   30d31:	89 e5                	mov    %esp,%ebp
   30d33:	53                   	push   %ebx
   30d34:	83 ec 14             	sub    $0x14,%esp
   30d37:	e8 1f f7 ff ff       	call   3045b <__x86.get_pc_thunk.bx>
   30d3c:	81 c3 c4 b2 00 00    	add    $0xb2c4,%ebx
   30d42:	8b 45 08             	mov    0x8(%ebp),%eax
   30d45:	83 e0 7f             	and    $0x7f,%eax
   30d48:	89 c2                	mov    %eax,%edx
   30d4a:	89 d0                	mov    %edx,%eax
   30d4c:	c1 e0 06             	shl    $0x6,%eax
   30d4f:	01 d0                	add    %edx,%eax
   30d51:	c1 e0 03             	shl    $0x3,%eax
   30d54:	8d 93 80 19 00 00    	lea    0x1980(%ebx),%edx
   30d5a:	01 d0                	add    %edx,%eax
   30d5c:	89 45 f4             	mov    %eax,-0xc(%ebp)
   30d5f:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30d62:	8a 40 04             	mov    0x4(%eax),%al
   30d65:	3c 01                	cmp    $0x1,%al
   30d67:	75 0a                	jne    30d73 <cache_fetch+0x43>
   30d69:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30d6c:	8b 00                	mov    (%eax),%eax
   30d6e:	3b 45 08             	cmp    0x8(%ebp),%eax
   30d71:	74 57                	je     30dca <cache_fetch+0x9a>
   30d73:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30d76:	8a 40 04             	mov    0x4(%eax),%al
   30d79:	3c 01                	cmp    $0x1,%al
   30d7b:	75 22                	jne    30d9f <cache_fetch+0x6f>
   30d7d:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30d80:	8a 40 05             	mov    0x5(%eax),%al
   30d83:	3c 01                	cmp    $0x1,%al
   30d85:	75 18                	jne    30d9f <cache_fetch+0x6f>
   30d87:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30d8a:	8b 00                	mov    (%eax),%eax
   30d8c:	8b 55 f4             	mov    -0xc(%ebp),%edx
   30d8f:	83 c2 06             	add    $0x6,%edx
   30d92:	83 ec 08             	sub    $0x8,%esp
   30d95:	50                   	push   %eax
   30d96:	52                   	push   %edx
   30d97:	e8 58 fd ff ff       	call   30af4 <disk_do_write>
   30d9c:	83 c4 10             	add    $0x10,%esp
   30d9f:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30da2:	83 c0 06             	add    $0x6,%eax
   30da5:	83 ec 08             	sub    $0x8,%esp
   30da8:	ff 75 08             	pushl  0x8(%ebp)
   30dab:	50                   	push   %eax
   30dac:	e8 d8 fc ff ff       	call   30a89 <disk_do_read>
   30db1:	83 c4 10             	add    $0x10,%esp
   30db4:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30db7:	c6 40 04 01          	movb   $0x1,0x4(%eax)
   30dbb:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30dbe:	8b 55 08             	mov    0x8(%ebp),%edx
   30dc1:	89 10                	mov    %edx,(%eax)
   30dc3:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30dc6:	c6 40 05 00          	movb   $0x0,0x5(%eax)
   30dca:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30dcd:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   30dd0:	c9                   	leave  
   30dd1:	c3                   	ret    

00030dd2 <read_byte>:
   30dd2:	55                   	push   %ebp
   30dd3:	89 e5                	mov    %esp,%ebp
   30dd5:	83 ec 18             	sub    $0x18,%esp
   30dd8:	e8 7a f6 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   30ddd:	05 23 b2 00 00       	add    $0xb223,%eax
   30de2:	8b 45 08             	mov    0x8(%ebp),%eax
   30de5:	c1 e8 09             	shr    $0x9,%eax
   30de8:	89 45 f4             	mov    %eax,-0xc(%ebp)
   30deb:	83 ec 0c             	sub    $0xc,%esp
   30dee:	ff 75 f4             	pushl  -0xc(%ebp)
   30df1:	e8 3a ff ff ff       	call   30d30 <cache_fetch>
   30df6:	83 c4 10             	add    $0x10,%esp
   30df9:	89 45 f0             	mov    %eax,-0x10(%ebp)
   30dfc:	8b 45 08             	mov    0x8(%ebp),%eax
   30dff:	25 ff 01 00 00       	and    $0x1ff,%eax
   30e04:	89 c2                	mov    %eax,%edx
   30e06:	8b 45 f0             	mov    -0x10(%ebp),%eax
   30e09:	8a 44 10 06          	mov    0x6(%eax,%edx,1),%al
   30e0d:	c9                   	leave  
   30e0e:	c3                   	ret    

00030e0f <write_byte>:
   30e0f:	55                   	push   %ebp
   30e10:	89 e5                	mov    %esp,%ebp
   30e12:	83 ec 28             	sub    $0x28,%esp
   30e15:	e8 3d f6 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   30e1a:	05 e6 b1 00 00       	add    $0xb1e6,%eax
   30e1f:	8b 45 0c             	mov    0xc(%ebp),%eax
   30e22:	88 45 e4             	mov    %al,-0x1c(%ebp)
   30e25:	8b 45 08             	mov    0x8(%ebp),%eax
   30e28:	c1 e8 09             	shr    $0x9,%eax
   30e2b:	89 45 f4             	mov    %eax,-0xc(%ebp)
   30e2e:	83 ec 0c             	sub    $0xc,%esp
   30e31:	ff 75 f4             	pushl  -0xc(%ebp)
   30e34:	e8 f7 fe ff ff       	call   30d30 <cache_fetch>
   30e39:	83 c4 10             	add    $0x10,%esp
   30e3c:	89 45 f0             	mov    %eax,-0x10(%ebp)
   30e3f:	8b 45 08             	mov    0x8(%ebp),%eax
   30e42:	25 ff 01 00 00       	and    $0x1ff,%eax
   30e47:	89 c1                	mov    %eax,%ecx
   30e49:	8b 45 f0             	mov    -0x10(%ebp),%eax
   30e4c:	8a 55 e4             	mov    -0x1c(%ebp),%dl
   30e4f:	88 54 08 06          	mov    %dl,0x6(%eax,%ecx,1)
   30e53:	8b 45 f0             	mov    -0x10(%ebp),%eax
   30e56:	c6 40 05 01          	movb   $0x1,0x5(%eax)
   30e5a:	90                   	nop
   30e5b:	c9                   	leave  
   30e5c:	c3                   	ret    

00030e5d <__x86.get_pc_thunk.dx>:
   30e5d:	8b 14 24             	mov    (%esp),%edx
   30e60:	c3                   	ret    

00030e61 <loader>:
   30e61:	55                   	push   %ebp
   30e62:	89 e5                	mov    %esp,%ebp
   30e64:	53                   	push   %ebx
   30e65:	83 ec 14             	sub    $0x14,%esp
   30e68:	e8 ee f5 ff ff       	call   3045b <__x86.get_pc_thunk.bx>
   30e6d:	81 c3 93 b1 00 00    	add    $0xb193,%ebx
   30e73:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
   30e7a:	8d 83 94 c7 ff ff    	lea    -0x386c(%ebx),%eax
   30e80:	50                   	push   %eax
   30e81:	6a 1c                	push   $0x1c
   30e83:	8d 83 48 c7 ff ff    	lea    -0x38b8(%ebx),%eax
   30e89:	50                   	push   %eax
   30e8a:	8d 83 58 c7 ff ff    	lea    -0x38a8(%ebx),%eax
   30e90:	50                   	push   %eax
   30e91:	e8 02 01 00 00       	call   30f98 <printk>
   30e96:	83 c4 10             	add    $0x10,%esp
   30e99:	8b 45 f0             	mov    -0x10(%ebp),%eax
   30e9c:	8b 50 1c             	mov    0x1c(%eax),%edx
   30e9f:	8b 45 f0             	mov    -0x10(%ebp),%eax
   30ea2:	01 d0                	add    %edx,%eax
   30ea4:	89 45 f4             	mov    %eax,-0xc(%ebp)
   30ea7:	8b 45 f0             	mov    -0x10(%ebp),%eax
   30eaa:	8b 40 2c             	mov    0x2c(%eax),%eax
   30ead:	0f b7 c0             	movzwl %ax,%eax
   30eb0:	c1 e0 05             	shl    $0x5,%eax
   30eb3:	89 c2                	mov    %eax,%edx
   30eb5:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30eb8:	01 d0                	add    %edx,%eax
   30eba:	89 45 ec             	mov    %eax,-0x14(%ebp)
   30ebd:	eb 74                	jmp    30f33 <loader+0xd2>
   30ebf:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30ec2:	8b 00                	mov    (%eax),%eax
   30ec4:	83 f8 01             	cmp    $0x1,%eax
   30ec7:	75 66                	jne    30f2f <loader+0xce>
   30ec9:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30ecc:	8b 40 10             	mov    0x10(%eax),%eax
   30ecf:	8d 0c c5 00 00 00 00 	lea    0x0(,%eax,8),%ecx
   30ed6:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30ed9:	8b 40 04             	mov    0x4(%eax),%eax
   30edc:	c1 e0 05             	shl    $0x5,%eax
   30edf:	89 c2                	mov    %eax,%edx
   30ee1:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30ee4:	01 c2                	add    %eax,%edx
   30ee6:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30ee9:	8b 40 08             	mov    0x8(%eax),%eax
   30eec:	83 ec 04             	sub    $0x4,%esp
   30eef:	51                   	push   %ecx
   30ef0:	52                   	push   %edx
   30ef1:	50                   	push   %eax
   30ef2:	e8 8d 0d 00 00       	call   31c84 <memcpy>
   30ef7:	83 c4 10             	add    $0x10,%esp
   30efa:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30efd:	8b 50 14             	mov    0x14(%eax),%edx
   30f00:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30f03:	8b 40 10             	mov    0x10(%eax),%eax
   30f06:	29 c2                	sub    %eax,%edx
   30f08:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30f0b:	8b 48 04             	mov    0x4(%eax),%ecx
   30f0e:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30f11:	8b 40 10             	mov    0x10(%eax),%eax
   30f14:	01 c8                	add    %ecx,%eax
   30f16:	c1 e0 05             	shl    $0x5,%eax
   30f19:	89 c1                	mov    %eax,%ecx
   30f1b:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30f1e:	01 c8                	add    %ecx,%eax
   30f20:	83 ec 04             	sub    $0x4,%esp
   30f23:	52                   	push   %edx
   30f24:	6a 00                	push   $0x0
   30f26:	50                   	push   %eax
   30f27:	e8 a0 0d 00 00       	call   31ccc <memset>
   30f2c:	83 c4 10             	add    $0x10,%esp
   30f2f:	83 45 f4 20          	addl   $0x20,-0xc(%ebp)
   30f33:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30f36:	3b 45 ec             	cmp    -0x14(%ebp),%eax
   30f39:	72 84                	jb     30ebf <loader+0x5e>
   30f3b:	8b 45 f0             	mov    -0x10(%ebp),%eax
   30f3e:	8b 40 18             	mov    0x18(%eax),%eax
   30f41:	89 45 e8             	mov    %eax,-0x18(%ebp)
   30f44:	8b 45 e8             	mov    -0x18(%ebp),%eax
   30f47:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   30f4a:	c9                   	leave  
   30f4b:	c3                   	ret    

00030f4c <sbrk>:
   30f4c:	55                   	push   %ebp
   30f4d:	89 e5                	mov    %esp,%ebp
   30f4f:	53                   	push   %ebx
   30f50:	83 ec 04             	sub    $0x4,%esp
   30f53:	e8 ff f4 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   30f58:	05 a8 b0 00 00       	add    $0xb0a8,%eax
   30f5d:	83 ec 0c             	sub    $0xc,%esp
   30f60:	8d 90 9c c7 ff ff    	lea    -0x3864(%eax),%edx
   30f66:	52                   	push   %edx
   30f67:	8d 90 fc c7 ff ff    	lea    -0x3804(%eax),%edx
   30f6d:	52                   	push   %edx
   30f6e:	6a 08                	push   $0x8
   30f70:	8d 90 9e c7 ff ff    	lea    -0x3862(%eax),%edx
   30f76:	52                   	push   %edx
   30f77:	8d 90 b0 c7 ff ff    	lea    -0x3850(%eax),%edx
   30f7d:	52                   	push   %edx
   30f7e:	89 c3                	mov    %eax,%ebx
   30f80:	e8 13 00 00 00       	call   30f98 <printk>
   30f85:	83 c4 20             	add    $0x20,%esp
   30f88:	b8 01 00 00 00       	mov    $0x1,%eax
   30f8d:	82 b8 00 00 00 00 8b 	cmpb   $0x8b,0x0(%eax)
   30f94:	5d                   	pop    %ebp
   30f95:	fc                   	cld    
   30f96:	c9                   	leave  
   30f97:	c3                   	ret    

00030f98 <printk>:
   30f98:	55                   	push   %ebp
   30f99:	89 e5                	mov    %esp,%ebp
   30f9b:	53                   	push   %ebx
   30f9c:	83 ec 14             	sub    $0x14,%esp
   30f9f:	e8 b7 f4 ff ff       	call   3045b <__x86.get_pc_thunk.bx>
   30fa4:	81 c3 5c b0 00 00    	add    $0xb05c,%ebx
   30faa:	8d 45 0c             	lea    0xc(%ebp),%eax
   30fad:	89 45 f4             	mov    %eax,-0xc(%ebp)
   30fb0:	8b 45 08             	mov    0x8(%ebp),%eax
   30fb3:	ff 75 f4             	pushl  -0xc(%ebp)
   30fb6:	50                   	push   %eax
   30fb7:	68 00 01 00 00       	push   $0x100
   30fbc:	8d 83 80 1d 01 00    	lea    0x11d80(%ebx),%eax
   30fc2:	50                   	push   %eax
   30fc3:	e8 28 0e 00 00       	call   31df0 <vsnprintf>
   30fc8:	83 c4 10             	add    $0x10,%esp
   30fcb:	89 45 f0             	mov    %eax,-0x10(%ebp)
   30fce:	8b 45 f0             	mov    -0x10(%ebp),%eax
   30fd1:	83 ec 04             	sub    $0x4,%esp
   30fd4:	50                   	push   %eax
   30fd5:	8d 83 80 1d 01 00    	lea    0x11d80(%ebx),%eax
   30fdb:	50                   	push   %eax
   30fdc:	6a 01                	push   $0x1
   30fde:	e8 1a 09 00 00       	call   318fd <fs_write>
   30fe3:	83 c4 10             	add    $0x10,%esp
   30fe6:	90                   	nop
   30fe7:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   30fea:	c9                   	leave  
   30feb:	c3                   	ret    

00030fec <in_byte>:
   30fec:	55                   	push   %ebp
   30fed:	89 e5                	mov    %esp,%ebp
   30fef:	83 ec 14             	sub    $0x14,%esp
   30ff2:	e8 60 f4 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   30ff7:	05 09 b0 00 00       	add    $0xb009,%eax
   30ffc:	8b 45 08             	mov    0x8(%ebp),%eax
   30fff:	66 89 45 ec          	mov    %ax,-0x14(%ebp)
   31003:	8b 45 ec             	mov    -0x14(%ebp),%eax
   31006:	89 c2                	mov    %eax,%edx
   31008:	ec                   	in     (%dx),%al
   31009:	88 45 ff             	mov    %al,-0x1(%ebp)
   3100c:	8a 45 ff             	mov    -0x1(%ebp),%al
   3100f:	c9                   	leave  
   31010:	c3                   	ret    

00031011 <init_serial>:
   31011:	55                   	push   %ebp
   31012:	89 e5                	mov    %esp,%ebp
   31014:	e8 3e f4 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   31019:	05 e7 af 00 00       	add    $0xafe7,%eax
   3101e:	90                   	nop
   3101f:	5d                   	pop    %ebp
   31020:	c3                   	ret    

00031021 <serial_idle>:
   31021:	55                   	push   %ebp
   31022:	89 e5                	mov    %esp,%ebp
   31024:	e8 2e f4 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   31029:	05 d7 af 00 00       	add    $0xafd7,%eax
   3102e:	68 fd 03 00 00       	push   $0x3fd
   31033:	e8 b4 ff ff ff       	call   30fec <in_byte>
   31038:	83 c4 04             	add    $0x4,%esp
   3103b:	0f b6 c0             	movzbl %al,%eax
   3103e:	83 e0 20             	and    $0x20,%eax
   31041:	85 c0                	test   %eax,%eax
   31043:	0f 95 c0             	setne  %al
   31046:	0f b6 c0             	movzbl %al,%eax
   31049:	c9                   	leave  
   3104a:	c3                   	ret    

0003104b <serial_printc>:
   3104b:	55                   	push   %ebp
   3104c:	89 e5                	mov    %esp,%ebp
   3104e:	53                   	push   %ebx
   3104f:	83 ec 14             	sub    $0x14,%esp
   31052:	e8 04 f4 ff ff       	call   3045b <__x86.get_pc_thunk.bx>
   31057:	81 c3 a9 af 00 00    	add    $0xafa9,%ebx
   3105d:	8b 45 08             	mov    0x8(%ebp),%eax
   31060:	88 45 f4             	mov    %al,-0xc(%ebp)
   31063:	90                   	nop
   31064:	e8 b8 ff ff ff       	call   31021 <serial_idle>
   31069:	85 c0                	test   %eax,%eax
   3106b:	74 f7                	je     31064 <serial_printc+0x19>
   3106d:	8d 83 74 c8 ff ff    	lea    -0x378c(%ebx),%eax
   31073:	50                   	push   %eax
   31074:	6a 11                	push   $0x11
   31076:	8d 83 04 c8 ff ff    	lea    -0x37fc(%ebx),%eax
   3107c:	50                   	push   %eax
   3107d:	8d 83 18 c8 ff ff    	lea    -0x37e8(%ebx),%eax
   31083:	50                   	push   %eax
   31084:	e8 0f ff ff ff       	call   30f98 <printk>
   31089:	83 c4 10             	add    $0x10,%esp
   3108c:	b8 01 00 00 00       	mov    $0x1,%eax
   31091:	82 90 8b 5d fc c9 c3 	adcb   $0xc3,-0x3603a275(%eax)

00031098 <sti>:
   31098:	55                   	push   %ebp
   31099:	89 e5                	mov    %esp,%ebp
   3109b:	e8 b7 f3 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   310a0:	05 60 af 00 00       	add    $0xaf60,%eax
   310a5:	fb                   	sti    
   310a6:	90                   	nop
   310a7:	5d                   	pop    %ebp
   310a8:	c3                   	ret    

000310a9 <cli>:
   310a9:	55                   	push   %ebp
   310aa:	89 e5                	mov    %esp,%ebp
   310ac:	e8 a6 f3 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   310b1:	05 4f af 00 00       	add    $0xaf4f,%eax
   310b6:	fa                   	cli    
   310b7:	90                   	nop
   310b8:	5d                   	pop    %ebp
   310b9:	c3                   	ret    

000310ba <sys_brk>:
   310ba:	55                   	push   %ebp
   310bb:	89 e5                	mov    %esp,%ebp
   310bd:	e8 95 f3 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   310c2:	05 3e af 00 00       	add    $0xaf3e,%eax
   310c7:	8b 45 08             	mov    0x8(%ebp),%eax
   310ca:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
   310d1:	90                   	nop
   310d2:	5d                   	pop    %ebp
   310d3:	c3                   	ret    

000310d4 <sys_open>:
   310d4:	55                   	push   %ebp
   310d5:	89 e5                	mov    %esp,%ebp
   310d7:	53                   	push   %ebx
   310d8:	83 ec 04             	sub    $0x4,%esp
   310db:	e8 77 f3 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   310e0:	05 20 af 00 00       	add    $0xaf20,%eax
   310e5:	8b 55 08             	mov    0x8(%ebp),%edx
   310e8:	8b 52 18             	mov    0x18(%edx),%edx
   310eb:	89 d1                	mov    %edx,%ecx
   310ed:	8b 55 08             	mov    0x8(%ebp),%edx
   310f0:	8b 52 10             	mov    0x10(%edx),%edx
   310f3:	83 ec 08             	sub    $0x8,%esp
   310f6:	51                   	push   %ecx
   310f7:	52                   	push   %edx
   310f8:	89 c3                	mov    %eax,%ebx
   310fa:	e8 46 07 00 00       	call   31845 <fs_open>
   310ff:	83 c4 10             	add    $0x10,%esp
   31102:	89 c2                	mov    %eax,%edx
   31104:	8b 45 08             	mov    0x8(%ebp),%eax
   31107:	89 50 1c             	mov    %edx,0x1c(%eax)
   3110a:	90                   	nop
   3110b:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   3110e:	c9                   	leave  
   3110f:	c3                   	ret    

00031110 <sys_read>:
   31110:	55                   	push   %ebp
   31111:	89 e5                	mov    %esp,%ebp
   31113:	53                   	push   %ebx
   31114:	83 ec 04             	sub    $0x4,%esp
   31117:	e8 3b f3 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   3111c:	05 e4 ae 00 00       	add    $0xaee4,%eax
   31121:	8b 55 08             	mov    0x8(%ebp),%edx
   31124:	8b 52 14             	mov    0x14(%edx),%edx
   31127:	8b 4d 08             	mov    0x8(%ebp),%ecx
   3112a:	8b 49 18             	mov    0x18(%ecx),%ecx
   3112d:	89 cb                	mov    %ecx,%ebx
   3112f:	8b 4d 08             	mov    0x8(%ebp),%ecx
   31132:	8b 49 10             	mov    0x10(%ecx),%ecx
   31135:	83 ec 04             	sub    $0x4,%esp
   31138:	52                   	push   %edx
   31139:	53                   	push   %ebx
   3113a:	51                   	push   %ecx
   3113b:	89 c3                	mov    %eax,%ebx
   3113d:	e8 45 07 00 00       	call   31887 <fs_read>
   31142:	83 c4 10             	add    $0x10,%esp
   31145:	89 c2                	mov    %eax,%edx
   31147:	8b 45 08             	mov    0x8(%ebp),%eax
   3114a:	89 50 1c             	mov    %edx,0x1c(%eax)
   3114d:	90                   	nop
   3114e:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   31151:	c9                   	leave  
   31152:	c3                   	ret    

00031153 <sys_write>:
   31153:	55                   	push   %ebp
   31154:	89 e5                	mov    %esp,%ebp
   31156:	53                   	push   %ebx
   31157:	83 ec 04             	sub    $0x4,%esp
   3115a:	e8 f8 f2 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   3115f:	05 a1 ae 00 00       	add    $0xaea1,%eax
   31164:	8b 55 08             	mov    0x8(%ebp),%edx
   31167:	8b 52 14             	mov    0x14(%edx),%edx
   3116a:	8b 4d 08             	mov    0x8(%ebp),%ecx
   3116d:	8b 49 18             	mov    0x18(%ecx),%ecx
   31170:	89 cb                	mov    %ecx,%ebx
   31172:	8b 4d 08             	mov    0x8(%ebp),%ecx
   31175:	8b 49 10             	mov    0x10(%ecx),%ecx
   31178:	83 ec 04             	sub    $0x4,%esp
   3117b:	52                   	push   %edx
   3117c:	53                   	push   %ebx
   3117d:	51                   	push   %ecx
   3117e:	89 c3                	mov    %eax,%ebx
   31180:	e8 78 07 00 00       	call   318fd <fs_write>
   31185:	83 c4 10             	add    $0x10,%esp
   31188:	89 c2                	mov    %eax,%edx
   3118a:	8b 45 08             	mov    0x8(%ebp),%eax
   3118d:	89 50 1c             	mov    %edx,0x1c(%eax)
   31190:	90                   	nop
   31191:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   31194:	c9                   	leave  
   31195:	c3                   	ret    

00031196 <sys_lseek>:
   31196:	55                   	push   %ebp
   31197:	89 e5                	mov    %esp,%ebp
   31199:	53                   	push   %ebx
   3119a:	83 ec 04             	sub    $0x4,%esp
   3119d:	e8 b5 f2 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   311a2:	05 5e ae 00 00       	add    $0xae5e,%eax
   311a7:	8b 55 08             	mov    0x8(%ebp),%edx
   311aa:	8b 52 14             	mov    0x14(%edx),%edx
   311ad:	89 d3                	mov    %edx,%ebx
   311af:	8b 55 08             	mov    0x8(%ebp),%edx
   311b2:	8b 52 18             	mov    0x18(%edx),%edx
   311b5:	89 d1                	mov    %edx,%ecx
   311b7:	8b 55 08             	mov    0x8(%ebp),%edx
   311ba:	8b 52 10             	mov    0x10(%edx),%edx
   311bd:	83 ec 04             	sub    $0x4,%esp
   311c0:	53                   	push   %ebx
   311c1:	51                   	push   %ecx
   311c2:	52                   	push   %edx
   311c3:	89 c3                	mov    %eax,%ebx
   311c5:	e8 95 07 00 00       	call   3195f <fs_lseek>
   311ca:	83 c4 10             	add    $0x10,%esp
   311cd:	89 c2                	mov    %eax,%edx
   311cf:	8b 45 08             	mov    0x8(%ebp),%eax
   311d2:	89 50 1c             	mov    %edx,0x1c(%eax)
   311d5:	90                   	nop
   311d6:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   311d9:	c9                   	leave  
   311da:	c3                   	ret    

000311db <sys_close>:
   311db:	55                   	push   %ebp
   311dc:	89 e5                	mov    %esp,%ebp
   311de:	53                   	push   %ebx
   311df:	83 ec 04             	sub    $0x4,%esp
   311e2:	e8 70 f2 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   311e7:	05 19 ae 00 00       	add    $0xae19,%eax
   311ec:	8b 55 08             	mov    0x8(%ebp),%edx
   311ef:	8b 52 10             	mov    0x10(%edx),%edx
   311f2:	83 ec 0c             	sub    $0xc,%esp
   311f5:	52                   	push   %edx
   311f6:	89 c3                	mov    %eax,%ebx
   311f8:	e8 a4 07 00 00       	call   319a1 <fs_close>
   311fd:	83 c4 10             	add    $0x10,%esp
   31200:	89 c2                	mov    %eax,%edx
   31202:	8b 45 08             	mov    0x8(%ebp),%eax
   31205:	89 50 1c             	mov    %edx,0x1c(%eax)
   31208:	90                   	nop
   31209:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   3120c:	c9                   	leave  
   3120d:	c3                   	ret    

0003120e <do_syscall>:
   3120e:	55                   	push   %ebp
   3120f:	89 e5                	mov    %esp,%ebp
   31211:	53                   	push   %ebx
   31212:	83 ec 04             	sub    $0x4,%esp
   31215:	e8 41 f2 ff ff       	call   3045b <__x86.get_pc_thunk.bx>
   3121a:	81 c3 e6 ad 00 00    	add    $0xade6,%ebx
   31220:	8b 45 08             	mov    0x8(%ebp),%eax
   31223:	8b 40 1c             	mov    0x1c(%eax),%eax
   31226:	83 f8 2d             	cmp    $0x2d,%eax
   31229:	0f 87 98 00 00 00    	ja     312c7 <.L10>
   3122f:	c1 e0 02             	shl    $0x2,%eax
   31232:	8b 84 18 f4 c8 ff ff 	mov    -0x370c(%eax,%ebx,1),%eax
   31239:	01 d8                	add    %ebx,%eax
   3123b:	ff e0                	jmp    *%eax

0003123d <.L11>:
   3123d:	e8 67 fe ff ff       	call   310a9 <cli>
   31242:	8b 45 08             	mov    0x8(%ebp),%eax
   31245:	8b 40 18             	mov    0x18(%eax),%eax
   31248:	89 c2                	mov    %eax,%edx
   3124a:	8b 45 08             	mov    0x8(%ebp),%eax
   3124d:	8b 40 10             	mov    0x10(%eax),%eax
   31250:	83 ec 08             	sub    $0x8,%esp
   31253:	52                   	push   %edx
   31254:	50                   	push   %eax
   31255:	e8 ff f2 ff ff       	call   30559 <add_irq_handle>
   3125a:	83 c4 10             	add    $0x10,%esp
   3125d:	e8 36 fe ff ff       	call   31098 <sti>
   31262:	e9 8f 00 00 00       	jmp    312f6 <.L10+0x2f>

00031267 <.L18>:
   31267:	83 ec 0c             	sub    $0xc,%esp
   3126a:	ff 75 08             	pushl  0x8(%ebp)
   3126d:	e8 48 fe ff ff       	call   310ba <sys_brk>
   31272:	83 c4 10             	add    $0x10,%esp
   31275:	eb 7f                	jmp    312f6 <.L10+0x2f>

00031277 <.L15>:
   31277:	83 ec 0c             	sub    $0xc,%esp
   3127a:	ff 75 08             	pushl  0x8(%ebp)
   3127d:	e8 52 fe ff ff       	call   310d4 <sys_open>
   31282:	83 c4 10             	add    $0x10,%esp
   31285:	eb 6f                	jmp    312f6 <.L10+0x2f>

00031287 <.L13>:
   31287:	83 ec 0c             	sub    $0xc,%esp
   3128a:	ff 75 08             	pushl  0x8(%ebp)
   3128d:	e8 7e fe ff ff       	call   31110 <sys_read>
   31292:	83 c4 10             	add    $0x10,%esp
   31295:	eb 5f                	jmp    312f6 <.L10+0x2f>

00031297 <.L14>:
   31297:	83 ec 0c             	sub    $0xc,%esp
   3129a:	ff 75 08             	pushl  0x8(%ebp)
   3129d:	e8 b1 fe ff ff       	call   31153 <sys_write>
   312a2:	83 c4 10             	add    $0x10,%esp
   312a5:	eb 4f                	jmp    312f6 <.L10+0x2f>

000312a7 <.L17>:
   312a7:	83 ec 0c             	sub    $0xc,%esp
   312aa:	ff 75 08             	pushl  0x8(%ebp)
   312ad:	e8 e4 fe ff ff       	call   31196 <sys_lseek>
   312b2:	83 c4 10             	add    $0x10,%esp
   312b5:	eb 3f                	jmp    312f6 <.L10+0x2f>

000312b7 <.L16>:
   312b7:	83 ec 0c             	sub    $0xc,%esp
   312ba:	ff 75 08             	pushl  0x8(%ebp)
   312bd:	e8 19 ff ff ff       	call   311db <sys_close>
   312c2:	83 c4 10             	add    $0x10,%esp
   312c5:	eb 2f                	jmp    312f6 <.L10+0x2f>

000312c7 <.L10>:
   312c7:	8b 45 08             	mov    0x8(%ebp),%eax
   312ca:	8b 40 1c             	mov    0x1c(%eax),%eax
   312cd:	83 ec 0c             	sub    $0xc,%esp
   312d0:	50                   	push   %eax
   312d1:	8d 83 ac c9 ff ff    	lea    -0x3654(%ebx),%eax
   312d7:	50                   	push   %eax
   312d8:	6a 35                	push   $0x35
   312da:	8d 83 84 c8 ff ff    	lea    -0x377c(%ebx),%eax
   312e0:	50                   	push   %eax
   312e1:	8d 83 a0 c8 ff ff    	lea    -0x3760(%ebx),%eax
   312e7:	50                   	push   %eax
   312e8:	e8 ab fc ff ff       	call   30f98 <printk>
   312ed:	83 c4 20             	add    $0x20,%esp
   312f0:	b8 01 00 00 00       	mov    $0x1,%eax
   312f5:	82 90 8b 5d fc c9 c3 	adcb   $0xc3,-0x3603a275(%eax)

000312fc <init>:
   312fc:	55                   	push   %ebp
   312fd:	89 e5                	mov    %esp,%ebp
   312ff:	e8 53 f1 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   31304:	05 fc ac 00 00       	add    $0xacfc,%eax
   31309:	8d 80 1a 53 ff ff    	lea    -0xace6(%eax),%eax
   3130f:	ff e0                	jmp    *%eax
   31311:	b8 01 00 00 00       	mov    $0x1,%eax
   31316:	82                   	.byte 0x82
   31317:	90                   	nop
   31318:	5d                   	pop    %ebp
   31319:	c3                   	ret    

0003131a <init_cond>:
   3131a:	55                   	push   %ebp
   3131b:	89 e5                	mov    %esp,%ebp
   3131d:	53                   	push   %ebx
   3131e:	83 ec 14             	sub    $0x14,%esp
   31321:	e8 35 f1 ff ff       	call   3045b <__x86.get_pc_thunk.bx>
   31326:	81 c3 da ac 00 00    	add    $0xacda,%ebx
   3132c:	8d 83 f8 c9 ff ff    	lea    -0x3608(%ebx),%eax
   31332:	50                   	push   %eax
   31333:	6a 4b                	push   $0x4b
   31335:	8d 83 b8 c9 ff ff    	lea    -0x3648(%ebx),%eax
   3133b:	50                   	push   %eax
   3133c:	8d 83 c4 c9 ff ff    	lea    -0x363c(%ebx),%eax
   31342:	50                   	push   %eax
   31343:	e8 50 fc ff ff       	call   30f98 <printk>
   31348:	83 c4 10             	add    $0x10,%esp
   3134b:	e8 11 fb ff ff       	call   30e61 <loader>
   31350:	89 45 f4             	mov    %eax,-0xc(%ebp)
   31353:	8b 45 f4             	mov    -0xc(%ebp),%eax
   31356:	ff d0                	call   *%eax
   31358:	90                   	nop
   31359:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   3135c:	c9                   	leave  
   3135d:	c3                   	ret    

0003135e <read_cr0>:
   3135e:	55                   	push   %ebp
   3135f:	89 e5                	mov    %esp,%ebp
   31361:	83 ec 10             	sub    $0x10,%esp
   31364:	e8 ee f0 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   31369:	05 97 ac 00 00       	add    $0xac97,%eax
   3136e:	0f 20 c0             	mov    %cr0,%eax
   31371:	89 45 fc             	mov    %eax,-0x4(%ebp)
   31374:	8b 45 fc             	mov    -0x4(%ebp),%eax
   31377:	c9                   	leave  
   31378:	c3                   	ret    

00031379 <write_cr0>:
   31379:	55                   	push   %ebp
   3137a:	89 e5                	mov    %esp,%ebp
   3137c:	e8 d6 f0 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   31381:	05 7f ac 00 00       	add    $0xac7f,%eax
   31386:	8b 45 08             	mov    0x8(%ebp),%eax
   31389:	0f 22 c0             	mov    %eax,%cr0
   3138c:	90                   	nop
   3138d:	5d                   	pop    %ebp
   3138e:	c3                   	ret    

0003138f <write_cr3>:
   3138f:	55                   	push   %ebp
   31390:	89 e5                	mov    %esp,%ebp
   31392:	e8 c0 f0 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   31397:	05 69 ac 00 00       	add    $0xac69,%eax
   3139c:	8b 45 08             	mov    0x8(%ebp),%eax
   3139f:	0f 22 d8             	mov    %eax,%cr3
   313a2:	90                   	nop
   313a3:	5d                   	pop    %ebp
   313a4:	c3                   	ret    

000313a5 <write_gdtr>:
   313a5:	55                   	push   %ebp
   313a6:	89 e5                	mov    %esp,%ebp
   313a8:	e8 aa f0 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   313ad:	05 53 ac 00 00       	add    $0xac53,%eax
   313b2:	8b 55 0c             	mov    0xc(%ebp),%edx
   313b5:	4a                   	dec    %edx
   313b6:	66 89 90 80 1e 01 00 	mov    %dx,0x11e80(%eax)
   313bd:	8b 55 08             	mov    0x8(%ebp),%edx
   313c0:	66 89 90 82 1e 01 00 	mov    %dx,0x11e82(%eax)
   313c7:	8b 55 08             	mov    0x8(%ebp),%edx
   313ca:	c1 ea 10             	shr    $0x10,%edx
   313cd:	66 89 90 84 1e 01 00 	mov    %dx,0x11e84(%eax)
   313d4:	8d 80 80 1e 01 00    	lea    0x11e80(%eax),%eax
   313da:	0f 01 10             	lgdtl  (%eax)
   313dd:	90                   	nop
   313de:	5d                   	pop    %ebp
   313df:	c3                   	ret    

000313e0 <get_kpdir>:
   313e0:	55                   	push   %ebp
   313e1:	89 e5                	mov    %esp,%ebp
   313e3:	e8 6f f0 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   313e8:	05 18 ac 00 00       	add    $0xac18,%eax
   313ed:	c7 c0 00 10 07 00    	mov    $0x71000,%eax
   313f3:	5d                   	pop    %ebp
   313f4:	c3                   	ret    

000313f5 <init_page>:
   313f5:	55                   	push   %ebp
   313f6:	89 e5                	mov    %esp,%ebp
   313f8:	53                   	push   %ebx
   313f9:	83 ec 24             	sub    $0x24,%esp
   313fc:	e8 56 f0 ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   31401:	05 ff ab 00 00       	add    $0xabff,%eax
   31406:	c7 c2 00 10 07 00    	mov    $0x71000,%edx
   3140c:	89 55 e4             	mov    %edx,-0x1c(%ebp)
   3140f:	c7 c2 00 20 07 00    	mov    $0x72000,%edx
   31415:	89 55 f4             	mov    %edx,-0xc(%ebp)
   31418:	83 ec 04             	sub    $0x4,%esp
   3141b:	68 00 10 00 00       	push   $0x1000
   31420:	6a 00                	push   $0x0
   31422:	ff 75 e4             	pushl  -0x1c(%ebp)
   31425:	89 c3                	mov    %eax,%ebx
   31427:	e8 a0 08 00 00       	call   31ccc <memset>
   3142c:	83 c4 10             	add    $0x10,%esp
   3142f:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
   31436:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
   3143d:	eb 69                	jmp    314a8 <init_page+0xb3>
   3143f:	8b 45 f0             	mov    -0x10(%ebp),%eax
   31442:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
   31449:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   3144c:	01 d0                	add    %edx,%eax
   3144e:	8b 55 f4             	mov    -0xc(%ebp),%edx
   31451:	81 e2 00 f0 ff ff    	and    $0xfffff000,%edx
   31457:	83 ca 07             	or     $0x7,%edx
   3145a:	89 10                	mov    %edx,(%eax)
   3145c:	8b 45 f0             	mov    -0x10(%ebp),%eax
   3145f:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
   31466:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   31469:	01 d0                	add    %edx,%eax
   3146b:	8b 55 f4             	mov    -0xc(%ebp),%edx
   3146e:	81 e2 00 f0 ff ff    	and    $0xfffff000,%edx
   31474:	83 ca 07             	or     $0x7,%edx
   31477:	89 10                	mov    %edx,(%eax)
   31479:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
   31480:	eb 1a                	jmp    3149c <init_page+0xa7>
   31482:	8b 45 e8             	mov    -0x18(%ebp),%eax
   31485:	c1 e0 0c             	shl    $0xc,%eax
   31488:	83 c8 07             	or     $0x7,%eax
   3148b:	89 c2                	mov    %eax,%edx
   3148d:	8b 45 f4             	mov    -0xc(%ebp),%eax
   31490:	89 10                	mov    %edx,(%eax)
   31492:	ff 45 e8             	incl   -0x18(%ebp)
   31495:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
   31499:	ff 45 ec             	incl   -0x14(%ebp)
   3149c:	81 7d ec ff 03 00 00 	cmpl   $0x3ff,-0x14(%ebp)
   314a3:	76 dd                	jbe    31482 <init_page+0x8d>
   314a5:	ff 45 f0             	incl   -0x10(%ebp)
   314a8:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
   314ac:	76 91                	jbe    3143f <init_page+0x4a>
   314ae:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
   314b5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   314b8:	c1 e8 0c             	shr    $0xc,%eax
   314bb:	25 ff ff 0f 00       	and    $0xfffff,%eax
   314c0:	c1 e0 0c             	shl    $0xc,%eax
   314c3:	89 c2                	mov    %eax,%edx
   314c5:	8b 45 dc             	mov    -0x24(%ebp),%eax
   314c8:	25 ff 0f 00 00       	and    $0xfff,%eax
   314cd:	09 d0                	or     %edx,%eax
   314cf:	89 45 dc             	mov    %eax,-0x24(%ebp)
   314d2:	8b 45 dc             	mov    -0x24(%ebp),%eax
   314d5:	83 ec 0c             	sub    $0xc,%esp
   314d8:	50                   	push   %eax
   314d9:	e8 b1 fe ff ff       	call   3138f <write_cr3>
   314de:	83 c4 10             	add    $0x10,%esp
   314e1:	e8 78 fe ff ff       	call   3135e <read_cr0>
   314e6:	89 45 e0             	mov    %eax,-0x20(%ebp)
   314e9:	8a 45 e3             	mov    -0x1d(%ebp),%al
   314ec:	83 c8 80             	or     $0xffffff80,%eax
   314ef:	88 45 e3             	mov    %al,-0x1d(%ebp)
   314f2:	8b 45 e0             	mov    -0x20(%ebp),%eax
   314f5:	83 ec 0c             	sub    $0xc,%esp
   314f8:	50                   	push   %eax
   314f9:	e8 7b fe ff ff       	call   31379 <write_cr0>
   314fe:	83 c4 10             	add    $0x10,%esp
   31501:	90                   	nop
   31502:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   31505:	c9                   	leave  
   31506:	c3                   	ret    

00031507 <set_segment>:
   31507:	55                   	push   %ebp
   31508:	89 e5                	mov    %esp,%ebp
   3150a:	e8 48 ef ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   3150f:	05 f1 aa 00 00       	add    $0xaaf1,%eax
   31514:	8b 45 08             	mov    0x8(%ebp),%eax
   31517:	66 c7 00 ff ff       	movw   $0xffff,(%eax)
   3151c:	8b 45 08             	mov    0x8(%ebp),%eax
   3151f:	66 c7 40 02 00 00    	movw   $0x0,0x2(%eax)
   31525:	8b 45 08             	mov    0x8(%ebp),%eax
   31528:	c6 40 04 00          	movb   $0x0,0x4(%eax)
   3152c:	8b 45 10             	mov    0x10(%ebp),%eax
   3152f:	83 e0 0f             	and    $0xf,%eax
   31532:	88 c2                	mov    %al,%dl
   31534:	8b 45 08             	mov    0x8(%ebp),%eax
   31537:	88 d1                	mov    %dl,%cl
   31539:	83 e1 0f             	and    $0xf,%ecx
   3153c:	8a 50 05             	mov    0x5(%eax),%dl
   3153f:	83 e2 f0             	and    $0xfffffff0,%edx
   31542:	09 ca                	or     %ecx,%edx
   31544:	88 50 05             	mov    %dl,0x5(%eax)
   31547:	8b 45 08             	mov    0x8(%ebp),%eax
   3154a:	8a 50 05             	mov    0x5(%eax),%dl
   3154d:	83 ca 10             	or     $0x10,%edx
   31550:	88 50 05             	mov    %dl,0x5(%eax)
   31553:	8b 45 0c             	mov    0xc(%ebp),%eax
   31556:	83 e0 03             	and    $0x3,%eax
   31559:	88 c2                	mov    %al,%dl
   3155b:	8b 45 08             	mov    0x8(%ebp),%eax
   3155e:	83 e2 03             	and    $0x3,%edx
   31561:	88 d1                	mov    %dl,%cl
   31563:	c1 e1 05             	shl    $0x5,%ecx
   31566:	8a 50 05             	mov    0x5(%eax),%dl
   31569:	83 e2 9f             	and    $0xffffff9f,%edx
   3156c:	09 ca                	or     %ecx,%edx
   3156e:	88 50 05             	mov    %dl,0x5(%eax)
   31571:	8b 45 08             	mov    0x8(%ebp),%eax
   31574:	8a 50 05             	mov    0x5(%eax),%dl
   31577:	83 ca 80             	or     $0xffffff80,%edx
   3157a:	88 50 05             	mov    %dl,0x5(%eax)
   3157d:	8b 45 08             	mov    0x8(%ebp),%eax
   31580:	8a 50 06             	mov    0x6(%eax),%dl
   31583:	83 ca 0f             	or     $0xf,%edx
   31586:	88 50 06             	mov    %dl,0x6(%eax)
   31589:	8b 45 08             	mov    0x8(%ebp),%eax
   3158c:	8a 50 06             	mov    0x6(%eax),%dl
   3158f:	83 e2 ef             	and    $0xffffffef,%edx
   31592:	88 50 06             	mov    %dl,0x6(%eax)
   31595:	8b 45 08             	mov    0x8(%ebp),%eax
   31598:	8a 50 06             	mov    0x6(%eax),%dl
   3159b:	83 e2 df             	and    $0xffffffdf,%edx
   3159e:	88 50 06             	mov    %dl,0x6(%eax)
   315a1:	8b 45 08             	mov    0x8(%ebp),%eax
   315a4:	8a 50 06             	mov    0x6(%eax),%dl
   315a7:	83 ca 40             	or     $0x40,%edx
   315aa:	88 50 06             	mov    %dl,0x6(%eax)
   315ad:	8b 45 08             	mov    0x8(%ebp),%eax
   315b0:	8a 50 06             	mov    0x6(%eax),%dl
   315b3:	83 ca 80             	or     $0xffffff80,%edx
   315b6:	88 50 06             	mov    %dl,0x6(%eax)
   315b9:	8b 45 08             	mov    0x8(%ebp),%eax
   315bc:	c6 40 07 00          	movb   $0x0,0x7(%eax)
   315c0:	90                   	nop
   315c1:	5d                   	pop    %ebp
   315c2:	c3                   	ret    

000315c3 <init_segment>:
   315c3:	55                   	push   %ebp
   315c4:	89 e5                	mov    %esp,%ebp
   315c6:	53                   	push   %ebx
   315c7:	83 ec 04             	sub    $0x4,%esp
   315ca:	e8 8c ee ff ff       	call   3045b <__x86.get_pc_thunk.bx>
   315cf:	81 c3 31 aa 00 00    	add    $0xaa31,%ebx
   315d5:	83 ec 04             	sub    $0x4,%esp
   315d8:	6a 18                	push   $0x18
   315da:	6a 00                	push   $0x0
   315dc:	c7 c0 00 00 07 00    	mov    $0x70000,%eax
   315e2:	50                   	push   %eax
   315e3:	e8 e4 06 00 00       	call   31ccc <memset>
   315e8:	83 c4 10             	add    $0x10,%esp
   315eb:	83 ec 04             	sub    $0x4,%esp
   315ee:	6a 0a                	push   $0xa
   315f0:	6a 00                	push   $0x0
   315f2:	c7 c0 00 00 07 00    	mov    $0x70000,%eax
   315f8:	8d 40 08             	lea    0x8(%eax),%eax
   315fb:	50                   	push   %eax
   315fc:	e8 06 ff ff ff       	call   31507 <set_segment>
   31601:	83 c4 10             	add    $0x10,%esp
   31604:	83 ec 04             	sub    $0x4,%esp
   31607:	6a 02                	push   $0x2
   31609:	6a 00                	push   $0x0
   3160b:	c7 c0 00 00 07 00    	mov    $0x70000,%eax
   31611:	8d 40 10             	lea    0x10(%eax),%eax
   31614:	50                   	push   %eax
   31615:	e8 ed fe ff ff       	call   31507 <set_segment>
   3161a:	83 c4 10             	add    $0x10,%esp
   3161d:	83 ec 08             	sub    $0x8,%esp
   31620:	6a 18                	push   $0x18
   31622:	c7 c0 00 00 07 00    	mov    $0x70000,%eax
   31628:	50                   	push   %eax
   31629:	e8 77 fd ff ff       	call   313a5 <write_gdtr>
   3162e:	83 c4 10             	add    $0x10,%esp
   31631:	90                   	nop
   31632:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   31635:	c9                   	leave  
   31636:	c3                   	ret    

00031637 <get_updir>:
   31637:	55                   	push   %ebp
   31638:	89 e5                	mov    %esp,%ebp
   3163a:	e8 18 ee ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   3163f:	05 c1 a9 00 00       	add    $0xa9c1,%eax
   31644:	c7 c0 00 20 09 00    	mov    $0x92000,%eax
   3164a:	5d                   	pop    %ebp
   3164b:	c3                   	ret    

0003164c <get_ucr3>:
   3164c:	55                   	push   %ebp
   3164d:	89 e5                	mov    %esp,%ebp
   3164f:	e8 03 ee ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   31654:	05 ac a9 00 00       	add    $0xa9ac,%eax
   31659:	c7 c0 00 30 09 00    	mov    $0x93000,%eax
   3165f:	8b 00                	mov    (%eax),%eax
   31661:	5d                   	pop    %ebp
   31662:	c3                   	ret    

00031663 <mm_brk>:
   31663:	55                   	push   %ebp
   31664:	89 e5                	mov    %esp,%ebp
   31666:	53                   	push   %ebx
   31667:	83 ec 04             	sub    $0x4,%esp
   3166a:	e8 ec ed ff ff       	call   3045b <__x86.get_pc_thunk.bx>
   3166f:	81 c3 91 a9 00 00    	add    $0xa991,%ebx
   31675:	8b 83 88 1e 01 00    	mov    0x11e88(%ebx),%eax
   3167b:	39 45 08             	cmp    %eax,0x8(%ebp)
   3167e:	76 22                	jbe    316a2 <mm_brk+0x3f>
   31680:	8b 83 88 1e 01 00    	mov    0x11e88(%ebx),%eax
   31686:	8b 55 08             	mov    0x8(%ebp),%edx
   31689:	29 c2                	sub    %eax,%edx
   3168b:	89 d0                	mov    %edx,%eax
   3168d:	89 c2                	mov    %eax,%edx
   3168f:	8b 83 88 1e 01 00    	mov    0x11e88(%ebx),%eax
   31695:	83 ec 08             	sub    $0x8,%esp
   31698:	52                   	push   %edx
   31699:	50                   	push   %eax
   3169a:	e8 51 03 00 00       	call   319f0 <mm_malloc>
   3169f:	83 c4 10             	add    $0x10,%esp
   316a2:	8b 45 08             	mov    0x8(%ebp),%eax
   316a5:	89 83 88 1e 01 00    	mov    %eax,0x11e88(%ebx)
   316ab:	90                   	nop
   316ac:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   316af:	c9                   	leave  
   316b0:	c3                   	ret    

000316b1 <init_mm>:
   316b1:	55                   	push   %ebp
   316b2:	89 e5                	mov    %esp,%ebp
   316b4:	53                   	push   %ebx
   316b5:	83 ec 14             	sub    $0x14,%esp
   316b8:	e8 9e ed ff ff       	call   3045b <__x86.get_pc_thunk.bx>
   316bd:	81 c3 43 a9 00 00    	add    $0xa943,%ebx
   316c3:	e8 18 fd ff ff       	call   313e0 <get_kpdir>
   316c8:	89 45 f4             	mov    %eax,-0xc(%ebp)
   316cb:	83 ec 04             	sub    $0x4,%esp
   316ce:	68 00 10 00 00       	push   $0x1000
   316d3:	6a 00                	push   $0x0
   316d5:	c7 c0 00 20 09 00    	mov    $0x92000,%eax
   316db:	50                   	push   %eax
   316dc:	e8 eb 05 00 00       	call   31ccc <memset>
   316e1:	83 c4 10             	add    $0x10,%esp
   316e4:	83 ec 04             	sub    $0x4,%esp
   316e7:	68 80 00 00 00       	push   $0x80
   316ec:	ff 75 f4             	pushl  -0xc(%ebp)
   316ef:	c7 c0 00 20 09 00    	mov    $0x92000,%eax
   316f5:	50                   	push   %eax
   316f6:	e8 89 05 00 00       	call   31c84 <memcpy>
   316fb:	83 c4 10             	add    $0x10,%esp
   316fe:	c7 c0 00 20 09 00    	mov    $0x92000,%eax
   31704:	25 00 fc ff ff       	and    $0xfffffc00,%eax
   31709:	89 c2                	mov    %eax,%edx
   3170b:	c7 c0 00 30 09 00    	mov    $0x93000,%eax
   31711:	89 10                	mov    %edx,(%eax)
   31713:	90                   	nop
   31714:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   31717:	c9                   	leave  
   31718:	c3                   	ret    

00031719 <create_video_mapping>:
   31719:	55                   	push   %ebp
   3171a:	89 e5                	mov    %esp,%ebp
   3171c:	53                   	push   %ebx
   3171d:	83 ec 04             	sub    $0x4,%esp
   31720:	e8 32 ed ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   31725:	05 db a8 00 00       	add    $0xa8db,%eax
   3172a:	8d 90 bc ca ff ff    	lea    -0x3544(%eax),%edx
   31730:	52                   	push   %edx
   31731:	6a 13                	push   $0x13
   31733:	8d 90 04 ca ff ff    	lea    -0x35fc(%eax),%edx
   31739:	52                   	push   %edx
   3173a:	8d 90 18 ca ff ff    	lea    -0x35e8(%eax),%edx
   31740:	52                   	push   %edx
   31741:	89 c3                	mov    %eax,%ebx
   31743:	e8 50 f8 ff ff       	call   30f98 <printk>
   31748:	83 c4 10             	add    $0x10,%esp
   3174b:	b8 01 00 00 00       	mov    $0x1,%eax
   31750:	82 90 8b 5d fc c9 c3 	adcb   $0xc3,-0x3603a275(%eax)

00031757 <video_mapping_write_test>:
   31757:	55                   	push   %ebp
   31758:	89 e5                	mov    %esp,%ebp
   3175a:	83 ec 10             	sub    $0x10,%esp
   3175d:	e8 f5 ec ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   31762:	05 9e a8 00 00       	add    $0xa89e,%eax
   31767:	c7 45 f8 00 00 0a 00 	movl   $0xa0000,-0x8(%ebp)
   3176e:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
   31775:	eb 17                	jmp    3178e <video_mapping_write_test+0x37>
   31777:	8b 45 fc             	mov    -0x4(%ebp),%eax
   3177a:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
   31781:	8b 45 f8             	mov    -0x8(%ebp),%eax
   31784:	01 c2                	add    %eax,%edx
   31786:	8b 45 fc             	mov    -0x4(%ebp),%eax
   31789:	89 02                	mov    %eax,(%edx)
   3178b:	ff 45 fc             	incl   -0x4(%ebp)
   3178e:	81 7d fc 7f 3e 00 00 	cmpl   $0x3e7f,-0x4(%ebp)
   31795:	7e e0                	jle    31777 <video_mapping_write_test+0x20>
   31797:	90                   	nop
   31798:	c9                   	leave  
   31799:	c3                   	ret    

0003179a <video_mapping_read_test>:
   3179a:	55                   	push   %ebp
   3179b:	89 e5                	mov    %esp,%ebp
   3179d:	53                   	push   %ebx
   3179e:	83 ec 14             	sub    $0x14,%esp
   317a1:	e8 b5 ec ff ff       	call   3045b <__x86.get_pc_thunk.bx>
   317a6:	81 c3 5a a8 00 00    	add    $0xa85a,%ebx
   317ac:	c7 45 f0 00 00 0a 00 	movl   $0xa0000,-0x10(%ebp)
   317b3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
   317ba:	eb 4a                	jmp    31806 <video_mapping_read_test+0x6c>
   317bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
   317bf:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
   317c6:	8b 45 f0             	mov    -0x10(%ebp),%eax
   317c9:	01 d0                	add    %edx,%eax
   317cb:	8b 10                	mov    (%eax),%edx
   317cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
   317d0:	39 c2                	cmp    %eax,%edx
   317d2:	74 2f                	je     31803 <video_mapping_read_test+0x69>
   317d4:	83 ec 0c             	sub    $0xc,%esp
   317d7:	8d 83 61 ca ff ff    	lea    -0x359f(%ebx),%eax
   317dd:	50                   	push   %eax
   317de:	8d 83 d4 ca ff ff    	lea    -0x352c(%ebx),%eax
   317e4:	50                   	push   %eax
   317e5:	6a 22                	push   $0x22
   317e7:	8d 83 04 ca ff ff    	lea    -0x35fc(%ebx),%eax
   317ed:	50                   	push   %eax
   317ee:	8d 83 70 ca ff ff    	lea    -0x3590(%ebx),%eax
   317f4:	50                   	push   %eax
   317f5:	e8 9e f7 ff ff       	call   30f98 <printk>
   317fa:	83 c4 20             	add    $0x20,%esp
   317fd:	b8 01 00 00 00       	mov    $0x1,%eax
   31802:	82 ff 45             	cmp    $0x45,%bh
   31805:	f4                   	hlt    
   31806:	81 7d f4 7f 3e 00 00 	cmpl   $0x3e7f,-0xc(%ebp)
   3180d:	7e ad                	jle    317bc <video_mapping_read_test+0x22>
   3180f:	90                   	nop
   31810:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   31813:	c9                   	leave  
   31814:	c3                   	ret    

00031815 <video_mapping_clear>:
   31815:	55                   	push   %ebp
   31816:	89 e5                	mov    %esp,%ebp
   31818:	53                   	push   %ebx
   31819:	83 ec 04             	sub    $0x4,%esp
   3181c:	e8 36 ec ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   31821:	05 df a7 00 00       	add    $0xa7df,%eax
   31826:	83 ec 04             	sub    $0x4,%esp
   31829:	68 00 fa 00 00       	push   $0xfa00
   3182e:	6a 00                	push   $0x0
   31830:	68 00 00 0a 00       	push   $0xa0000
   31835:	89 c3                	mov    %eax,%ebx
   31837:	e8 90 04 00 00       	call   31ccc <memset>
   3183c:	83 c4 10             	add    $0x10,%esp
   3183f:	90                   	nop
   31840:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   31843:	c9                   	leave  
   31844:	c3                   	ret    

00031845 <fs_open>:
   31845:	55                   	push   %ebp
   31846:	89 e5                	mov    %esp,%ebp
   31848:	53                   	push   %ebx
   31849:	83 ec 04             	sub    $0x4,%esp
   3184c:	e8 06 ec ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   31851:	05 af a7 00 00       	add    $0xa7af,%eax
   31856:	8d 90 78 cd ff ff    	lea    -0x3288(%eax),%edx
   3185c:	52                   	push   %edx
   3185d:	6a 2c                	push   $0x2c
   3185f:	8d 90 af cb ff ff    	lea    -0x3451(%eax),%edx
   31865:	52                   	push   %edx
   31866:	8d 90 bc cb ff ff    	lea    -0x3444(%eax),%edx
   3186c:	52                   	push   %edx
   3186d:	89 c3                	mov    %eax,%ebx
   3186f:	e8 24 f7 ff ff       	call   30f98 <printk>
   31874:	83 c4 10             	add    $0x10,%esp
   31877:	b8 01 00 00 00       	mov    $0x1,%eax
   3187c:	82 b8 ff ff ff ff 8b 	cmpb   $0x8b,-0x1(%eax)
   31883:	5d                   	pop    %ebp
   31884:	fc                   	cld    
   31885:	c9                   	leave  
   31886:	c3                   	ret    

00031887 <fs_read>:
   31887:	55                   	push   %ebp
   31888:	89 e5                	mov    %esp,%ebp
   3188a:	53                   	push   %ebx
   3188b:	83 ec 04             	sub    $0x4,%esp
   3188e:	e8 c8 eb ff ff       	call   3045b <__x86.get_pc_thunk.bx>
   31893:	81 c3 6d a7 00 00    	add    $0xa76d,%ebx
   31899:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
   3189d:	7f 2f                	jg     318ce <fs_read+0x47>
   3189f:	83 ec 0c             	sub    $0xc,%esp
   318a2:	8d 83 12 cc ff ff    	lea    -0x33ee(%ebx),%eax
   318a8:	50                   	push   %eax
   318a9:	8d 83 80 cd ff ff    	lea    -0x3280(%ebx),%eax
   318af:	50                   	push   %eax
   318b0:	6a 31                	push   $0x31
   318b2:	8d 83 af cb ff ff    	lea    -0x3451(%ebx),%eax
   318b8:	50                   	push   %eax
   318b9:	8d 83 1c cc ff ff    	lea    -0x33e4(%ebx),%eax
   318bf:	50                   	push   %eax
   318c0:	e8 d3 f6 ff ff       	call   30f98 <printk>
   318c5:	83 c4 20             	add    $0x20,%esp
   318c8:	b8 01 00 00 00       	mov    $0x1,%eax
   318cd:	82 8d 83 80 cd ff ff 	orb    $0xff,-0x327f7d(%ebp)
   318d4:	50                   	push   %eax
   318d5:	6a 32                	push   $0x32
   318d7:	8d 83 af cb ff ff    	lea    -0x3451(%ebx),%eax
   318dd:	50                   	push   %eax
   318de:	8d 83 68 cc ff ff    	lea    -0x3398(%ebx),%eax
   318e4:	50                   	push   %eax
   318e5:	e8 ae f6 ff ff       	call   30f98 <printk>
   318ea:	83 c4 10             	add    $0x10,%esp
   318ed:	b8 01 00 00 00       	mov    $0x1,%eax
   318f2:	82 b8 ff ff ff ff 8b 	cmpb   $0x8b,-0x1(%eax)
   318f9:	5d                   	pop    %ebp
   318fa:	fc                   	cld    
   318fb:	c9                   	leave  
   318fc:	c3                   	ret    

000318fd <fs_write>:
   318fd:	55                   	push   %ebp
   318fe:	89 e5                	mov    %esp,%ebp
   31900:	53                   	push   %ebx
   31901:	83 ec 04             	sub    $0x4,%esp
   31904:	e8 4e eb ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   31909:	05 f7 a6 00 00       	add    $0xa6f7,%eax
   3190e:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
   31912:	7e 31                	jle    31945 <fs_write+0x48>
   31914:	83 ec 0c             	sub    $0xc,%esp
   31917:	8d 90 be cc ff ff    	lea    -0x3342(%eax),%edx
   3191d:	52                   	push   %edx
   3191e:	8d 90 88 cd ff ff    	lea    -0x3278(%eax),%edx
   31924:	52                   	push   %edx
   31925:	6a 37                	push   $0x37
   31927:	8d 90 af cb ff ff    	lea    -0x3451(%eax),%edx
   3192d:	52                   	push   %edx
   3192e:	8d 90 1c cc ff ff    	lea    -0x33e4(%eax),%edx
   31934:	52                   	push   %edx
   31935:	89 c3                	mov    %eax,%ebx
   31937:	e8 5c f6 ff ff       	call   30f98 <printk>
   3193c:	83 c4 20             	add    $0x20,%esp
   3193f:	b8 01 00 00 00       	mov    $0x1,%eax
   31944:	82 b8 04 00 00 00 8b 	cmpb   $0x8b,0x4(%eax)
   3194b:	5d                   	pop    %ebp
   3194c:	08 8b 4d 0c 8b 55    	or     %cl,0x558b0c4d(%ebx)
   31952:	10 82 89 45 10 8b    	adc    %al,-0x74efba77(%edx)
   31958:	45                   	inc    %ebp
   31959:	10 8b 5d fc c9 c3    	adc    %cl,-0x3c3603a3(%ebx)

0003195f <fs_lseek>:
   3195f:	55                   	push   %ebp
   31960:	89 e5                	mov    %esp,%ebp
   31962:	53                   	push   %ebx
   31963:	83 ec 04             	sub    $0x4,%esp
   31966:	e8 ec ea ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   3196b:	05 95 a6 00 00       	add    $0xa695,%eax
   31970:	8d 90 94 cd ff ff    	lea    -0x326c(%eax),%edx
   31976:	52                   	push   %edx
   31977:	6a 46                	push   $0x46
   31979:	8d 90 af cb ff ff    	lea    -0x3451(%eax),%edx
   3197f:	52                   	push   %edx
   31980:	8d 90 c8 cc ff ff    	lea    -0x3338(%eax),%edx
   31986:	52                   	push   %edx
   31987:	89 c3                	mov    %eax,%ebx
   31989:	e8 0a f6 ff ff       	call   30f98 <printk>
   3198e:	83 c4 10             	add    $0x10,%esp
   31991:	b8 01 00 00 00       	mov    $0x1,%eax
   31996:	82 b8 ff ff ff ff 8b 	cmpb   $0x8b,-0x1(%eax)
   3199d:	5d                   	pop    %ebp
   3199e:	fc                   	cld    
   3199f:	c9                   	leave  
   319a0:	c3                   	ret    

000319a1 <fs_close>:
   319a1:	55                   	push   %ebp
   319a2:	89 e5                	mov    %esp,%ebp
   319a4:	53                   	push   %ebx
   319a5:	83 ec 04             	sub    $0x4,%esp
   319a8:	e8 aa ea ff ff       	call   30457 <__x86.get_pc_thunk.ax>
   319ad:	05 53 a6 00 00       	add    $0xa653,%eax
   319b2:	8d 90 a0 cd ff ff    	lea    -0x3260(%eax),%edx
   319b8:	52                   	push   %edx
   319b9:	6a 4b                	push   $0x4b
   319bb:	8d 90 af cb ff ff    	lea    -0x3451(%eax),%edx
   319c1:	52                   	push   %edx
   319c2:	8d 90 20 cd ff ff    	lea    -0x32e0(%eax),%edx
   319c8:	52                   	push   %edx
   319c9:	89 c3                	mov    %eax,%ebx
   319cb:	e8 c8 f5 ff ff       	call   30f98 <printk>
   319d0:	83 c4 10             	add    $0x10,%esp
   319d3:	b8 01 00 00 00       	mov    $0x1,%eax
   319d8:	82 b8 ff ff ff ff 8b 	cmpb   $0x8b,-0x1(%eax)
   319df:	5d                   	pop    %ebp
   319e0:	fc                   	cld    
   319e1:	c9                   	leave  
   319e2:	c3                   	ret    
   319e3:	66 90                	xchg   %ax,%ax
   319e5:	66 90                	xchg   %ax,%ax
   319e7:	66 90                	xchg   %ax,%ax
   319e9:	66 90                	xchg   %ax,%ax
   319eb:	66 90                	xchg   %ax,%ax
   319ed:	66 90                	xchg   %ax,%ax
   319ef:	90                   	nop

000319f0 <mm_malloc>:
   319f0:	55                   	push   %ebp
   319f1:	31 c0                	xor    %eax,%eax
   319f3:	89 e5                	mov    %esp,%ebp
   319f5:	57                   	push   %edi
   319f6:	56                   	push   %esi
   319f7:	53                   	push   %ebx
   319f8:	83 ec 3c             	sub    $0x3c,%esp
   319fb:	8b 5d 0c             	mov    0xc(%ebp),%ebx
   319fe:	85 db                	test   %ebx,%ebx
   31a00:	0f 8e 36 02 00 00    	jle    31c3c <mm_malloc+0x24c>
   31a06:	e8 2c fc ff ff       	call   31637 <get_updir>
   31a0b:	89 c6                	mov    %eax,%esi
   31a0d:	e8 3a fc ff ff       	call   3164c <get_ucr3>
   31a12:	8b 55 08             	mov    0x8(%ebp),%edx
   31a15:	8d 5c 1a ff          	lea    -0x1(%edx,%ebx,1),%ebx
   31a19:	89 5d e0             	mov    %ebx,-0x20(%ebp)
   31a1c:	89 45 dc             	mov    %eax,-0x24(%ebp)
   31a1f:	b8 00 10 00 00       	mov    $0x1000,%eax
   31a24:	29 d0                	sub    %edx,%eax
   31a26:	89 da                	mov    %ebx,%edx
   31a28:	81 e2 00 f0 ff ff    	and    $0xfffff000,%edx
   31a2e:	01 d0                	add    %edx,%eax
   31a30:	85 c0                	test   %eax,%eax
   31a32:	0f 8e c0 00 00 00    	jle    31af8 <mm_malloc+0x108>
   31a38:	8b 55 08             	mov    0x8(%ebp),%edx
   31a3b:	83 e8 01             	sub    $0x1,%eax
   31a3e:	89 f7                	mov    %esi,%edi
   31a40:	25 00 f0 ff ff       	and    $0xfffff000,%eax
   31a45:	8d 84 02 00 10 00 00 	lea    0x1000(%edx,%eax,1),%eax
   31a4c:	89 d3                	mov    %edx,%ebx
   31a4e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   31a51:	eb 51                	jmp    31aa4 <mm_malloc+0xb4>
   31a53:	90                   	nop
   31a54:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   31a58:	8b 31                	mov    (%ecx),%esi
   31a5a:	81 e6 00 f0 ff ff    	and    $0xfffff000,%esi
   31a60:	81 ee 00 00 00 40    	sub    $0x40000000,%esi
   31a66:	89 d8                	mov    %ebx,%eax
   31a68:	c1 e8 0a             	shr    $0xa,%eax
   31a6b:	25 fc 0f 00 00       	and    $0xffc,%eax
   31a70:	01 c6                	add    %eax,%esi
   31a72:	f6 06 01             	testb  $0x1,(%esi)
   31a75:	75 22                	jne    31a99 <mm_malloc+0xa9>
   31a77:	a1 20 c0 03 00       	mov    0x3c020,%eax
   31a7c:	3d ff 7f 00 00       	cmp    $0x7fff,%eax
   31a81:	0f 8f c1 01 00 00    	jg     31c48 <mm_malloc+0x258>
   31a87:	89 c1                	mov    %eax,%ecx
   31a89:	83 c0 01             	add    $0x1,%eax
   31a8c:	c1 e1 0c             	shl    $0xc,%ecx
   31a8f:	83 c9 07             	or     $0x7,%ecx
   31a92:	89 0e                	mov    %ecx,(%esi)
   31a94:	a3 20 c0 03 00       	mov    %eax,0x3c020
   31a99:	81 c3 00 10 00 00    	add    $0x1000,%ebx
   31a9f:	3b 5d e4             	cmp    -0x1c(%ebp),%ebx
   31aa2:	74 54                	je     31af8 <mm_malloc+0x108>
   31aa4:	89 d8                	mov    %ebx,%eax
   31aa6:	c1 e8 16             	shr    $0x16,%eax
   31aa9:	8d 0c 87             	lea    (%edi,%eax,4),%ecx
   31aac:	f6 01 01             	testb  $0x1,(%ecx)
   31aaf:	75 a7                	jne    31a58 <mm_malloc+0x68>
   31ab1:	a1 00 e0 04 00       	mov    0x4e000,%eax
   31ab6:	89 c6                	mov    %eax,%esi
   31ab8:	83 c0 01             	add    $0x1,%eax
   31abb:	c1 e6 0c             	shl    $0xc,%esi
   31abe:	81 c6 00 f0 04 00    	add    $0x4f000,%esi
   31ac4:	a3 00 e0 04 00       	mov    %eax,0x4e000
   31ac9:	8d 86 00 00 00 40    	lea    0x40000000(%esi),%eax
   31acf:	25 00 f0 ff ff       	and    $0xfffff000,%eax
   31ad4:	83 c8 07             	or     $0x7,%eax
   31ad7:	89 01                	mov    %eax,(%ecx)
   31ad9:	c7 44 24 08 00 10 00 	movl   $0x1000,0x8(%esp)
   31ae0:	00 
   31ae1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   31ae8:	00 
   31ae9:	89 34 24             	mov    %esi,(%esp)
   31aec:	e8 db 01 00 00       	call   31ccc <memset>
   31af1:	e9 70 ff ff ff       	jmp    31a66 <mm_malloc+0x76>
   31af6:	66 90                	xchg   %ax,%ax
   31af8:	8b 5d dc             	mov    -0x24(%ebp),%ebx
   31afb:	8b 45 e0             	mov    -0x20(%ebp),%eax
   31afe:	81 eb 00 00 00 40    	sub    $0x40000000,%ebx
   31b04:	81 e3 00 f0 ff ff    	and    $0xfffff000,%ebx
   31b0a:	c1 e8 16             	shr    $0x16,%eax
   31b0d:	8b 34 83             	mov    (%ebx,%eax,4),%esi
   31b10:	f7 c6 01 00 00 00    	test   $0x1,%esi
   31b16:	75 32                	jne    31b4a <mm_malloc+0x15a>
   31b18:	c7 44 24 10 cd 8d 03 	movl   $0x38dcd,0x10(%esp)
   31b1f:	00 
   31b20:	c7 44 24 0c 36 8e 03 	movl   $0x38e36,0xc(%esp)
   31b27:	00 
   31b28:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
   31b2f:	00 
   31b30:	c7 44 24 04 bc 8d 03 	movl   $0x38dbc,0x4(%esp)
   31b37:	00 
   31b38:	c7 04 24 e0 8d 03 00 	movl   $0x38de0,(%esp)
   31b3f:	e8 54 f4 ff ff       	call   30f98 <printk>
   31b44:	b8 01 00 00 00       	mov    $0x1,%eax
   31b49:	82 8b 55 e0 8d 86 00 	orb    $0x0,-0x79721fab(%ebx)
   31b50:	00 00                	add    %al,(%eax)
   31b52:	c0 25 00 f0 ff ff c1 	shlb   $0xc1,0xfffff000
   31b59:	ea 0c 81 e2 ff 03 00 	ljmp   $0x3,$0xffe2810c
   31b60:	00 f6                	add    %dh,%dh
   31b62:	04 90                	add    $0x90,%al
   31b64:	01 75 32             	add    %esi,0x32(%ebp)
   31b67:	c7 44 24 10 d5 8d 03 	movl   $0x38dd5,0x10(%esp)
   31b6e:	00 
   31b6f:	c7 44 24 0c 36 8e 03 	movl   $0x38e36,0xc(%esp)
   31b76:	00 
   31b77:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
   31b7e:	00 
   31b7f:	c7 44 24 04 bc 8d 03 	movl   $0x38dbc,0x4(%esp)
   31b86:	00 
   31b87:	c7 04 24 e0 8d 03 00 	movl   $0x38de0,(%esp)
   31b8e:	e8 05 f4 ff ff       	call   30f98 <printk>
   31b93:	b8 01 00 00 00       	mov    $0x1,%eax
   31b98:	82 8b 45 08 c1 e8 16 	orb    $0x16,-0x173ef7bb(%ebx)
   31b9f:	8b 1c 83             	mov    (%ebx,%eax,4),%ebx
   31ba2:	f6 c3 01             	test   $0x1,%bl
   31ba5:	75 32                	jne    31bd9 <mm_malloc+0x1e9>
   31ba7:	c7 44 24 10 cd 8d 03 	movl   $0x38dcd,0x10(%esp)
   31bae:	00 
   31baf:	c7 44 24 0c 36 8e 03 	movl   $0x38e36,0xc(%esp)
   31bb6:	00 
   31bb7:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
   31bbe:	00 
   31bbf:	c7 44 24 04 bc 8d 03 	movl   $0x38dbc,0x4(%esp)
   31bc6:	00 
   31bc7:	c7 04 24 e0 8d 03 00 	movl   $0x38de0,(%esp)
   31bce:	e8 c5 f3 ff ff       	call   30f98 <printk>
   31bd3:	b8 01 00 00 00       	mov    $0x1,%eax
   31bd8:	82 8b 55 08 8d 83 00 	orb    $0x0,-0x7c72f7ab(%ebx)
   31bdf:	00 00                	add    %al,(%eax)
   31be1:	c0 25 00 f0 ff ff c1 	shlb   $0xc1,0xfffff000
   31be8:	ea 0c 81 e2 ff 03 00 	ljmp   $0x3,$0xffe2810c
   31bef:	00 8b 1c 90 f6 c3    	add    %cl,-0x3c096fe4(%ebx)
   31bf5:	01 75 32             	add    %esi,0x32(%ebp)
   31bf8:	c7 44 24 10 d5 8d 03 	movl   $0x38dd5,0x10(%esp)
   31bff:	00 
   31c00:	c7 44 24 0c 36 8e 03 	movl   $0x38e36,0xc(%esp)
   31c07:	00 
   31c08:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
   31c0f:	00 
   31c10:	c7 44 24 04 bc 8d 03 	movl   $0x38dbc,0x4(%esp)
   31c17:	00 
   31c18:	c7 04 24 e0 8d 03 00 	movl   $0x38de0,(%esp)
   31c1f:	e8 74 f3 ff ff       	call   30f98 <printk>
   31c24:	b8 01 00 00 00       	mov    $0x1,%eax
   31c29:	82 8b 55 08 89 d8 25 	orb    $0x25,-0x2776f7ab(%ebx)
   31c30:	00 f0                	add    %dh,%al
   31c32:	ff                   	(bad)  
   31c33:	ff 81 e2 ff 0f 00    	incl   0xfffe2(%ecx)
   31c39:	00 09                	add    %cl,(%ecx)
   31c3b:	d0 83 c4 3c 5b 5e    	rolb   0x5e5b3cc4(%ebx)
   31c41:	5f                   	pop    %edi
   31c42:	5d                   	pop    %ebp
   31c43:	c3                   	ret    
   31c44:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   31c48:	c7 44 24 10 a9 8d 03 	movl   $0x38da9,0x10(%esp)
   31c4f:	00 
   31c50:	c7 44 24 0c 2c 8e 03 	movl   $0x38e2c,0xc(%esp)
   31c57:	00 
   31c58:	c7 44 24 08 31 00 00 	movl   $0x31,0x8(%esp)
   31c5f:	00 
   31c60:	c7 44 24 04 bc 8d 03 	movl   $0x38dbc,0x4(%esp)
   31c67:	00 
   31c68:	c7 04 24 e0 8d 03 00 	movl   $0x38de0,(%esp)
   31c6f:	e8 24 f3 ff ff       	call   30f98 <printk>
   31c74:	b8 01 00 00 00       	mov    $0x1,%eax
   31c79:	82 a1 20 c0 03 00 e9 	andb   $0xe9,0x3c020(%ecx)
   31c80:	03 fe                	add    %esi,%edi
   31c82:	ff                   	(bad)  
   31c83:	ff                   	.byte 0xff

00031c84 <memcpy>:
   31c84:	55                   	push   %ebp
   31c85:	89 e5                	mov    %esp,%ebp
   31c87:	56                   	push   %esi
   31c88:	57                   	push   %edi
   31c89:	53                   	push   %ebx
   31c8a:	8b 7d 08             	mov    0x8(%ebp),%edi
   31c8d:	8b 4d 10             	mov    0x10(%ebp),%ecx
   31c90:	8b 75 0c             	mov    0xc(%ebp),%esi
   31c93:	fc                   	cld    
   31c94:	83 f9 08             	cmp    $0x8,%ecx
   31c97:	76 26                	jbe    31cbf <memcpy+0x3b>
   31c99:	89 fa                	mov    %edi,%edx
   31c9b:	89 cb                	mov    %ecx,%ebx
   31c9d:	83 e2 03             	and    $0x3,%edx
   31ca0:	74 10                	je     31cb2 <memcpy+0x2e>
   31ca2:	b9 04 00 00 00       	mov    $0x4,%ecx
   31ca7:	29 d1                	sub    %edx,%ecx
   31ca9:	83 e1 03             	and    $0x3,%ecx
   31cac:	29 cb                	sub    %ecx,%ebx
   31cae:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
   31cb0:	89 d9                	mov    %ebx,%ecx
   31cb2:	c1 e9 02             	shr    $0x2,%ecx
   31cb5:	8d 76 00             	lea    0x0(%esi),%esi
   31cb8:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
   31cba:	89 d9                	mov    %ebx,%ecx
   31cbc:	83 e1 03             	and    $0x3,%ecx
   31cbf:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
   31cc1:	8b 45 08             	mov    0x8(%ebp),%eax
   31cc4:	8d 65 f4             	lea    -0xc(%ebp),%esp
   31cc7:	5b                   	pop    %ebx
   31cc8:	5f                   	pop    %edi
   31cc9:	5e                   	pop    %esi
   31cca:	c9                   	leave  
   31ccb:	c3                   	ret    

00031ccc <memset>:
   31ccc:	55                   	push   %ebp
   31ccd:	89 e5                	mov    %esp,%ebp
   31ccf:	57                   	push   %edi
   31cd0:	8b 7d 08             	mov    0x8(%ebp),%edi
   31cd3:	0f b6 45 0c          	movzbl 0xc(%ebp),%eax
   31cd7:	8b 4d 10             	mov    0x10(%ebp),%ecx
   31cda:	fc                   	cld    
   31cdb:	83 f9 10             	cmp    $0x10,%ecx
   31cde:	76 69                	jbe    31d49 <memset+0x7d>
   31ce0:	f7 c7 07 00 00 00    	test   $0x7,%edi
   31ce6:	74 4c                	je     31d34 <memset+0x68>
   31ce8:	88 07                	mov    %al,(%edi)
   31cea:	47                   	inc    %edi
   31ceb:	49                   	dec    %ecx
   31cec:	f7 c7 07 00 00 00    	test   $0x7,%edi
   31cf2:	74 40                	je     31d34 <memset+0x68>
   31cf4:	88 07                	mov    %al,(%edi)
   31cf6:	47                   	inc    %edi
   31cf7:	49                   	dec    %ecx
   31cf8:	f7 c7 07 00 00 00    	test   $0x7,%edi
   31cfe:	74 34                	je     31d34 <memset+0x68>
   31d00:	88 07                	mov    %al,(%edi)
   31d02:	47                   	inc    %edi
   31d03:	49                   	dec    %ecx
   31d04:	f7 c7 07 00 00 00    	test   $0x7,%edi
   31d0a:	74 28                	je     31d34 <memset+0x68>
   31d0c:	88 07                	mov    %al,(%edi)
   31d0e:	47                   	inc    %edi
   31d0f:	49                   	dec    %ecx
   31d10:	f7 c7 07 00 00 00    	test   $0x7,%edi
   31d16:	74 1c                	je     31d34 <memset+0x68>
   31d18:	88 07                	mov    %al,(%edi)
   31d1a:	47                   	inc    %edi
   31d1b:	49                   	dec    %ecx
   31d1c:	f7 c7 07 00 00 00    	test   $0x7,%edi
   31d22:	74 10                	je     31d34 <memset+0x68>
   31d24:	88 07                	mov    %al,(%edi)
   31d26:	47                   	inc    %edi
   31d27:	49                   	dec    %ecx
   31d28:	f7 c7 07 00 00 00    	test   $0x7,%edi
   31d2e:	74 04                	je     31d34 <memset+0x68>
   31d30:	88 07                	mov    %al,(%edi)
   31d32:	47                   	inc    %edi
   31d33:	49                   	dec    %ecx
   31d34:	88 c4                	mov    %al,%ah
   31d36:	89 c2                	mov    %eax,%edx
   31d38:	c1 e2 10             	shl    $0x10,%edx
   31d3b:	09 d0                	or     %edx,%eax
   31d3d:	89 ca                	mov    %ecx,%edx
   31d3f:	c1 e9 02             	shr    $0x2,%ecx
   31d42:	83 e2 03             	and    $0x3,%edx
   31d45:	f3 ab                	rep stos %eax,%es:(%edi)
   31d47:	89 d1                	mov    %edx,%ecx
   31d49:	f3 aa                	rep stos %al,%es:(%edi)
   31d4b:	8b 45 08             	mov    0x8(%ebp),%eax
   31d4e:	8d 65 fc             	lea    -0x4(%ebp),%esp
   31d51:	5f                   	pop    %edi
   31d52:	c9                   	leave  
   31d53:	c3                   	ret    
   31d54:	66 90                	xchg   %ax,%ax
   31d56:	66 90                	xchg   %ax,%ax
   31d58:	66 90                	xchg   %ax,%ax
   31d5a:	66 90                	xchg   %ax,%ax
   31d5c:	66 90                	xchg   %ax,%ax
   31d5e:	66 90                	xchg   %ax,%ax

00031d60 <_vsnprintf_r>:
   31d60:	55                   	push   %ebp
   31d61:	89 e5                	mov    %esp,%ebp
   31d63:	56                   	push   %esi
   31d64:	53                   	push   %ebx
   31d65:	83 c4 80             	add    $0xffffff80,%esp
   31d68:	8b 5d 10             	mov    0x10(%ebp),%ebx
   31d6b:	8b 75 08             	mov    0x8(%ebp),%esi
   31d6e:	8b 45 0c             	mov    0xc(%ebp),%eax
   31d71:	85 db                	test   %ebx,%ebx
   31d73:	78 63                	js     31dd8 <_vsnprintf_r+0x78>
   31d75:	ba 08 02 00 00       	mov    $0x208,%edx
   31d7a:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
   31d7f:	66 89 55 9c          	mov    %dx,-0x64(%ebp)
   31d83:	8d 53 ff             	lea    -0x1(%ebx),%edx
   31d86:	89 45 90             	mov    %eax,-0x70(%ebp)
   31d89:	89 45 a0             	mov    %eax,-0x60(%ebp)
   31d8c:	31 c0                	xor    %eax,%eax
   31d8e:	85 db                	test   %ebx,%ebx
   31d90:	0f 45 c2             	cmovne %edx,%eax
   31d93:	89 45 98             	mov    %eax,-0x68(%ebp)
   31d96:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   31d99:	8b 45 18             	mov    0x18(%ebp),%eax
   31d9c:	89 34 24             	mov    %esi,(%esp)
   31d9f:	66 89 4d 9e          	mov    %cx,-0x62(%ebp)
   31da3:	89 44 24 0c          	mov    %eax,0xc(%esp)
   31da7:	8b 45 14             	mov    0x14(%ebp),%eax
   31daa:	89 44 24 08          	mov    %eax,0x8(%esp)
   31dae:	8d 45 90             	lea    -0x70(%ebp),%eax
   31db1:	89 44 24 04          	mov    %eax,0x4(%esp)
   31db5:	e8 86 00 00 00       	call   31e40 <_svfprintf_r>
   31dba:	83 f8 ff             	cmp    $0xffffffff,%eax
   31dbd:	7c 11                	jl     31dd0 <_vsnprintf_r+0x70>
   31dbf:	85 db                	test   %ebx,%ebx
   31dc1:	74 06                	je     31dc9 <_vsnprintf_r+0x69>
   31dc3:	8b 55 90             	mov    -0x70(%ebp),%edx
   31dc6:	c6 02 00             	movb   $0x0,(%edx)
   31dc9:	83 ec 80             	sub    $0xffffff80,%esp
   31dcc:	5b                   	pop    %ebx
   31dcd:	5e                   	pop    %esi
   31dce:	5d                   	pop    %ebp
   31dcf:	c3                   	ret    
   31dd0:	c7 06 8b 00 00 00    	movl   $0x8b,(%esi)
   31dd6:	eb e7                	jmp    31dbf <_vsnprintf_r+0x5f>
   31dd8:	c7 06 8b 00 00 00    	movl   $0x8b,(%esi)
   31dde:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
   31de3:	eb e4                	jmp    31dc9 <_vsnprintf_r+0x69>
   31de5:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   31de9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00031df0 <vsnprintf>:
   31df0:	55                   	push   %ebp
   31df1:	89 e5                	mov    %esp,%ebp
   31df3:	83 ec 28             	sub    $0x28,%esp
   31df6:	e8 35 00 00 00       	call   31e30 <__getreent>
   31dfb:	8b 55 14             	mov    0x14(%ebp),%edx
   31dfe:	89 54 24 10          	mov    %edx,0x10(%esp)
   31e02:	8b 55 10             	mov    0x10(%ebp),%edx
   31e05:	89 04 24             	mov    %eax,(%esp)
   31e08:	89 54 24 0c          	mov    %edx,0xc(%esp)
   31e0c:	8b 55 0c             	mov    0xc(%ebp),%edx
   31e0f:	89 54 24 08          	mov    %edx,0x8(%esp)
   31e13:	8b 55 08             	mov    0x8(%ebp),%edx
   31e16:	89 54 24 04          	mov    %edx,0x4(%esp)
   31e1a:	e8 41 ff ff ff       	call   31d60 <_vsnprintf_r>
   31e1f:	c9                   	leave  
   31e20:	c3                   	ret    
   31e21:	66 90                	xchg   %ax,%ax
   31e23:	66 90                	xchg   %ax,%ax
   31e25:	66 90                	xchg   %ax,%ax
   31e27:	66 90                	xchg   %ax,%ax
   31e29:	66 90                	xchg   %ax,%ax
   31e2b:	66 90                	xchg   %ax,%ax
   31e2d:	66 90                	xchg   %ax,%ax
   31e2f:	90                   	nop

00031e30 <__getreent>:
   31e30:	55                   	push   %ebp
   31e31:	a1 40 c0 03 00       	mov    0x3c040,%eax
   31e36:	89 e5                	mov    %esp,%ebp
   31e38:	5d                   	pop    %ebp
   31e39:	c3                   	ret    
   31e3a:	66 90                	xchg   %ax,%ax
   31e3c:	66 90                	xchg   %ax,%ax
   31e3e:	66 90                	xchg   %ax,%ax

00031e40 <_svfprintf_r>:
   31e40:	55                   	push   %ebp
   31e41:	89 e5                	mov    %esp,%ebp
   31e43:	57                   	push   %edi
   31e44:	56                   	push   %esi
   31e45:	53                   	push   %ebx
   31e46:	81 ec 1c 01 00 00    	sub    $0x11c,%esp
   31e4c:	8b 45 08             	mov    0x8(%ebp),%eax
   31e4f:	89 04 24             	mov    %eax,(%esp)
   31e52:	e8 89 33 00 00       	call   351e0 <_localeconv_r>
   31e57:	8b 00                	mov    (%eax),%eax
   31e59:	89 04 24             	mov    %eax,(%esp)
   31e5c:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
   31e62:	e8 d9 4a 00 00       	call   36940 <strlen>
   31e67:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
   31e6d:	8b 45 0c             	mov    0xc(%ebp),%eax
   31e70:	f6 40 0c 80          	testb  $0x80,0xc(%eax)
   31e74:	74 0b                	je     31e81 <_svfprintf_r+0x41>
   31e76:	8b 40 10             	mov    0x10(%eax),%eax
   31e79:	85 c0                	test   %eax,%eax
   31e7b:	0f 84 62 18 00 00    	je     336e3 <_svfprintf_r+0x18a3>
   31e81:	8d 45 a8             	lea    -0x58(%ebp),%eax
   31e84:	8d 55 a7             	lea    -0x59(%ebp),%edx
   31e87:	89 c7                	mov    %eax,%edi
   31e89:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
   31e8f:	d9 ee                	fldz   
   31e91:	29 d0                	sub    %edx,%eax
   31e93:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%ebp)
   31e9a:	00 00 00 
   31e9d:	dd 9d 10 ff ff ff    	fstpl  -0xf0(%ebp)
   31ea3:	c7 85 78 ff ff ff 00 	movl   $0x0,-0x88(%ebp)
   31eaa:	00 00 00 
   31ead:	c7 85 1c ff ff ff 00 	movl   $0x0,-0xe4(%ebp)
   31eb4:	00 00 00 
   31eb7:	c7 85 18 ff ff ff 00 	movl   $0x0,-0xe8(%ebp)
   31ebe:	00 00 00 
   31ec1:	c7 85 04 ff ff ff 00 	movl   $0x0,-0xfc(%ebp)
   31ec8:	00 00 00 
   31ecb:	c7 85 34 ff ff ff 00 	movl   $0x0,-0xcc(%ebp)
   31ed2:	00 00 00 
   31ed5:	89 85 00 ff ff ff    	mov    %eax,-0x100(%ebp)
   31edb:	8b 45 10             	mov    0x10(%ebp),%eax
   31ede:	8b 5d 10             	mov    0x10(%ebp),%ebx
   31ee1:	0f b6 00             	movzbl (%eax),%eax
   31ee4:	3c 25                	cmp    $0x25,%al
   31ee6:	74 4d                	je     31f35 <_svfprintf_r+0xf5>
   31ee8:	84 c0                	test   %al,%al
   31eea:	75 08                	jne    31ef4 <_svfprintf_r+0xb4>
   31eec:	eb 47                	jmp    31f35 <_svfprintf_r+0xf5>
   31eee:	66 90                	xchg   %ax,%ax
   31ef0:	84 c0                	test   %al,%al
   31ef2:	74 0a                	je     31efe <_svfprintf_r+0xbe>
   31ef4:	83 c3 01             	add    $0x1,%ebx
   31ef7:	0f b6 03             	movzbl (%ebx),%eax
   31efa:	3c 25                	cmp    $0x25,%al
   31efc:	75 f2                	jne    31ef0 <_svfprintf_r+0xb0>
   31efe:	89 de                	mov    %ebx,%esi
   31f00:	2b 75 10             	sub    0x10(%ebp),%esi
   31f03:	74 30                	je     31f35 <_svfprintf_r+0xf5>
   31f05:	8b 45 10             	mov    0x10(%ebp),%eax
   31f08:	83 c7 08             	add    $0x8,%edi
   31f0b:	89 77 fc             	mov    %esi,-0x4(%edi)
   31f0e:	01 b5 7c ff ff ff    	add    %esi,-0x84(%ebp)
   31f14:	89 47 f8             	mov    %eax,-0x8(%edi)
   31f17:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   31f1d:	83 c0 01             	add    $0x1,%eax
   31f20:	83 f8 07             	cmp    $0x7,%eax
   31f23:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   31f29:	0f 8f 91 00 00 00    	jg     31fc0 <_svfprintf_r+0x180>
   31f2f:	01 b5 34 ff ff ff    	add    %esi,-0xcc(%ebp)
   31f35:	80 3b 00             	cmpb   $0x0,(%ebx)
   31f38:	0f 84 aa 00 00 00    	je     31fe8 <_svfprintf_r+0x1a8>
   31f3e:	8d 43 01             	lea    0x1(%ebx),%eax
   31f41:	be 20 00 00 00       	mov    $0x20,%esi
   31f46:	c6 85 59 ff ff ff 00 	movb   $0x0,-0xa7(%ebp)
   31f4d:	31 db                	xor    %ebx,%ebx
   31f4f:	c7 85 44 ff ff ff ff 	movl   $0xffffffff,-0xbc(%ebp)
   31f56:	ff ff ff 
   31f59:	c7 85 40 ff ff ff 00 	movl   $0x0,-0xc0(%ebp)
   31f60:	00 00 00 
   31f63:	c7 85 4c ff ff ff 00 	movl   $0x0,-0xb4(%ebp)
   31f6a:	00 00 00 
   31f6d:	8d 48 01             	lea    0x1(%eax),%ecx
   31f70:	0f be 00             	movsbl (%eax),%eax
   31f73:	8d 50 e0             	lea    -0x20(%eax),%edx
   31f76:	83 fa 58             	cmp    $0x58,%edx
   31f79:	0f 87 8f 07 00 00    	ja     3270e <_svfprintf_r+0x8ce>
   31f7f:	ff 24 95 80 8e 03 00 	jmp    *0x38e80(,%edx,4)
   31f86:	66 90                	xchg   %ax,%ax
   31f88:	83 8d 4c ff ff ff 10 	orl    $0x10,-0xb4(%ebp)
   31f8f:	89 c8                	mov    %ecx,%eax
   31f91:	eb da                	jmp    31f6d <_svfprintf_r+0x12d>
   31f93:	8b 45 14             	mov    0x14(%ebp),%eax
   31f96:	8b 55 14             	mov    0x14(%ebp),%edx
   31f99:	8b 00                	mov    (%eax),%eax
   31f9b:	83 c2 04             	add    $0x4,%edx
   31f9e:	89 55 14             	mov    %edx,0x14(%ebp)
   31fa1:	85 c0                	test   %eax,%eax
   31fa3:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
   31fa9:	79 e4                	jns    31f8f <_svfprintf_r+0x14f>
   31fab:	f7 9d 40 ff ff ff    	negl   -0xc0(%ebp)
   31fb1:	83 8d 4c ff ff ff 04 	orl    $0x4,-0xb4(%ebp)
   31fb8:	89 c8                	mov    %ecx,%eax
   31fba:	eb b1                	jmp    31f6d <_svfprintf_r+0x12d>
   31fbc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   31fc0:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   31fc6:	89 44 24 08          	mov    %eax,0x8(%esp)
   31fca:	8b 45 0c             	mov    0xc(%ebp),%eax
   31fcd:	89 44 24 04          	mov    %eax,0x4(%esp)
   31fd1:	8b 45 08             	mov    0x8(%ebp),%eax
   31fd4:	89 04 24             	mov    %eax,(%esp)
   31fd7:	e8 e4 49 00 00       	call   369c0 <__ssprint_r>
   31fdc:	85 c0                	test   %eax,%eax
   31fde:	75 30                	jne    32010 <_svfprintf_r+0x1d0>
   31fe0:	8d 7d a8             	lea    -0x58(%ebp),%edi
   31fe3:	e9 47 ff ff ff       	jmp    31f2f <_svfprintf_r+0xef>
   31fe8:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
   31fee:	85 c0                	test   %eax,%eax
   31ff0:	74 1e                	je     32010 <_svfprintf_r+0x1d0>
   31ff2:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   31ff8:	89 44 24 08          	mov    %eax,0x8(%esp)
   31ffc:	8b 45 0c             	mov    0xc(%ebp),%eax
   31fff:	89 44 24 04          	mov    %eax,0x4(%esp)
   32003:	8b 45 08             	mov    0x8(%ebp),%eax
   32006:	89 04 24             	mov    %eax,(%esp)
   32009:	e8 b2 49 00 00       	call   369c0 <__ssprint_r>
   3200e:	66 90                	xchg   %ax,%ax
   32010:	8b 55 0c             	mov    0xc(%ebp),%edx
   32013:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
   32018:	f6 42 0c 40          	testb  $0x40,0xc(%edx)
   3201c:	0f 44 85 34 ff ff ff 	cmove  -0xcc(%ebp),%eax
   32023:	81 c4 1c 01 00 00    	add    $0x11c,%esp
   32029:	5b                   	pop    %ebx
   3202a:	5e                   	pop    %esi
   3202b:	5f                   	pop    %edi
   3202c:	5d                   	pop    %ebp
   3202d:	c3                   	ret    
   3202e:	bb 2b 00 00 00       	mov    $0x2b,%ebx
   32033:	89 c8                	mov    %ecx,%eax
   32035:	e9 33 ff ff ff       	jmp    31f6d <_svfprintf_r+0x12d>
   3203a:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   32040:	8b 45 14             	mov    0x14(%ebp),%eax
   32043:	89 4d 10             	mov    %ecx,0x10(%ebp)
   32046:	c6 85 59 ff ff ff 00 	movb   $0x0,-0xa7(%ebp)
   3204d:	8d 70 04             	lea    0x4(%eax),%esi
   32050:	8b 00                	mov    (%eax),%eax
   32052:	85 c0                	test   %eax,%eax
   32054:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   3205a:	0f 84 7f 18 00 00    	je     338df <_svfprintf_r+0x1a9f>
   32060:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
   32066:	85 c0                	test   %eax,%eax
   32068:	0f 88 b6 17 00 00    	js     33824 <_svfprintf_r+0x19e4>
   3206e:	89 44 24 08          	mov    %eax,0x8(%esp)
   32072:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
   32078:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   3207f:	00 
   32080:	89 04 24             	mov    %eax,(%esp)
   32083:	e8 f8 38 00 00       	call   35980 <memchr>
   32088:	85 c0                	test   %eax,%eax
   3208a:	0f 84 a0 19 00 00    	je     33a30 <_svfprintf_r+0x1bf0>
   32090:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
   32096:	2b 85 28 ff ff ff    	sub    -0xd8(%ebp),%eax
   3209c:	39 d0                	cmp    %edx,%eax
   3209e:	0f 4f c2             	cmovg  %edx,%eax
   320a1:	89 c2                	mov    %eax,%edx
   320a3:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   320aa:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   320b0:	31 c0                	xor    %eax,%eax
   320b2:	85 d2                	test   %edx,%edx
   320b4:	0f 49 c2             	cmovns %edx,%eax
   320b7:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
   320bd:	89 75 14             	mov    %esi,0x14(%ebp)
   320c0:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   320c7:	00 00 00 
   320ca:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   320d1:	00 00 00 
   320d4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   320d8:	84 db                	test   %bl,%bl
   320da:	74 07                	je     320e3 <_svfprintf_r+0x2a3>
   320dc:	83 85 48 ff ff ff 01 	addl   $0x1,-0xb8(%ebp)
   320e3:	8b 8d 48 ff ff ff    	mov    -0xb8(%ebp),%ecx
   320e9:	8b b5 4c ff ff ff    	mov    -0xb4(%ebp),%esi
   320ef:	89 c8                	mov    %ecx,%eax
   320f1:	89 f2                	mov    %esi,%edx
   320f3:	83 c0 02             	add    $0x2,%eax
   320f6:	83 e2 02             	and    $0x2,%edx
   320f9:	89 95 30 ff ff ff    	mov    %edx,-0xd0(%ebp)
   320ff:	89 f2                	mov    %esi,%edx
   32101:	0f 44 c1             	cmove  %ecx,%eax
   32104:	81 e2 84 00 00 00    	and    $0x84,%edx
   3210a:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
   32110:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
   32116:	0f 85 1c 06 00 00    	jne    32738 <_svfprintf_r+0x8f8>
   3211c:	8b b5 40 ff ff ff    	mov    -0xc0(%ebp),%esi
   32122:	2b b5 48 ff ff ff    	sub    -0xb8(%ebp),%esi
   32128:	85 f6                	test   %esi,%esi
   3212a:	0f 8e 08 06 00 00    	jle    32738 <_svfprintf_r+0x8f8>
   32130:	83 fe 10             	cmp    $0x10,%esi
   32133:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32139:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3213f:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   32145:	7f 11                	jg     32158 <_svfprintf_r+0x318>
   32147:	eb 6b                	jmp    321b4 <_svfprintf_r+0x374>
   32149:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   32150:	83 ee 10             	sub    $0x10,%esi
   32153:	83 fe 10             	cmp    $0x10,%esi
   32156:	7e 5c                	jle    321b4 <_svfprintf_r+0x374>
   32158:	83 c0 01             	add    $0x1,%eax
   3215b:	83 c1 10             	add    $0x10,%ecx
   3215e:	c7 07 f4 8f 03 00    	movl   $0x38ff4,(%edi)
   32164:	83 c7 08             	add    $0x8,%edi
   32167:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   3216e:	83 f8 07             	cmp    $0x7,%eax
   32171:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32177:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3217d:	7e d1                	jle    32150 <_svfprintf_r+0x310>
   3217f:	8b 45 0c             	mov    0xc(%ebp),%eax
   32182:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   32186:	89 44 24 04          	mov    %eax,0x4(%esp)
   3218a:	8b 45 08             	mov    0x8(%ebp),%eax
   3218d:	89 04 24             	mov    %eax,(%esp)
   32190:	e8 2b 48 00 00       	call   369c0 <__ssprint_r>
   32195:	85 c0                	test   %eax,%eax
   32197:	0f 85 73 fe ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   3219d:	83 ee 10             	sub    $0x10,%esi
   321a0:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   321a6:	83 fe 10             	cmp    $0x10,%esi
   321a9:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   321af:	8d 7d a8             	lea    -0x58(%ebp),%edi
   321b2:	7f a4                	jg     32158 <_svfprintf_r+0x318>
   321b4:	83 c0 01             	add    $0x1,%eax
   321b7:	01 f1                	add    %esi,%ecx
   321b9:	83 f8 07             	cmp    $0x7,%eax
   321bc:	c7 07 f4 8f 03 00    	movl   $0x38ff4,(%edi)
   321c2:	89 77 04             	mov    %esi,0x4(%edi)
   321c5:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   321cb:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   321d1:	0f 8f 16 0e 00 00    	jg     32fed <_svfprintf_r+0x11ad>
   321d7:	83 c7 08             	add    $0x8,%edi
   321da:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   321e1:	e9 58 05 00 00       	jmp    3273e <_svfprintf_r+0x8fe>
   321e6:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   321ed:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   321f3:	8b 45 14             	mov    0x14(%ebp),%eax
   321f6:	89 4d 10             	mov    %ecx,0x10(%ebp)
   321f9:	0f 85 fd 04 00 00    	jne    326fc <_svfprintf_r+0x8bc>
   321ff:	f6 85 4c ff ff ff 40 	testb  $0x40,-0xb4(%ebp)
   32206:	0f 84 f0 04 00 00    	je     326fc <_svfprintf_r+0x8bc>
   3220c:	0f b7 08             	movzwl (%eax),%ecx
   3220f:	83 c0 04             	add    $0x4,%eax
   32212:	89 45 14             	mov    %eax,0x14(%ebp)
   32215:	b8 01 00 00 00       	mov    $0x1,%eax
   3221a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32220:	c6 85 59 ff ff ff 00 	movb   $0x0,-0xa7(%ebp)
   32227:	31 db                	xor    %ebx,%ebx
   32229:	8b b5 4c ff ff ff    	mov    -0xb4(%ebp),%esi
   3222f:	89 f2                	mov    %esi,%edx
   32231:	80 e2 7f             	and    $0x7f,%dl
   32234:	83 bd 44 ff ff ff 00 	cmpl   $0x0,-0xbc(%ebp)
   3223b:	0f 48 d6             	cmovs  %esi,%edx
   3223e:	89 95 4c ff ff ff    	mov    %edx,-0xb4(%ebp)
   32244:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
   3224a:	85 d2                	test   %edx,%edx
   3224c:	75 08                	jne    32256 <_svfprintf_r+0x416>
   3224e:	85 c9                	test   %ecx,%ecx
   32250:	0f 84 ea 08 00 00    	je     32b40 <_svfprintf_r+0xd00>
   32256:	3c 01                	cmp    $0x1,%al
   32258:	0f 84 6a 0d 00 00    	je     32fc8 <_svfprintf_r+0x1188>
   3225e:	3c 02                	cmp    $0x2,%al
   32260:	8d 45 a8             	lea    -0x58(%ebp),%eax
   32263:	0f 85 bf 0b 00 00    	jne    32e28 <_svfprintf_r+0xfe8>
   32269:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
   3226f:	90                   	nop
   32270:	89 ca                	mov    %ecx,%edx
   32272:	83 e8 01             	sub    $0x1,%eax
   32275:	83 e2 0f             	and    $0xf,%edx
   32278:	0f b6 14 16          	movzbl (%esi,%edx,1),%edx
   3227c:	c1 e9 04             	shr    $0x4,%ecx
   3227f:	85 c9                	test   %ecx,%ecx
   32281:	88 10                	mov    %dl,(%eax)
   32283:	75 eb                	jne    32270 <_svfprintf_r+0x430>
   32285:	8d 55 a8             	lea    -0x58(%ebp),%edx
   32288:	29 c2                	sub    %eax,%edx
   3228a:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   32290:	89 95 38 ff ff ff    	mov    %edx,-0xc8(%ebp)
   32296:	66 90                	xchg   %ax,%ax
   32298:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
   3229e:	8b 95 38 ff ff ff    	mov    -0xc8(%ebp),%edx
   322a4:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   322ab:	00 00 00 
   322ae:	39 c2                	cmp    %eax,%edx
   322b0:	0f 4d c2             	cmovge %edx,%eax
   322b3:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
   322b9:	e9 1a fe ff ff       	jmp    320d8 <_svfprintf_r+0x298>
   322be:	84 db                	test   %bl,%bl
   322c0:	89 c8                	mov    %ecx,%eax
   322c2:	0f 44 de             	cmove  %esi,%ebx
   322c5:	e9 a3 fc ff ff       	jmp    31f6d <_svfprintf_r+0x12d>
   322ca:	83 8d 4c ff ff ff 01 	orl    $0x1,-0xb4(%ebp)
   322d1:	89 c8                	mov    %ecx,%eax
   322d3:	e9 95 fc ff ff       	jmp    31f6d <_svfprintf_r+0x12d>
   322d8:	81 8d 4c ff ff ff 80 	orl    $0x80,-0xb4(%ebp)
   322df:	00 00 00 
   322e2:	89 c8                	mov    %ecx,%eax
   322e4:	e9 84 fc ff ff       	jmp    31f6d <_svfprintf_r+0x12d>
   322e9:	89 bd 48 ff ff ff    	mov    %edi,-0xb8(%ebp)
   322ef:	8d 50 d0             	lea    -0x30(%eax),%edx
   322f2:	31 ff                	xor    %edi,%edi
   322f4:	c7 85 40 ff ff ff 00 	movl   $0x0,-0xc0(%ebp)
   322fb:	00 00 00 
   322fe:	66 90                	xchg   %ax,%ax
   32300:	8d 04 bf             	lea    (%edi,%edi,4),%eax
   32303:	83 c1 01             	add    $0x1,%ecx
   32306:	8d 3c 42             	lea    (%edx,%eax,2),%edi
   32309:	0f be 41 ff          	movsbl -0x1(%ecx),%eax
   3230d:	8d 50 d0             	lea    -0x30(%eax),%edx
   32310:	83 fa 09             	cmp    $0x9,%edx
   32313:	76 eb                	jbe    32300 <_svfprintf_r+0x4c0>
   32315:	89 bd 40 ff ff ff    	mov    %edi,-0xc0(%ebp)
   3231b:	8b bd 48 ff ff ff    	mov    -0xb8(%ebp),%edi
   32321:	e9 4d fc ff ff       	jmp    31f73 <_svfprintf_r+0x133>
   32326:	83 8d 4c ff ff ff 10 	orl    $0x10,-0xb4(%ebp)
   3232d:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   32334:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   3233a:	8b 45 14             	mov    0x14(%ebp),%eax
   3233d:	89 4d 10             	mov    %ecx,0x10(%ebp)
   32340:	88 9d 59 ff ff ff    	mov    %bl,-0xa7(%ebp)
   32346:	0f 85 61 02 00 00    	jne    325ad <_svfprintf_r+0x76d>
   3234c:	f6 85 4c ff ff ff 40 	testb  $0x40,-0xb4(%ebp)
   32353:	0f 84 54 02 00 00    	je     325ad <_svfprintf_r+0x76d>
   32359:	0f bf 08             	movswl (%eax),%ecx
   3235c:	83 c0 04             	add    $0x4,%eax
   3235f:	89 45 14             	mov    %eax,0x14(%ebp)
   32362:	85 c9                	test   %ecx,%ecx
   32364:	0f 88 53 02 00 00    	js     325bd <_svfprintf_r+0x77d>
   3236a:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   32371:	b8 01 00 00 00       	mov    $0x1,%eax
   32376:	e9 ae fe ff ff       	jmp    32229 <_svfprintf_r+0x3e9>
   3237b:	f6 85 4c ff ff ff 08 	testb  $0x8,-0xb4(%ebp)
   32382:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   32388:	8b 45 14             	mov    0x14(%ebp),%eax
   3238b:	89 4d 10             	mov    %ecx,0x10(%ebp)
   3238e:	88 9d 59 ff ff ff    	mov    %bl,-0xa7(%ebp)
   32394:	0f 84 15 10 00 00    	je     333af <_svfprintf_r+0x156f>
   3239a:	db 28                	fldt   (%eax)
   3239c:	83 c0 0c             	add    $0xc,%eax
   3239f:	89 45 14             	mov    %eax,0x14(%ebp)
   323a2:	dd 9d 10 ff ff ff    	fstpl  -0xf0(%ebp)
   323a8:	dd 85 10 ff ff ff    	fldl   -0xf0(%ebp)
   323ae:	dd 1c 24             	fstpl  (%esp)
   323b1:	e8 aa 44 00 00       	call   36860 <__fpclassifyd>
   323b6:	83 f8 01             	cmp    $0x1,%eax
   323b9:	0f 85 82 0f 00 00    	jne    33341 <_svfprintf_r+0x1501>
   323bf:	d9 ee                	fldz   
   323c1:	dd 85 10 ff ff ff    	fldl   -0xf0(%ebp)
   323c7:	d9 c9                	fxch   %st(1)
   323c9:	df e9                	fucomip %st(1),%st
   323cb:	dd d8                	fstp   %st(0)
   323cd:	0f 87 59 15 00 00    	ja     3392c <_svfprintf_r+0x1aec>
   323d3:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   323da:	83 bd 24 ff ff ff 47 	cmpl   $0x47,-0xdc(%ebp)
   323e1:	ba 42 8e 03 00       	mov    $0x38e42,%edx
   323e6:	b8 46 8e 03 00       	mov    $0x38e46,%eax
   323eb:	c7 85 48 ff ff ff 03 	movl   $0x3,-0xb8(%ebp)
   323f2:	00 00 00 
   323f5:	0f 4e c2             	cmovle %edx,%eax
   323f8:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   323fe:	81 a5 4c ff ff ff 7f 	andl   $0xffffff7f,-0xb4(%ebp)
   32405:	ff ff ff 
   32408:	c7 85 38 ff ff ff 03 	movl   $0x3,-0xc8(%ebp)
   3240f:	00 00 00 
   32412:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   32419:	00 00 00 
   3241c:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   32423:	00 00 00 
   32426:	e9 ad fc ff ff       	jmp    320d8 <_svfprintf_r+0x298>
   3242b:	8d 41 01             	lea    0x1(%ecx),%eax
   3242e:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
   32434:	0f be 01             	movsbl (%ecx),%eax
   32437:	83 f8 2a             	cmp    $0x2a,%eax
   3243a:	0f 84 84 18 00 00    	je     33cc4 <_svfprintf_r+0x1e84>
   32440:	8d 50 d0             	lea    -0x30(%eax),%edx
   32443:	31 c9                	xor    %ecx,%ecx
   32445:	83 fa 09             	cmp    $0x9,%edx
   32448:	0f 87 a8 16 00 00    	ja     33af6 <_svfprintf_r+0x1cb6>
   3244e:	89 bd 44 ff ff ff    	mov    %edi,-0xbc(%ebp)
   32454:	8b bd 48 ff ff ff    	mov    -0xb8(%ebp),%edi
   3245a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32460:	8d 04 89             	lea    (%ecx,%ecx,4),%eax
   32463:	83 c7 01             	add    $0x1,%edi
   32466:	8d 0c 42             	lea    (%edx,%eax,2),%ecx
   32469:	0f be 47 ff          	movsbl -0x1(%edi),%eax
   3246d:	8d 50 d0             	lea    -0x30(%eax),%edx
   32470:	83 fa 09             	cmp    $0x9,%edx
   32473:	76 eb                	jbe    32460 <_svfprintf_r+0x620>
   32475:	85 c9                	test   %ecx,%ecx
   32477:	89 ca                	mov    %ecx,%edx
   32479:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
   3247e:	0f 48 d1             	cmovs  %ecx,%edx
   32481:	89 bd 48 ff ff ff    	mov    %edi,-0xb8(%ebp)
   32487:	8b bd 44 ff ff ff    	mov    -0xbc(%ebp),%edi
   3248d:	8b 8d 48 ff ff ff    	mov    -0xb8(%ebp),%ecx
   32493:	89 95 44 ff ff ff    	mov    %edx,-0xbc(%ebp)
   32499:	e9 d5 fa ff ff       	jmp    31f73 <_svfprintf_r+0x133>
   3249e:	8b 45 14             	mov    0x14(%ebp),%eax
   324a1:	89 4d 10             	mov    %ecx,0x10(%ebp)
   324a4:	83 8d 4c ff ff ff 02 	orl    $0x2,-0xb4(%ebp)
   324ab:	8b 08                	mov    (%eax),%ecx
   324ad:	83 c0 04             	add    $0x4,%eax
   324b0:	89 45 14             	mov    %eax,0x14(%ebp)
   324b3:	b8 02 00 00 00       	mov    $0x2,%eax
   324b8:	c6 85 5a ff ff ff 30 	movb   $0x30,-0xa6(%ebp)
   324bf:	c6 85 5b ff ff ff 78 	movb   $0x78,-0xa5(%ebp)
   324c6:	c7 85 18 ff ff ff 63 	movl   $0x38e63,-0xe8(%ebp)
   324cd:	8e 03 00 
   324d0:	c7 85 24 ff ff ff 78 	movl   $0x78,-0xdc(%ebp)
   324d7:	00 00 00 
   324da:	e9 41 fd ff ff       	jmp    32220 <_svfprintf_r+0x3e0>
   324df:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   324e6:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   324ec:	8b 45 14             	mov    0x14(%ebp),%eax
   324ef:	89 4d 10             	mov    %ecx,0x10(%ebp)
   324f2:	0f 85 87 00 00 00    	jne    3257f <_svfprintf_r+0x73f>
   324f8:	f6 85 4c ff ff ff 40 	testb  $0x40,-0xb4(%ebp)
   324ff:	74 7e                	je     3257f <_svfprintf_r+0x73f>
   32501:	0f b7 08             	movzwl (%eax),%ecx
   32504:	83 c0 04             	add    $0x4,%eax
   32507:	89 45 14             	mov    %eax,0x14(%ebp)
   3250a:	31 c0                	xor    %eax,%eax
   3250c:	e9 0f fd ff ff       	jmp    32220 <_svfprintf_r+0x3e0>
   32511:	83 8d 4c ff ff ff 08 	orl    $0x8,-0xb4(%ebp)
   32518:	89 c8                	mov    %ecx,%eax
   3251a:	e9 4e fa ff ff       	jmp    31f6d <_svfprintf_r+0x12d>
   3251f:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   32526:	89 4d 10             	mov    %ecx,0x10(%ebp)
   32529:	88 9d 59 ff ff ff    	mov    %bl,-0xa7(%ebp)
   3252f:	0f 85 97 0b 00 00    	jne    330cc <_svfprintf_r+0x128c>
   32535:	f6 85 4c ff ff ff 40 	testb  $0x40,-0xb4(%ebp)
   3253c:	0f 84 8a 0b 00 00    	je     330cc <_svfprintf_r+0x128c>
   32542:	8b 45 14             	mov    0x14(%ebp),%eax
   32545:	0f b7 95 34 ff ff ff 	movzwl -0xcc(%ebp),%edx
   3254c:	8b 00                	mov    (%eax),%eax
   3254e:	66 89 10             	mov    %dx,(%eax)
   32551:	8b 45 14             	mov    0x14(%ebp),%eax
   32554:	83 c0 04             	add    $0x4,%eax
   32557:	89 45 14             	mov    %eax,0x14(%ebp)
   3255a:	e9 7c f9 ff ff       	jmp    31edb <_svfprintf_r+0x9b>
   3255f:	83 8d 4c ff ff ff 10 	orl    $0x10,-0xb4(%ebp)
   32566:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   3256d:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   32573:	8b 45 14             	mov    0x14(%ebp),%eax
   32576:	89 4d 10             	mov    %ecx,0x10(%ebp)
   32579:	0f 84 79 ff ff ff    	je     324f8 <_svfprintf_r+0x6b8>
   3257f:	8b 08                	mov    (%eax),%ecx
   32581:	83 c0 04             	add    $0x4,%eax
   32584:	89 45 14             	mov    %eax,0x14(%ebp)
   32587:	31 c0                	xor    %eax,%eax
   32589:	e9 92 fc ff ff       	jmp    32220 <_svfprintf_r+0x3e0>
   3258e:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   32595:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   3259b:	8b 45 14             	mov    0x14(%ebp),%eax
   3259e:	89 4d 10             	mov    %ecx,0x10(%ebp)
   325a1:	88 9d 59 ff ff ff    	mov    %bl,-0xa7(%ebp)
   325a7:	0f 84 9f fd ff ff    	je     3234c <_svfprintf_r+0x50c>
   325ad:	8b 08                	mov    (%eax),%ecx
   325af:	83 c0 04             	add    $0x4,%eax
   325b2:	89 45 14             	mov    %eax,0x14(%ebp)
   325b5:	85 c9                	test   %ecx,%ecx
   325b7:	0f 89 ad fd ff ff    	jns    3236a <_svfprintf_r+0x52a>
   325bd:	f7 d9                	neg    %ecx
   325bf:	bb 2d 00 00 00       	mov    $0x2d,%ebx
   325c4:	c6 85 59 ff ff ff 2d 	movb   $0x2d,-0xa7(%ebp)
   325cb:	b8 01 00 00 00       	mov    $0x1,%eax
   325d0:	e9 54 fc ff ff       	jmp    32229 <_svfprintf_r+0x3e9>
   325d5:	83 8d 4c ff ff ff 40 	orl    $0x40,-0xb4(%ebp)
   325dc:	89 c8                	mov    %ecx,%eax
   325de:	e9 8a f9 ff ff       	jmp    31f6d <_svfprintf_r+0x12d>
   325e3:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   325ea:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   325f0:	8b 45 14             	mov    0x14(%ebp),%eax
   325f3:	89 4d 10             	mov    %ecx,0x10(%ebp)
   325f6:	88 9d 59 ff ff ff    	mov    %bl,-0xa7(%ebp)
   325fc:	c7 85 18 ff ff ff 63 	movl   $0x38e63,-0xe8(%ebp)
   32603:	8e 03 00 
   32606:	75 71                	jne    32679 <_svfprintf_r+0x839>
   32608:	f6 85 4c ff ff ff 40 	testb  $0x40,-0xb4(%ebp)
   3260f:	74 68                	je     32679 <_svfprintf_r+0x839>
   32611:	0f b7 08             	movzwl (%eax),%ecx
   32614:	83 c0 04             	add    $0x4,%eax
   32617:	89 45 14             	mov    %eax,0x14(%ebp)
   3261a:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   32621:	b8 02 00 00 00       	mov    $0x2,%eax
   32626:	0f 84 f4 fb ff ff    	je     32220 <_svfprintf_r+0x3e0>
   3262c:	85 c9                	test   %ecx,%ecx
   3262e:	0f 84 ec fb ff ff    	je     32220 <_svfprintf_r+0x3e0>
   32634:	0f b6 95 24 ff ff ff 	movzbl -0xdc(%ebp),%edx
   3263b:	c6 85 5a ff ff ff 30 	movb   $0x30,-0xa6(%ebp)
   32642:	83 8d 4c ff ff ff 02 	orl    $0x2,-0xb4(%ebp)
   32649:	88 95 5b ff ff ff    	mov    %dl,-0xa5(%ebp)
   3264f:	e9 cc fb ff ff       	jmp    32220 <_svfprintf_r+0x3e0>
   32654:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   3265b:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   32661:	8b 45 14             	mov    0x14(%ebp),%eax
   32664:	89 4d 10             	mov    %ecx,0x10(%ebp)
   32667:	88 9d 59 ff ff ff    	mov    %bl,-0xa7(%ebp)
   3266d:	c7 85 18 ff ff ff 52 	movl   $0x38e52,-0xe8(%ebp)
   32674:	8e 03 00 
   32677:	74 8f                	je     32608 <_svfprintf_r+0x7c8>
   32679:	8b 08                	mov    (%eax),%ecx
   3267b:	83 c0 04             	add    $0x4,%eax
   3267e:	89 45 14             	mov    %eax,0x14(%ebp)
   32681:	eb 97                	jmp    3261a <_svfprintf_r+0x7da>
   32683:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   32689:	8b 45 14             	mov    0x14(%ebp),%eax
   3268c:	89 4d 10             	mov    %ecx,0x10(%ebp)
   3268f:	c6 85 59 ff ff ff 00 	movb   $0x0,-0xa7(%ebp)
   32696:	8b 00                	mov    (%eax),%eax
   32698:	88 45 80             	mov    %al,-0x80(%ebp)
   3269b:	8b 45 14             	mov    0x14(%ebp),%eax
   3269e:	83 c0 04             	add    $0x4,%eax
   326a1:	89 45 14             	mov    %eax,0x14(%ebp)
   326a4:	8d 45 80             	lea    -0x80(%ebp),%eax
   326a7:	31 db                	xor    %ebx,%ebx
   326a9:	c7 85 48 ff ff ff 01 	movl   $0x1,-0xb8(%ebp)
   326b0:	00 00 00 
   326b3:	c7 85 38 ff ff ff 01 	movl   $0x1,-0xc8(%ebp)
   326ba:	00 00 00 
   326bd:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   326c4:	00 00 00 
   326c7:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   326ce:	00 00 00 
   326d1:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   326d7:	e9 07 fa ff ff       	jmp    320e3 <_svfprintf_r+0x2a3>
   326dc:	83 8d 4c ff ff ff 10 	orl    $0x10,-0xb4(%ebp)
   326e3:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   326ea:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   326f0:	8b 45 14             	mov    0x14(%ebp),%eax
   326f3:	89 4d 10             	mov    %ecx,0x10(%ebp)
   326f6:	0f 84 03 fb ff ff    	je     321ff <_svfprintf_r+0x3bf>
   326fc:	8b 08                	mov    (%eax),%ecx
   326fe:	83 c0 04             	add    $0x4,%eax
   32701:	89 45 14             	mov    %eax,0x14(%ebp)
   32704:	b8 01 00 00 00       	mov    $0x1,%eax
   32709:	e9 12 fb ff ff       	jmp    32220 <_svfprintf_r+0x3e0>
   3270e:	85 c0                	test   %eax,%eax
   32710:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   32716:	89 4d 10             	mov    %ecx,0x10(%ebp)
   32719:	88 9d 59 ff ff ff    	mov    %bl,-0xa7(%ebp)
   3271f:	0f 84 c3 f8 ff ff    	je     31fe8 <_svfprintf_r+0x1a8>
   32725:	88 45 80             	mov    %al,-0x80(%ebp)
   32728:	c6 85 59 ff ff ff 00 	movb   $0x0,-0xa7(%ebp)
   3272f:	e9 70 ff ff ff       	jmp    326a4 <_svfprintf_r+0x864>
   32734:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   32738:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   3273e:	84 db                	test   %bl,%bl
   32740:	74 33                	je     32775 <_svfprintf_r+0x935>
   32742:	8d 85 59 ff ff ff    	lea    -0xa7(%ebp),%eax
   32748:	83 c1 01             	add    $0x1,%ecx
   3274b:	89 07                	mov    %eax,(%edi)
   3274d:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32753:	83 c7 08             	add    $0x8,%edi
   32756:	c7 47 fc 01 00 00 00 	movl   $0x1,-0x4(%edi)
   3275d:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32763:	83 c0 01             	add    $0x1,%eax
   32766:	83 f8 07             	cmp    $0x7,%eax
   32769:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3276f:	0f 8f 7b 06 00 00    	jg     32df0 <_svfprintf_r+0xfb0>
   32775:	8b 9d 30 ff ff ff    	mov    -0xd0(%ebp),%ebx
   3277b:	85 db                	test   %ebx,%ebx
   3277d:	74 33                	je     327b2 <_svfprintf_r+0x972>
   3277f:	8d 85 5a ff ff ff    	lea    -0xa6(%ebp),%eax
   32785:	83 c1 02             	add    $0x2,%ecx
   32788:	89 07                	mov    %eax,(%edi)
   3278a:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32790:	83 c7 08             	add    $0x8,%edi
   32793:	c7 47 fc 02 00 00 00 	movl   $0x2,-0x4(%edi)
   3279a:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   327a0:	83 c0 01             	add    $0x1,%eax
   327a3:	83 f8 07             	cmp    $0x7,%eax
   327a6:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   327ac:	0f 8f 06 06 00 00    	jg     32db8 <_svfprintf_r+0xf78>
   327b2:	81 bd 2c ff ff ff 80 	cmpl   $0x80,-0xd4(%ebp)
   327b9:	00 00 00 
   327bc:	0f 84 c6 03 00 00    	je     32b88 <_svfprintf_r+0xd48>
   327c2:	8b b5 44 ff ff ff    	mov    -0xbc(%ebp),%esi
   327c8:	2b b5 38 ff ff ff    	sub    -0xc8(%ebp),%esi
   327ce:	85 f6                	test   %esi,%esi
   327d0:	0f 8e d2 00 00 00    	jle    328a8 <_svfprintf_r+0xa68>
   327d6:	83 fe 10             	cmp    $0x10,%esi
   327d9:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   327df:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   327e5:	7f 11                	jg     327f8 <_svfprintf_r+0x9b8>
   327e7:	eb 6b                	jmp    32854 <_svfprintf_r+0xa14>
   327e9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   327f0:	83 ee 10             	sub    $0x10,%esi
   327f3:	83 fe 10             	cmp    $0x10,%esi
   327f6:	7e 5c                	jle    32854 <_svfprintf_r+0xa14>
   327f8:	83 c0 01             	add    $0x1,%eax
   327fb:	83 c1 10             	add    $0x10,%ecx
   327fe:	c7 07 e4 8f 03 00    	movl   $0x38fe4,(%edi)
   32804:	83 c7 08             	add    $0x8,%edi
   32807:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   3280e:	83 f8 07             	cmp    $0x7,%eax
   32811:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32817:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3281d:	7e d1                	jle    327f0 <_svfprintf_r+0x9b0>
   3281f:	8b 45 0c             	mov    0xc(%ebp),%eax
   32822:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   32826:	89 44 24 04          	mov    %eax,0x4(%esp)
   3282a:	8b 45 08             	mov    0x8(%ebp),%eax
   3282d:	89 04 24             	mov    %eax,(%esp)
   32830:	e8 8b 41 00 00       	call   369c0 <__ssprint_r>
   32835:	85 c0                	test   %eax,%eax
   32837:	0f 85 d3 f7 ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   3283d:	83 ee 10             	sub    $0x10,%esi
   32840:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32846:	83 fe 10             	cmp    $0x10,%esi
   32849:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3284f:	8d 7d a8             	lea    -0x58(%ebp),%edi
   32852:	7f a4                	jg     327f8 <_svfprintf_r+0x9b8>
   32854:	83 c0 01             	add    $0x1,%eax
   32857:	01 f1                	add    %esi,%ecx
   32859:	c7 07 e4 8f 03 00    	movl   $0x38fe4,(%edi)
   3285f:	83 c7 08             	add    $0x8,%edi
   32862:	89 77 fc             	mov    %esi,-0x4(%edi)
   32865:	83 f8 07             	cmp    $0x7,%eax
   32868:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   3286e:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32874:	7e 32                	jle    328a8 <_svfprintf_r+0xa68>
   32876:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3287c:	89 44 24 08          	mov    %eax,0x8(%esp)
   32880:	8b 45 0c             	mov    0xc(%ebp),%eax
   32883:	89 44 24 04          	mov    %eax,0x4(%esp)
   32887:	8b 45 08             	mov    0x8(%ebp),%eax
   3288a:	89 04 24             	mov    %eax,(%esp)
   3288d:	e8 2e 41 00 00       	call   369c0 <__ssprint_r>
   32892:	85 c0                	test   %eax,%eax
   32894:	0f 85 76 f7 ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   3289a:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   328a0:	8d 7d a8             	lea    -0x58(%ebp),%edi
   328a3:	90                   	nop
   328a4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   328a8:	f7 85 4c ff ff ff 00 	testl  $0x100,-0xb4(%ebp)
   328af:	01 00 00 
   328b2:	0f 85 50 01 00 00    	jne    32a08 <_svfprintf_r+0xbc8>
   328b8:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
   328be:	89 07                	mov    %eax,(%edi)
   328c0:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
   328c6:	01 c1                	add    %eax,%ecx
   328c8:	89 47 04             	mov    %eax,0x4(%edi)
   328cb:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   328d1:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   328d7:	83 c0 01             	add    $0x1,%eax
   328da:	83 f8 07             	cmp    $0x7,%eax
   328dd:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   328e3:	0f 8f 6a 04 00 00    	jg     32d53 <_svfprintf_r+0xf13>
   328e9:	83 c7 08             	add    $0x8,%edi
   328ec:	f6 85 4c ff ff ff 04 	testb  $0x4,-0xb4(%ebp)
   328f3:	0f 84 d7 00 00 00    	je     329d0 <_svfprintf_r+0xb90>
   328f9:	8b b5 40 ff ff ff    	mov    -0xc0(%ebp),%esi
   328ff:	2b b5 48 ff ff ff    	sub    -0xb8(%ebp),%esi
   32905:	85 f6                	test   %esi,%esi
   32907:	0f 8e c3 00 00 00    	jle    329d0 <_svfprintf_r+0xb90>
   3290d:	83 fe 10             	cmp    $0x10,%esi
   32910:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32916:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   3291c:	7f 0a                	jg     32928 <_svfprintf_r+0xae8>
   3291e:	eb 64                	jmp    32984 <_svfprintf_r+0xb44>
   32920:	83 ee 10             	sub    $0x10,%esi
   32923:	83 fe 10             	cmp    $0x10,%esi
   32926:	7e 5c                	jle    32984 <_svfprintf_r+0xb44>
   32928:	83 c0 01             	add    $0x1,%eax
   3292b:	83 c1 10             	add    $0x10,%ecx
   3292e:	c7 07 f4 8f 03 00    	movl   $0x38ff4,(%edi)
   32934:	83 c7 08             	add    $0x8,%edi
   32937:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   3293e:	83 f8 07             	cmp    $0x7,%eax
   32941:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32947:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3294d:	7e d1                	jle    32920 <_svfprintf_r+0xae0>
   3294f:	8b 45 0c             	mov    0xc(%ebp),%eax
   32952:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   32956:	89 44 24 04          	mov    %eax,0x4(%esp)
   3295a:	8b 45 08             	mov    0x8(%ebp),%eax
   3295d:	89 04 24             	mov    %eax,(%esp)
   32960:	e8 5b 40 00 00       	call   369c0 <__ssprint_r>
   32965:	85 c0                	test   %eax,%eax
   32967:	0f 85 a3 f6 ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   3296d:	83 ee 10             	sub    $0x10,%esi
   32970:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32976:	83 fe 10             	cmp    $0x10,%esi
   32979:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3297f:	8d 7d a8             	lea    -0x58(%ebp),%edi
   32982:	7f a4                	jg     32928 <_svfprintf_r+0xae8>
   32984:	83 c0 01             	add    $0x1,%eax
   32987:	01 f1                	add    %esi,%ecx
   32989:	83 f8 07             	cmp    $0x7,%eax
   3298c:	c7 07 f4 8f 03 00    	movl   $0x38ff4,(%edi)
   32992:	89 77 04             	mov    %esi,0x4(%edi)
   32995:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   3299b:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   329a1:	7e 2d                	jle    329d0 <_svfprintf_r+0xb90>
   329a3:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   329a9:	89 44 24 08          	mov    %eax,0x8(%esp)
   329ad:	8b 45 0c             	mov    0xc(%ebp),%eax
   329b0:	89 44 24 04          	mov    %eax,0x4(%esp)
   329b4:	8b 45 08             	mov    0x8(%ebp),%eax
   329b7:	89 04 24             	mov    %eax,(%esp)
   329ba:	e8 01 40 00 00       	call   369c0 <__ssprint_r>
   329bf:	85 c0                	test   %eax,%eax
   329c1:	0f 85 49 f6 ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   329c7:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   329cd:	8d 76 00             	lea    0x0(%esi),%esi
   329d0:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
   329d6:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
   329dc:	39 c2                	cmp    %eax,%edx
   329de:	0f 4d c2             	cmovge %edx,%eax
   329e1:	01 85 34 ff ff ff    	add    %eax,-0xcc(%ebp)
   329e7:	85 c9                	test   %ecx,%ecx
   329e9:	0f 85 99 03 00 00    	jne    32d88 <_svfprintf_r+0xf48>
   329ef:	c7 85 78 ff ff ff 00 	movl   $0x0,-0x88(%ebp)
   329f6:	00 00 00 
   329f9:	8d 7d a8             	lea    -0x58(%ebp),%edi
   329fc:	e9 da f4 ff ff       	jmp    31edb <_svfprintf_r+0x9b>
   32a01:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   32a08:	83 bd 24 ff ff ff 65 	cmpl   $0x65,-0xdc(%ebp)
   32a0f:	0f 8e 5b 02 00 00    	jle    32c70 <_svfprintf_r+0xe30>
   32a15:	d9 ee                	fldz   
   32a17:	dd 85 10 ff ff ff    	fldl   -0xf0(%ebp)
   32a1d:	df e9                	fucomip %st(1),%st
   32a1f:	dd d8                	fstp   %st(0)
   32a21:	0f 8a 59 04 00 00    	jp     32e80 <_svfprintf_r+0x1040>
   32a27:	0f 85 53 04 00 00    	jne    32e80 <_svfprintf_r+0x1040>
   32a2d:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32a33:	83 c1 01             	add    $0x1,%ecx
   32a36:	83 c7 08             	add    $0x8,%edi
   32a39:	c7 47 f8 7b 8e 03 00 	movl   $0x38e7b,-0x8(%edi)
   32a40:	c7 47 fc 01 00 00 00 	movl   $0x1,-0x4(%edi)
   32a47:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32a4d:	83 c0 01             	add    $0x1,%eax
   32a50:	83 f8 07             	cmp    $0x7,%eax
   32a53:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32a59:	0f 8f 63 09 00 00    	jg     333c2 <_svfprintf_r+0x1582>
   32a5f:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
   32a65:	39 85 5c ff ff ff    	cmp    %eax,-0xa4(%ebp)
   32a6b:	7c 0d                	jl     32a7a <_svfprintf_r+0xc3a>
   32a6d:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   32a74:	0f 84 72 fe ff ff    	je     328ec <_svfprintf_r+0xaac>
   32a7a:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
   32a80:	83 c7 08             	add    $0x8,%edi
   32a83:	89 47 f8             	mov    %eax,-0x8(%edi)
   32a86:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
   32a8c:	89 47 fc             	mov    %eax,-0x4(%edi)
   32a8f:	01 c1                	add    %eax,%ecx
   32a91:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32a97:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32a9d:	83 c0 01             	add    $0x1,%eax
   32aa0:	83 f8 07             	cmp    $0x7,%eax
   32aa3:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32aa9:	0f 8f dc 0b 00 00    	jg     3368b <_svfprintf_r+0x184b>
   32aaf:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
   32ab5:	8d 70 ff             	lea    -0x1(%eax),%esi
   32ab8:	85 f6                	test   %esi,%esi
   32aba:	0f 8e 2c fe ff ff    	jle    328ec <_svfprintf_r+0xaac>
   32ac0:	83 fe 10             	cmp    $0x10,%esi
   32ac3:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32ac9:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   32acf:	7f 13                	jg     32ae4 <_svfprintf_r+0xca4>
   32ad1:	e9 e6 05 00 00       	jmp    330bc <_svfprintf_r+0x127c>
   32ad6:	66 90                	xchg   %ax,%ax
   32ad8:	83 ee 10             	sub    $0x10,%esi
   32adb:	83 fe 10             	cmp    $0x10,%esi
   32ade:	0f 8e d8 05 00 00    	jle    330bc <_svfprintf_r+0x127c>
   32ae4:	83 c0 01             	add    $0x1,%eax
   32ae7:	83 c1 10             	add    $0x10,%ecx
   32aea:	c7 07 e4 8f 03 00    	movl   $0x38fe4,(%edi)
   32af0:	83 c7 08             	add    $0x8,%edi
   32af3:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   32afa:	83 f8 07             	cmp    $0x7,%eax
   32afd:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32b03:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32b09:	7e cd                	jle    32ad8 <_svfprintf_r+0xc98>
   32b0b:	8b 45 0c             	mov    0xc(%ebp),%eax
   32b0e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   32b12:	89 44 24 04          	mov    %eax,0x4(%esp)
   32b16:	8b 45 08             	mov    0x8(%ebp),%eax
   32b19:	89 04 24             	mov    %eax,(%esp)
   32b1c:	e8 9f 3e 00 00       	call   369c0 <__ssprint_r>
   32b21:	85 c0                	test   %eax,%eax
   32b23:	0f 85 e7 f4 ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   32b29:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32b2f:	8d 7d a8             	lea    -0x58(%ebp),%edi
   32b32:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32b38:	eb 9e                	jmp    32ad8 <_svfprintf_r+0xc98>
   32b3a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32b40:	84 c0                	test   %al,%al
   32b42:	75 2c                	jne    32b70 <_svfprintf_r+0xd30>
   32b44:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   32b4b:	74 23                	je     32b70 <_svfprintf_r+0xd30>
   32b4d:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
   32b53:	c6 45 a7 30          	movb   $0x30,-0x59(%ebp)
   32b57:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   32b5d:	8d 45 a7             	lea    -0x59(%ebp),%eax
   32b60:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   32b66:	e9 2d f7 ff ff       	jmp    32298 <_svfprintf_r+0x458>
   32b6b:	90                   	nop
   32b6c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   32b70:	8d 45 a8             	lea    -0x58(%ebp),%eax
   32b73:	c7 85 38 ff ff ff 00 	movl   $0x0,-0xc8(%ebp)
   32b7a:	00 00 00 
   32b7d:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   32b83:	e9 10 f7 ff ff       	jmp    32298 <_svfprintf_r+0x458>
   32b88:	8b b5 40 ff ff ff    	mov    -0xc0(%ebp),%esi
   32b8e:	2b b5 48 ff ff ff    	sub    -0xb8(%ebp),%esi
   32b94:	85 f6                	test   %esi,%esi
   32b96:	0f 8e 26 fc ff ff    	jle    327c2 <_svfprintf_r+0x982>
   32b9c:	83 fe 10             	cmp    $0x10,%esi
   32b9f:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32ba5:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   32bab:	7f 0b                	jg     32bb8 <_svfprintf_r+0xd78>
   32bad:	eb 65                	jmp    32c14 <_svfprintf_r+0xdd4>
   32baf:	90                   	nop
   32bb0:	83 ee 10             	sub    $0x10,%esi
   32bb3:	83 fe 10             	cmp    $0x10,%esi
   32bb6:	7e 5c                	jle    32c14 <_svfprintf_r+0xdd4>
   32bb8:	83 c0 01             	add    $0x1,%eax
   32bbb:	83 c1 10             	add    $0x10,%ecx
   32bbe:	c7 07 e4 8f 03 00    	movl   $0x38fe4,(%edi)
   32bc4:	83 c7 08             	add    $0x8,%edi
   32bc7:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   32bce:	83 f8 07             	cmp    $0x7,%eax
   32bd1:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32bd7:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32bdd:	7e d1                	jle    32bb0 <_svfprintf_r+0xd70>
   32bdf:	8b 45 0c             	mov    0xc(%ebp),%eax
   32be2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   32be6:	89 44 24 04          	mov    %eax,0x4(%esp)
   32bea:	8b 45 08             	mov    0x8(%ebp),%eax
   32bed:	89 04 24             	mov    %eax,(%esp)
   32bf0:	e8 cb 3d 00 00       	call   369c0 <__ssprint_r>
   32bf5:	85 c0                	test   %eax,%eax
   32bf7:	0f 85 13 f4 ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   32bfd:	83 ee 10             	sub    $0x10,%esi
   32c00:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32c06:	83 fe 10             	cmp    $0x10,%esi
   32c09:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32c0f:	8d 7d a8             	lea    -0x58(%ebp),%edi
   32c12:	7f a4                	jg     32bb8 <_svfprintf_r+0xd78>
   32c14:	83 c0 01             	add    $0x1,%eax
   32c17:	01 f1                	add    %esi,%ecx
   32c19:	c7 07 e4 8f 03 00    	movl   $0x38fe4,(%edi)
   32c1f:	83 c7 08             	add    $0x8,%edi
   32c22:	89 77 fc             	mov    %esi,-0x4(%edi)
   32c25:	83 f8 07             	cmp    $0x7,%eax
   32c28:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32c2e:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32c34:	0f 8e 88 fb ff ff    	jle    327c2 <_svfprintf_r+0x982>
   32c3a:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   32c40:	89 44 24 08          	mov    %eax,0x8(%esp)
   32c44:	8b 45 0c             	mov    0xc(%ebp),%eax
   32c47:	89 44 24 04          	mov    %eax,0x4(%esp)
   32c4b:	8b 45 08             	mov    0x8(%ebp),%eax
   32c4e:	89 04 24             	mov    %eax,(%esp)
   32c51:	e8 6a 3d 00 00       	call   369c0 <__ssprint_r>
   32c56:	85 c0                	test   %eax,%eax
   32c58:	0f 85 b2 f3 ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   32c5e:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32c64:	8d 7d a8             	lea    -0x58(%ebp),%edi
   32c67:	e9 56 fb ff ff       	jmp    327c2 <_svfprintf_r+0x982>
   32c6c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   32c70:	83 bd 1c ff ff ff 01 	cmpl   $0x1,-0xe4(%ebp)
   32c77:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
   32c7d:	0f 8e df 05 00 00    	jle    33262 <_svfprintf_r+0x1422>
   32c83:	89 07                	mov    %eax,(%edi)
   32c85:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32c8b:	8d 51 01             	lea    0x1(%ecx),%edx
   32c8e:	c7 47 04 01 00 00 00 	movl   $0x1,0x4(%edi)
   32c95:	83 c7 08             	add    $0x8,%edi
   32c98:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   32c9e:	83 c0 01             	add    $0x1,%eax
   32ca1:	83 f8 07             	cmp    $0x7,%eax
   32ca4:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32caa:	0f 8f 59 06 00 00    	jg     33309 <_svfprintf_r+0x14c9>
   32cb0:	8b 9d 0c ff ff ff    	mov    -0xf4(%ebp),%ebx
   32cb6:	83 c0 01             	add    $0x1,%eax
   32cb9:	83 c7 08             	add    $0x8,%edi
   32cbc:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32cc2:	89 5f f8             	mov    %ebx,-0x8(%edi)
   32cc5:	8b 9d 08 ff ff ff    	mov    -0xf8(%ebp),%ebx
   32ccb:	89 5f fc             	mov    %ebx,-0x4(%edi)
   32cce:	01 da                	add    %ebx,%edx
   32cd0:	83 f8 07             	cmp    $0x7,%eax
   32cd3:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   32cd9:	0f 8f f2 05 00 00    	jg     332d1 <_svfprintf_r+0x1491>
   32cdf:	d9 ee                	fldz   
   32ce1:	dd 85 10 ff ff ff    	fldl   -0xf0(%ebp)
   32ce7:	df e9                	fucomip %st(1),%st
   32ce9:	dd d8                	fstp   %st(0)
   32ceb:	7a 06                	jp     32cf3 <_svfprintf_r+0xeb3>
   32ced:	0f 84 33 03 00 00    	je     33026 <_svfprintf_r+0x11e6>
   32cf3:	8b 8d 28 ff ff ff    	mov    -0xd8(%ebp),%ecx
   32cf9:	8b 9d 1c ff ff ff    	mov    -0xe4(%ebp),%ebx
   32cff:	83 c1 01             	add    $0x1,%ecx
   32d02:	89 0f                	mov    %ecx,(%edi)
   32d04:	8d 4b ff             	lea    -0x1(%ebx),%ecx
   32d07:	89 4f 04             	mov    %ecx,0x4(%edi)
   32d0a:	01 ca                	add    %ecx,%edx
   32d0c:	83 c0 01             	add    $0x1,%eax
   32d0f:	83 f8 07             	cmp    $0x7,%eax
   32d12:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   32d18:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32d1e:	0f 8f 75 05 00 00    	jg     33299 <_svfprintf_r+0x1459>
   32d24:	83 c7 08             	add    $0x8,%edi
   32d27:	8b 9d 04 ff ff ff    	mov    -0xfc(%ebp),%ebx
   32d2d:	8d 8d 65 ff ff ff    	lea    -0x9b(%ebp),%ecx
   32d33:	89 0f                	mov    %ecx,(%edi)
   32d35:	89 5f 04             	mov    %ebx,0x4(%edi)
   32d38:	8d 0c 1a             	lea    (%edx,%ebx,1),%ecx
   32d3b:	83 c0 01             	add    $0x1,%eax
   32d3e:	83 f8 07             	cmp    $0x7,%eax
   32d41:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32d47:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32d4d:	0f 8e 96 fb ff ff    	jle    328e9 <_svfprintf_r+0xaa9>
   32d53:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   32d59:	89 44 24 08          	mov    %eax,0x8(%esp)
   32d5d:	8b 45 0c             	mov    0xc(%ebp),%eax
   32d60:	89 44 24 04          	mov    %eax,0x4(%esp)
   32d64:	8b 45 08             	mov    0x8(%ebp),%eax
   32d67:	89 04 24             	mov    %eax,(%esp)
   32d6a:	e8 51 3c 00 00       	call   369c0 <__ssprint_r>
   32d6f:	85 c0                	test   %eax,%eax
   32d71:	0f 85 99 f2 ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   32d77:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32d7d:	8d 7d a8             	lea    -0x58(%ebp),%edi
   32d80:	e9 67 fb ff ff       	jmp    328ec <_svfprintf_r+0xaac>
   32d85:	8d 76 00             	lea    0x0(%esi),%esi
   32d88:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   32d8e:	89 44 24 08          	mov    %eax,0x8(%esp)
   32d92:	8b 45 0c             	mov    0xc(%ebp),%eax
   32d95:	89 44 24 04          	mov    %eax,0x4(%esp)
   32d99:	8b 45 08             	mov    0x8(%ebp),%eax
   32d9c:	89 04 24             	mov    %eax,(%esp)
   32d9f:	e8 1c 3c 00 00       	call   369c0 <__ssprint_r>
   32da4:	85 c0                	test   %eax,%eax
   32da6:	0f 84 43 fc ff ff    	je     329ef <_svfprintf_r+0xbaf>
   32dac:	e9 5f f2 ff ff       	jmp    32010 <_svfprintf_r+0x1d0>
   32db1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   32db8:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   32dbe:	89 44 24 08          	mov    %eax,0x8(%esp)
   32dc2:	8b 45 0c             	mov    0xc(%ebp),%eax
   32dc5:	89 44 24 04          	mov    %eax,0x4(%esp)
   32dc9:	8b 45 08             	mov    0x8(%ebp),%eax
   32dcc:	89 04 24             	mov    %eax,(%esp)
   32dcf:	e8 ec 3b 00 00       	call   369c0 <__ssprint_r>
   32dd4:	85 c0                	test   %eax,%eax
   32dd6:	0f 85 34 f2 ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   32ddc:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32de2:	8d 7d a8             	lea    -0x58(%ebp),%edi
   32de5:	e9 c8 f9 ff ff       	jmp    327b2 <_svfprintf_r+0x972>
   32dea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32df0:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   32df6:	89 44 24 08          	mov    %eax,0x8(%esp)
   32dfa:	8b 45 0c             	mov    0xc(%ebp),%eax
   32dfd:	89 44 24 04          	mov    %eax,0x4(%esp)
   32e01:	8b 45 08             	mov    0x8(%ebp),%eax
   32e04:	89 04 24             	mov    %eax,(%esp)
   32e07:	e8 b4 3b 00 00       	call   369c0 <__ssprint_r>
   32e0c:	85 c0                	test   %eax,%eax
   32e0e:	0f 85 fc f1 ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   32e14:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32e1a:	8d 7d a8             	lea    -0x58(%ebp),%edi
   32e1d:	e9 53 f9 ff ff       	jmp    32775 <_svfprintf_r+0x935>
   32e22:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32e28:	89 c2                	mov    %eax,%edx
   32e2a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32e30:	89 c8                	mov    %ecx,%eax
   32e32:	83 ea 01             	sub    $0x1,%edx
   32e35:	83 e0 07             	and    $0x7,%eax
   32e38:	c1 e9 03             	shr    $0x3,%ecx
   32e3b:	83 c0 30             	add    $0x30,%eax
   32e3e:	85 c9                	test   %ecx,%ecx
   32e40:	88 02                	mov    %al,(%edx)
   32e42:	75 ec                	jne    32e30 <_svfprintf_r+0xff0>
   32e44:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   32e4b:	89 95 28 ff ff ff    	mov    %edx,-0xd8(%ebp)
   32e51:	0f 84 5b 01 00 00    	je     32fb2 <_svfprintf_r+0x1172>
   32e57:	3c 30                	cmp    $0x30,%al
   32e59:	74 0b                	je     32e66 <_svfprintf_r+0x1026>
   32e5b:	83 ad 28 ff ff ff 01 	subl   $0x1,-0xd8(%ebp)
   32e62:	c6 42 ff 30          	movb   $0x30,-0x1(%edx)
   32e66:	8d 45 a8             	lea    -0x58(%ebp),%eax
   32e69:	2b 85 28 ff ff ff    	sub    -0xd8(%ebp),%eax
   32e6f:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   32e75:	e9 1e f4 ff ff       	jmp    32298 <_svfprintf_r+0x458>
   32e7a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32e80:	8b 9d 5c ff ff ff    	mov    -0xa4(%ebp),%ebx
   32e86:	85 db                	test   %ebx,%ebx
   32e88:	0f 8e 66 05 00 00    	jle    333f4 <_svfprintf_r+0x15b4>
   32e8e:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
   32e94:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
   32e9a:	01 d0                	add    %edx,%eax
   32e9c:	89 c3                	mov    %eax,%ebx
   32e9e:	29 d3                	sub    %edx,%ebx
   32ea0:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
   32ea6:	89 d0                	mov    %edx,%eax
   32ea8:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
   32eae:	39 d3                	cmp    %edx,%ebx
   32eb0:	0f 4f da             	cmovg  %edx,%ebx
   32eb3:	85 db                	test   %ebx,%ebx
   32eb5:	7e 28                	jle    32edf <_svfprintf_r+0x109f>
   32eb7:	89 07                	mov    %eax,(%edi)
   32eb9:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32ebf:	01 d9                	add    %ebx,%ecx
   32ec1:	89 5f 04             	mov    %ebx,0x4(%edi)
   32ec4:	83 c7 08             	add    $0x8,%edi
   32ec7:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32ecd:	83 c0 01             	add    $0x1,%eax
   32ed0:	83 f8 07             	cmp    $0x7,%eax
   32ed3:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32ed9:	0f 8f 58 09 00 00    	jg     33837 <_svfprintf_r+0x19f7>
   32edf:	8b b5 20 ff ff ff    	mov    -0xe0(%ebp),%esi
   32ee5:	31 c0                	xor    %eax,%eax
   32ee7:	85 db                	test   %ebx,%ebx
   32ee9:	0f 49 c3             	cmovns %ebx,%eax
   32eec:	29 c6                	sub    %eax,%esi
   32eee:	85 f6                	test   %esi,%esi
   32ef0:	0f 8e 40 02 00 00    	jle    33136 <_svfprintf_r+0x12f6>
   32ef6:	83 fe 10             	cmp    $0x10,%esi
   32ef9:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32eff:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   32f05:	7f 15                	jg     32f1c <_svfprintf_r+0x10dc>
   32f07:	e9 db 01 00 00       	jmp    330e7 <_svfprintf_r+0x12a7>
   32f0c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   32f10:	83 ee 10             	sub    $0x10,%esi
   32f13:	83 fe 10             	cmp    $0x10,%esi
   32f16:	0f 8e cb 01 00 00    	jle    330e7 <_svfprintf_r+0x12a7>
   32f1c:	83 c0 01             	add    $0x1,%eax
   32f1f:	83 c1 10             	add    $0x10,%ecx
   32f22:	c7 07 e4 8f 03 00    	movl   $0x38fe4,(%edi)
   32f28:	83 c7 08             	add    $0x8,%edi
   32f2b:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   32f32:	83 f8 07             	cmp    $0x7,%eax
   32f35:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32f3b:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32f41:	7e cd                	jle    32f10 <_svfprintf_r+0x10d0>
   32f43:	8b 45 0c             	mov    0xc(%ebp),%eax
   32f46:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   32f4a:	89 44 24 04          	mov    %eax,0x4(%esp)
   32f4e:	8b 45 08             	mov    0x8(%ebp),%eax
   32f51:	89 04 24             	mov    %eax,(%esp)
   32f54:	e8 67 3a 00 00       	call   369c0 <__ssprint_r>
   32f59:	85 c0                	test   %eax,%eax
   32f5b:	0f 85 af f0 ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   32f61:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32f67:	8d 7d a8             	lea    -0x58(%ebp),%edi
   32f6a:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32f70:	eb 9e                	jmp    32f10 <_svfprintf_r+0x10d0>
   32f72:	8d 45 a8             	lea    -0x58(%ebp),%eax
   32f75:	be cd cc cc cc       	mov    $0xcccccccd,%esi
   32f7a:	89 bd 48 ff ff ff    	mov    %edi,-0xb8(%ebp)
   32f80:	89 c7                	mov    %eax,%edi
   32f82:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32f88:	89 c8                	mov    %ecx,%eax
   32f8a:	83 ef 01             	sub    $0x1,%edi
   32f8d:	f7 e6                	mul    %esi
   32f8f:	c1 ea 03             	shr    $0x3,%edx
   32f92:	8d 04 92             	lea    (%edx,%edx,4),%eax
   32f95:	01 c0                	add    %eax,%eax
   32f97:	29 c1                	sub    %eax,%ecx
   32f99:	83 c1 30             	add    $0x30,%ecx
   32f9c:	85 d2                	test   %edx,%edx
   32f9e:	88 0f                	mov    %cl,(%edi)
   32fa0:	89 d1                	mov    %edx,%ecx
   32fa2:	75 e4                	jne    32f88 <_svfprintf_r+0x1148>
   32fa4:	89 fa                	mov    %edi,%edx
   32fa6:	89 bd 28 ff ff ff    	mov    %edi,-0xd8(%ebp)
   32fac:	8b bd 48 ff ff ff    	mov    -0xb8(%ebp),%edi
   32fb2:	8d 45 a8             	lea    -0x58(%ebp),%eax
   32fb5:	29 d0                	sub    %edx,%eax
   32fb7:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   32fbd:	e9 d6 f2 ff ff       	jmp    32298 <_svfprintf_r+0x458>
   32fc2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32fc8:	83 f9 09             	cmp    $0x9,%ecx
   32fcb:	77 a5                	ja     32f72 <_svfprintf_r+0x1132>
   32fcd:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
   32fd3:	83 c1 30             	add    $0x30,%ecx
   32fd6:	88 4d a7             	mov    %cl,-0x59(%ebp)
   32fd9:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   32fdf:	8d 45 a7             	lea    -0x59(%ebp),%eax
   32fe2:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   32fe8:	e9 ab f2 ff ff       	jmp    32298 <_svfprintf_r+0x458>
   32fed:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   32ff3:	89 44 24 08          	mov    %eax,0x8(%esp)
   32ff7:	8b 45 0c             	mov    0xc(%ebp),%eax
   32ffa:	89 44 24 04          	mov    %eax,0x4(%esp)
   32ffe:	8b 45 08             	mov    0x8(%ebp),%eax
   33001:	89 04 24             	mov    %eax,(%esp)
   33004:	e8 b7 39 00 00       	call   369c0 <__ssprint_r>
   33009:	85 c0                	test   %eax,%eax
   3300b:	0f 85 ff ef ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   33011:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   33018:	8d 7d a8             	lea    -0x58(%ebp),%edi
   3301b:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   33021:	e9 18 f7 ff ff       	jmp    3273e <_svfprintf_r+0x8fe>
   33026:	8b 9d 1c ff ff ff    	mov    -0xe4(%ebp),%ebx
   3302c:	8d 73 ff             	lea    -0x1(%ebx),%esi
   3302f:	85 f6                	test   %esi,%esi
   33031:	0f 8e f0 fc ff ff    	jle    32d27 <_svfprintf_r+0xee7>
   33037:	83 fe 10             	cmp    $0x10,%esi
   3303a:	7e 70                	jle    330ac <_svfprintf_r+0x126c>
   3303c:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   33042:	eb 0c                	jmp    33050 <_svfprintf_r+0x1210>
   33044:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   33048:	83 ee 10             	sub    $0x10,%esi
   3304b:	83 fe 10             	cmp    $0x10,%esi
   3304e:	7e 5c                	jle    330ac <_svfprintf_r+0x126c>
   33050:	83 c0 01             	add    $0x1,%eax
   33053:	83 c2 10             	add    $0x10,%edx
   33056:	c7 07 e4 8f 03 00    	movl   $0x38fe4,(%edi)
   3305c:	83 c7 08             	add    $0x8,%edi
   3305f:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   33066:	83 f8 07             	cmp    $0x7,%eax
   33069:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   3306f:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   33075:	7e d1                	jle    33048 <_svfprintf_r+0x1208>
   33077:	8b 45 0c             	mov    0xc(%ebp),%eax
   3307a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   3307e:	89 44 24 04          	mov    %eax,0x4(%esp)
   33082:	8b 45 08             	mov    0x8(%ebp),%eax
   33085:	89 04 24             	mov    %eax,(%esp)
   33088:	e8 33 39 00 00       	call   369c0 <__ssprint_r>
   3308d:	85 c0                	test   %eax,%eax
   3308f:	0f 85 7b ef ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   33095:	83 ee 10             	sub    $0x10,%esi
   33098:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   3309e:	83 fe 10             	cmp    $0x10,%esi
   330a1:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   330a7:	8d 7d a8             	lea    -0x58(%ebp),%edi
   330aa:	7f a4                	jg     33050 <_svfprintf_r+0x1210>
   330ac:	c7 07 e4 8f 03 00    	movl   $0x38fe4,(%edi)
   330b2:	01 f2                	add    %esi,%edx
   330b4:	89 77 04             	mov    %esi,0x4(%edi)
   330b7:	e9 50 fc ff ff       	jmp    32d0c <_svfprintf_r+0xecc>
   330bc:	c7 07 e4 8f 03 00    	movl   $0x38fe4,(%edi)
   330c2:	01 f1                	add    %esi,%ecx
   330c4:	89 77 04             	mov    %esi,0x4(%edi)
   330c7:	e9 6f fc ff ff       	jmp    32d3b <_svfprintf_r+0xefb>
   330cc:	8b 45 14             	mov    0x14(%ebp),%eax
   330cf:	8b 95 34 ff ff ff    	mov    -0xcc(%ebp),%edx
   330d5:	8b 00                	mov    (%eax),%eax
   330d7:	89 10                	mov    %edx,(%eax)
   330d9:	8b 45 14             	mov    0x14(%ebp),%eax
   330dc:	83 c0 04             	add    $0x4,%eax
   330df:	89 45 14             	mov    %eax,0x14(%ebp)
   330e2:	e9 f4 ed ff ff       	jmp    31edb <_svfprintf_r+0x9b>
   330e7:	83 c0 01             	add    $0x1,%eax
   330ea:	01 f1                	add    %esi,%ecx
   330ec:	c7 07 e4 8f 03 00    	movl   $0x38fe4,(%edi)
   330f2:	83 c7 08             	add    $0x8,%edi
   330f5:	89 77 fc             	mov    %esi,-0x4(%edi)
   330f8:	83 f8 07             	cmp    $0x7,%eax
   330fb:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   33101:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   33107:	7e 2d                	jle    33136 <_svfprintf_r+0x12f6>
   33109:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3310f:	89 44 24 08          	mov    %eax,0x8(%esp)
   33113:	8b 45 0c             	mov    0xc(%ebp),%eax
   33116:	89 44 24 04          	mov    %eax,0x4(%esp)
   3311a:	8b 45 08             	mov    0x8(%ebp),%eax
   3311d:	89 04 24             	mov    %eax,(%esp)
   33120:	e8 9b 38 00 00       	call   369c0 <__ssprint_r>
   33125:	85 c0                	test   %eax,%eax
   33127:	0f 85 e3 ee ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   3312d:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   33133:	8d 7d a8             	lea    -0x58(%ebp),%edi
   33136:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
   3313c:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
   33142:	03 85 20 ff ff ff    	add    -0xe0(%ebp),%eax
   33148:	3b 95 1c ff ff ff    	cmp    -0xe4(%ebp),%edx
   3314e:	89 c6                	mov    %eax,%esi
   33150:	7c 0d                	jl     3315f <_svfprintf_r+0x131f>
   33152:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   33159:	0f 84 5e 05 00 00    	je     336bd <_svfprintf_r+0x187d>
   3315f:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
   33165:	89 07                	mov    %eax,(%edi)
   33167:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
   3316d:	01 c1                	add    %eax,%ecx
   3316f:	89 47 04             	mov    %eax,0x4(%edi)
   33172:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   33178:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   3317e:	83 c0 01             	add    $0x1,%eax
   33181:	83 f8 07             	cmp    $0x7,%eax
   33184:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3318a:	0f 8f d9 06 00 00    	jg     33869 <_svfprintf_r+0x1a29>
   33190:	83 c7 08             	add    $0x8,%edi
   33193:	89 d0                	mov    %edx,%eax
   33195:	8b 9d 44 ff ff ff    	mov    -0xbc(%ebp),%ebx
   3319b:	89 f2                	mov    %esi,%edx
   3319d:	29 f3                	sub    %esi,%ebx
   3319f:	8b b5 1c ff ff ff    	mov    -0xe4(%ebp),%esi
   331a5:	29 c6                	sub    %eax,%esi
   331a7:	39 de                	cmp    %ebx,%esi
   331a9:	0f 4e de             	cmovle %esi,%ebx
   331ac:	85 db                	test   %ebx,%ebx
   331ae:	7e 29                	jle    331d9 <_svfprintf_r+0x1399>
   331b0:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   331b6:	01 d9                	add    %ebx,%ecx
   331b8:	83 c7 08             	add    $0x8,%edi
   331bb:	89 57 f8             	mov    %edx,-0x8(%edi)
   331be:	89 5f fc             	mov    %ebx,-0x4(%edi)
   331c1:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   331c7:	83 c0 01             	add    $0x1,%eax
   331ca:	83 f8 07             	cmp    $0x7,%eax
   331cd:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   331d3:	0f 8f c8 06 00 00    	jg     338a1 <_svfprintf_r+0x1a61>
   331d9:	31 c0                	xor    %eax,%eax
   331db:	85 db                	test   %ebx,%ebx
   331dd:	0f 49 c3             	cmovns %ebx,%eax
   331e0:	29 c6                	sub    %eax,%esi
   331e2:	85 f6                	test   %esi,%esi
   331e4:	0f 8e 02 f7 ff ff    	jle    328ec <_svfprintf_r+0xaac>
   331ea:	83 fe 10             	cmp    $0x10,%esi
   331ed:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   331f3:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   331f9:	7f 11                	jg     3320c <_svfprintf_r+0x13cc>
   331fb:	e9 bc fe ff ff       	jmp    330bc <_svfprintf_r+0x127c>
   33200:	83 ee 10             	sub    $0x10,%esi
   33203:	83 fe 10             	cmp    $0x10,%esi
   33206:	0f 8e b0 fe ff ff    	jle    330bc <_svfprintf_r+0x127c>
   3320c:	83 c0 01             	add    $0x1,%eax
   3320f:	83 c1 10             	add    $0x10,%ecx
   33212:	c7 07 e4 8f 03 00    	movl   $0x38fe4,(%edi)
   33218:	83 c7 08             	add    $0x8,%edi
   3321b:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   33222:	83 f8 07             	cmp    $0x7,%eax
   33225:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   3322b:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   33231:	7e cd                	jle    33200 <_svfprintf_r+0x13c0>
   33233:	8b 45 0c             	mov    0xc(%ebp),%eax
   33236:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   3323a:	89 44 24 04          	mov    %eax,0x4(%esp)
   3323e:	8b 45 08             	mov    0x8(%ebp),%eax
   33241:	89 04 24             	mov    %eax,(%esp)
   33244:	e8 77 37 00 00       	call   369c0 <__ssprint_r>
   33249:	85 c0                	test   %eax,%eax
   3324b:	0f 85 bf ed ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   33251:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   33257:	8d 7d a8             	lea    -0x58(%ebp),%edi
   3325a:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   33260:	eb 9e                	jmp    33200 <_svfprintf_r+0x13c0>
   33262:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   33269:	0f 85 14 fa ff ff    	jne    32c83 <_svfprintf_r+0xe43>
   3326f:	89 07                	mov    %eax,(%edi)
   33271:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   33277:	8d 51 01             	lea    0x1(%ecx),%edx
   3327a:	c7 47 04 01 00 00 00 	movl   $0x1,0x4(%edi)
   33281:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   33287:	83 c0 01             	add    $0x1,%eax
   3328a:	83 f8 07             	cmp    $0x7,%eax
   3328d:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   33293:	0f 8e 8b fa ff ff    	jle    32d24 <_svfprintf_r+0xee4>
   33299:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3329f:	89 44 24 08          	mov    %eax,0x8(%esp)
   332a3:	8b 45 0c             	mov    0xc(%ebp),%eax
   332a6:	89 44 24 04          	mov    %eax,0x4(%esp)
   332aa:	8b 45 08             	mov    0x8(%ebp),%eax
   332ad:	89 04 24             	mov    %eax,(%esp)
   332b0:	e8 0b 37 00 00       	call   369c0 <__ssprint_r>
   332b5:	85 c0                	test   %eax,%eax
   332b7:	0f 85 53 ed ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   332bd:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   332c3:	8d 7d a8             	lea    -0x58(%ebp),%edi
   332c6:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   332cc:	e9 56 fa ff ff       	jmp    32d27 <_svfprintf_r+0xee7>
   332d1:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   332d7:	89 44 24 08          	mov    %eax,0x8(%esp)
   332db:	8b 45 0c             	mov    0xc(%ebp),%eax
   332de:	89 44 24 04          	mov    %eax,0x4(%esp)
   332e2:	8b 45 08             	mov    0x8(%ebp),%eax
   332e5:	89 04 24             	mov    %eax,(%esp)
   332e8:	e8 d3 36 00 00       	call   369c0 <__ssprint_r>
   332ed:	85 c0                	test   %eax,%eax
   332ef:	0f 85 1b ed ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   332f5:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   332fb:	8d 7d a8             	lea    -0x58(%ebp),%edi
   332fe:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   33304:	e9 d6 f9 ff ff       	jmp    32cdf <_svfprintf_r+0xe9f>
   33309:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3330f:	89 44 24 08          	mov    %eax,0x8(%esp)
   33313:	8b 45 0c             	mov    0xc(%ebp),%eax
   33316:	89 44 24 04          	mov    %eax,0x4(%esp)
   3331a:	8b 45 08             	mov    0x8(%ebp),%eax
   3331d:	89 04 24             	mov    %eax,(%esp)
   33320:	e8 9b 36 00 00       	call   369c0 <__ssprint_r>
   33325:	85 c0                	test   %eax,%eax
   33327:	0f 85 e3 ec ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   3332d:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   33333:	8d 7d a8             	lea    -0x58(%ebp),%edi
   33336:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3333c:	e9 6f f9 ff ff       	jmp    32cb0 <_svfprintf_r+0xe70>
   33341:	dd 85 10 ff ff ff    	fldl   -0xf0(%ebp)
   33347:	dd 1c 24             	fstpl  (%esp)
   3334a:	e8 11 35 00 00       	call   36860 <__fpclassifyd>
   3334f:	85 c0                	test   %eax,%eax
   33351:	0f 85 a3 01 00 00    	jne    334fa <_svfprintf_r+0x16ba>
   33357:	83 bd 24 ff ff ff 47 	cmpl   $0x47,-0xdc(%ebp)
   3335e:	ba 4a 8e 03 00       	mov    $0x38e4a,%edx
   33363:	b8 4e 8e 03 00       	mov    $0x38e4e,%eax
   33368:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   3336f:	c7 85 48 ff ff ff 03 	movl   $0x3,-0xb8(%ebp)
   33376:	00 00 00 
   33379:	0f 4e c2             	cmovle %edx,%eax
   3337c:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   33382:	81 a5 4c ff ff ff 7f 	andl   $0xffffff7f,-0xb4(%ebp)
   33389:	ff ff ff 
   3338c:	c7 85 38 ff ff ff 03 	movl   $0x3,-0xc8(%ebp)
   33393:	00 00 00 
   33396:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   3339d:	00 00 00 
   333a0:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   333a7:	00 00 00 
   333aa:	e9 29 ed ff ff       	jmp    320d8 <_svfprintf_r+0x298>
   333af:	dd 00                	fldl   (%eax)
   333b1:	83 c0 08             	add    $0x8,%eax
   333b4:	dd 9d 10 ff ff ff    	fstpl  -0xf0(%ebp)
   333ba:	89 45 14             	mov    %eax,0x14(%ebp)
   333bd:	e9 e6 ef ff ff       	jmp    323a8 <_svfprintf_r+0x568>
   333c2:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   333c8:	89 44 24 08          	mov    %eax,0x8(%esp)
   333cc:	8b 45 0c             	mov    0xc(%ebp),%eax
   333cf:	89 44 24 04          	mov    %eax,0x4(%esp)
   333d3:	8b 45 08             	mov    0x8(%ebp),%eax
   333d6:	89 04 24             	mov    %eax,(%esp)
   333d9:	e8 e2 35 00 00       	call   369c0 <__ssprint_r>
   333de:	85 c0                	test   %eax,%eax
   333e0:	0f 85 2a ec ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   333e6:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   333ec:	8d 7d a8             	lea    -0x58(%ebp),%edi
   333ef:	e9 6b f6 ff ff       	jmp    32a5f <_svfprintf_r+0xc1f>
   333f4:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   333fa:	83 c1 01             	add    $0x1,%ecx
   333fd:	83 c7 08             	add    $0x8,%edi
   33400:	c7 47 f8 7b 8e 03 00 	movl   $0x38e7b,-0x8(%edi)
   33407:	c7 47 fc 01 00 00 00 	movl   $0x1,-0x4(%edi)
   3340e:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   33414:	83 c0 01             	add    $0x1,%eax
   33417:	83 f8 07             	cmp    $0x7,%eax
   3341a:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   33420:	0f 8f ef 02 00 00    	jg     33715 <_svfprintf_r+0x18d5>
   33426:	85 db                	test   %ebx,%ebx
   33428:	75 17                	jne    33441 <_svfprintf_r+0x1601>
   3342a:	8b 95 1c ff ff ff    	mov    -0xe4(%ebp),%edx
   33430:	85 d2                	test   %edx,%edx
   33432:	75 0d                	jne    33441 <_svfprintf_r+0x1601>
   33434:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   3343b:	0f 84 ab f4 ff ff    	je     328ec <_svfprintf_r+0xaac>
   33441:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
   33447:	83 c7 08             	add    $0x8,%edi
   3344a:	89 47 f8             	mov    %eax,-0x8(%edi)
   3344d:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
   33453:	89 47 fc             	mov    %eax,-0x4(%edi)
   33456:	8d 14 01             	lea    (%ecx,%eax,1),%edx
   33459:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3345f:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   33465:	83 c0 01             	add    $0x1,%eax
   33468:	83 f8 07             	cmp    $0x7,%eax
   3346b:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   33471:	0f 8f 60 03 00 00    	jg     337d7 <_svfprintf_r+0x1997>
   33477:	f7 db                	neg    %ebx
   33479:	85 db                	test   %ebx,%ebx
   3347b:	0f 8e 21 03 00 00    	jle    337a2 <_svfprintf_r+0x1962>
   33481:	83 fb 10             	cmp    $0x10,%ebx
   33484:	0f 8e c3 02 00 00    	jle    3374d <_svfprintf_r+0x190d>
   3348a:	8d b5 74 ff ff ff    	lea    -0x8c(%ebp),%esi
   33490:	eb 12                	jmp    334a4 <_svfprintf_r+0x1664>
   33492:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   33498:	83 eb 10             	sub    $0x10,%ebx
   3349b:	83 fb 10             	cmp    $0x10,%ebx
   3349e:	0f 8e a9 02 00 00    	jle    3374d <_svfprintf_r+0x190d>
   334a4:	83 c0 01             	add    $0x1,%eax
   334a7:	83 c2 10             	add    $0x10,%edx
   334aa:	c7 07 e4 8f 03 00    	movl   $0x38fe4,(%edi)
   334b0:	83 c7 08             	add    $0x8,%edi
   334b3:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   334ba:	83 f8 07             	cmp    $0x7,%eax
   334bd:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   334c3:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   334c9:	7e cd                	jle    33498 <_svfprintf_r+0x1658>
   334cb:	8b 45 0c             	mov    0xc(%ebp),%eax
   334ce:	89 74 24 08          	mov    %esi,0x8(%esp)
   334d2:	89 44 24 04          	mov    %eax,0x4(%esp)
   334d6:	8b 45 08             	mov    0x8(%ebp),%eax
   334d9:	89 04 24             	mov    %eax,(%esp)
   334dc:	e8 df 34 00 00       	call   369c0 <__ssprint_r>
   334e1:	85 c0                	test   %eax,%eax
   334e3:	0f 85 27 eb ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   334e9:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   334ef:	8d 7d a8             	lea    -0x58(%ebp),%edi
   334f2:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   334f8:	eb 9e                	jmp    33498 <_svfprintf_r+0x1658>
   334fa:	8b 9d 24 ff ff ff    	mov    -0xdc(%ebp),%ebx
   33500:	83 e3 df             	and    $0xffffffdf,%ebx
   33503:	83 bd 44 ff ff ff ff 	cmpl   $0xffffffff,-0xbc(%ebp)
   3350a:	0f 84 05 03 00 00    	je     33815 <_svfprintf_r+0x19d5>
   33510:	83 fb 47             	cmp    $0x47,%ebx
   33513:	75 16                	jne    3352b <_svfprintf_r+0x16eb>
   33515:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
   3351b:	b8 01 00 00 00       	mov    $0x1,%eax
   33520:	85 d2                	test   %edx,%edx
   33522:	0f 45 c2             	cmovne %edx,%eax
   33525:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
   3352b:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
   33531:	dd 85 10 ff ff ff    	fldl   -0xf0(%ebp)
   33537:	dd 95 38 ff ff ff    	fstl   -0xc8(%ebp)
   3353d:	80 cc 01             	or     $0x1,%ah
   33540:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
   33546:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
   3354c:	c6 85 48 ff ff ff 00 	movb   $0x0,-0xb8(%ebp)
   33553:	85 c0                	test   %eax,%eax
   33555:	0f 88 ba 05 00 00    	js     33b15 <_svfprintf_r+0x1cd5>
   3355b:	83 fb 46             	cmp    $0x46,%ebx
   3355e:	0f 94 c0             	sete   %al
   33561:	89 c6                	mov    %eax,%esi
   33563:	0f 84 d4 03 00 00    	je     3393d <_svfprintf_r+0x1afd>
   33569:	83 fb 45             	cmp    $0x45,%ebx
   3356c:	0f 85 99 05 00 00    	jne    33b0b <_svfprintf_r+0x1ccb>
   33572:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
   33578:	dd 54 24 04          	fstl   0x4(%esp)
   3357c:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
   33583:	00 
   33584:	dd 9d 38 ff ff ff    	fstpl  -0xc8(%ebp)
   3358a:	8d 70 01             	lea    0x1(%eax),%esi
   3358d:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
   33593:	89 44 24 1c          	mov    %eax,0x1c(%esp)
   33597:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
   3359d:	89 44 24 18          	mov    %eax,0x18(%esp)
   335a1:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
   335a7:	89 44 24 14          	mov    %eax,0x14(%esp)
   335ab:	8b 45 08             	mov    0x8(%ebp),%eax
   335ae:	89 74 24 10          	mov    %esi,0x10(%esp)
   335b2:	89 04 24             	mov    %eax,(%esp)
   335b5:	e8 56 09 00 00       	call   33f10 <_dtoa_r>
   335ba:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   335c0:	8d 0c 30             	lea    (%eax,%esi,1),%ecx
   335c3:	dd 85 38 ff ff ff    	fldl   -0xc8(%ebp)
   335c9:	d9 ee                	fldz   
   335cb:	d9 c9                	fxch   %st(1)
   335cd:	df e9                	fucomip %st(1),%st
   335cf:	dd d8                	fstp   %st(0)
   335d1:	0f 8a fd 00 00 00    	jp     336d4 <_svfprintf_r+0x1894>
   335d7:	89 c8                	mov    %ecx,%eax
   335d9:	0f 85 f5 00 00 00    	jne    336d4 <_svfprintf_r+0x1894>
   335df:	2b 85 28 ff ff ff    	sub    -0xd8(%ebp),%eax
   335e5:	83 fb 47             	cmp    $0x47,%ebx
   335e8:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
   335ee:	0f 84 1e 04 00 00    	je     33a12 <_svfprintf_r+0x1bd2>
   335f4:	83 bd 24 ff ff ff 65 	cmpl   $0x65,-0xdc(%ebp)
   335fb:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
   33601:	0f 8e 65 04 00 00    	jle    33a6c <_svfprintf_r+0x1c2c>
   33607:	83 bd 24 ff ff ff 66 	cmpl   $0x66,-0xdc(%ebp)
   3360e:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
   33614:	0f 84 3c 05 00 00    	je     33b56 <_svfprintf_r+0x1d16>
   3361a:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
   33620:	39 85 1c ff ff ff    	cmp    %eax,-0xe4(%ebp)
   33626:	0f 8f f7 04 00 00    	jg     33b23 <_svfprintf_r+0x1ce3>
   3362c:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
   33632:	83 e0 01             	and    $0x1,%eax
   33635:	0f 85 e2 05 00 00    	jne    33c1d <_svfprintf_r+0x1ddd>
   3363b:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
   33641:	c7 85 24 ff ff ff 67 	movl   $0x67,-0xdc(%ebp)
   33648:	00 00 00 
   3364b:	85 d2                	test   %edx,%edx
   3364d:	0f 49 c2             	cmovns %edx,%eax
   33650:	89 95 38 ff ff ff    	mov    %edx,-0xc8(%ebp)
   33656:	80 bd 48 ff ff ff 00 	cmpb   $0x0,-0xb8(%ebp)
   3365d:	0f 85 68 03 00 00    	jne    339cb <_svfprintf_r+0x1b8b>
   33663:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
   33669:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
   3366f:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   33676:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   3367d:	00 00 00 
   33680:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
   33686:	e9 4d ea ff ff       	jmp    320d8 <_svfprintf_r+0x298>
   3368b:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   33691:	89 44 24 08          	mov    %eax,0x8(%esp)
   33695:	8b 45 0c             	mov    0xc(%ebp),%eax
   33698:	89 44 24 04          	mov    %eax,0x4(%esp)
   3369c:	8b 45 08             	mov    0x8(%ebp),%eax
   3369f:	89 04 24             	mov    %eax,(%esp)
   336a2:	e8 19 33 00 00       	call   369c0 <__ssprint_r>
   336a7:	85 c0                	test   %eax,%eax
   336a9:	0f 85 61 e9 ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   336af:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   336b5:	8d 7d a8             	lea    -0x58(%ebp),%edi
   336b8:	e9 f2 f3 ff ff       	jmp    32aaf <_svfprintf_r+0xc6f>
   336bd:	89 d0                	mov    %edx,%eax
   336bf:	e9 d1 fa ff ff       	jmp    33195 <_svfprintf_r+0x1355>
   336c4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   336c8:	8d 50 01             	lea    0x1(%eax),%edx
   336cb:	89 95 6c ff ff ff    	mov    %edx,-0x94(%ebp)
   336d1:	c6 00 30             	movb   $0x30,(%eax)
   336d4:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
   336da:	39 c1                	cmp    %eax,%ecx
   336dc:	77 ea                	ja     336c8 <_svfprintf_r+0x1888>
   336de:	e9 fc fe ff ff       	jmp    335df <_svfprintf_r+0x179f>
   336e3:	8b 45 08             	mov    0x8(%ebp),%eax
   336e6:	c7 44 24 04 40 00 00 	movl   $0x40,0x4(%esp)
   336ed:	00 
   336ee:	89 04 24             	mov    %eax,(%esp)
   336f1:	e8 4a 1b 00 00       	call   35240 <_malloc_r>
   336f6:	8b 55 0c             	mov    0xc(%ebp),%edx
   336f9:	85 c0                	test   %eax,%eax
   336fb:	89 02                	mov    %eax,(%edx)
   336fd:	89 42 10             	mov    %eax,0x10(%edx)
   33700:	0f 84 15 06 00 00    	je     33d1b <_svfprintf_r+0x1edb>
   33706:	8b 45 0c             	mov    0xc(%ebp),%eax
   33709:	c7 40 14 40 00 00 00 	movl   $0x40,0x14(%eax)
   33710:	e9 6c e7 ff ff       	jmp    31e81 <_svfprintf_r+0x41>
   33715:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3371b:	89 44 24 08          	mov    %eax,0x8(%esp)
   3371f:	8b 45 0c             	mov    0xc(%ebp),%eax
   33722:	89 44 24 04          	mov    %eax,0x4(%esp)
   33726:	8b 45 08             	mov    0x8(%ebp),%eax
   33729:	89 04 24             	mov    %eax,(%esp)
   3372c:	e8 8f 32 00 00       	call   369c0 <__ssprint_r>
   33731:	85 c0                	test   %eax,%eax
   33733:	0f 85 d7 e8 ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   33739:	8b 9d 5c ff ff ff    	mov    -0xa4(%ebp),%ebx
   3373f:	8d 7d a8             	lea    -0x58(%ebp),%edi
   33742:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   33748:	e9 d9 fc ff ff       	jmp    33426 <_svfprintf_r+0x15e6>
   3374d:	83 c0 01             	add    $0x1,%eax
   33750:	01 da                	add    %ebx,%edx
   33752:	c7 07 e4 8f 03 00    	movl   $0x38fe4,(%edi)
   33758:	83 c7 08             	add    $0x8,%edi
   3375b:	89 5f fc             	mov    %ebx,-0x4(%edi)
   3375e:	83 f8 07             	cmp    $0x7,%eax
   33761:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   33767:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3376d:	7e 33                	jle    337a2 <_svfprintf_r+0x1962>
   3376f:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   33775:	89 44 24 08          	mov    %eax,0x8(%esp)
   33779:	8b 45 0c             	mov    0xc(%ebp),%eax
   3377c:	89 44 24 04          	mov    %eax,0x4(%esp)
   33780:	8b 45 08             	mov    0x8(%ebp),%eax
   33783:	89 04 24             	mov    %eax,(%esp)
   33786:	e8 35 32 00 00       	call   369c0 <__ssprint_r>
   3378b:	85 c0                	test   %eax,%eax
   3378d:	0f 85 7d e8 ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   33793:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   33799:	8d 7d a8             	lea    -0x58(%ebp),%edi
   3379c:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   337a2:	8b 9d 28 ff ff ff    	mov    -0xd8(%ebp),%ebx
   337a8:	83 c0 01             	add    $0x1,%eax
   337ab:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   337b1:	89 1f                	mov    %ebx,(%edi)
   337b3:	8b 9d 1c ff ff ff    	mov    -0xe4(%ebp),%ebx
   337b9:	01 da                	add    %ebx,%edx
   337bb:	83 f8 07             	cmp    $0x7,%eax
   337be:	89 5f 04             	mov    %ebx,0x4(%edi)
   337c1:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   337c7:	0f 8f 86 f5 ff ff    	jg     32d53 <_svfprintf_r+0xf13>
   337cd:	83 c7 08             	add    $0x8,%edi
   337d0:	89 d1                	mov    %edx,%ecx
   337d2:	e9 15 f1 ff ff       	jmp    328ec <_svfprintf_r+0xaac>
   337d7:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   337dd:	89 44 24 08          	mov    %eax,0x8(%esp)
   337e1:	8b 45 0c             	mov    0xc(%ebp),%eax
   337e4:	89 44 24 04          	mov    %eax,0x4(%esp)
   337e8:	8b 45 08             	mov    0x8(%ebp),%eax
   337eb:	89 04 24             	mov    %eax,(%esp)
   337ee:	e8 cd 31 00 00       	call   369c0 <__ssprint_r>
   337f3:	85 c0                	test   %eax,%eax
   337f5:	0f 85 15 e8 ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   337fb:	8b 9d 5c ff ff ff    	mov    -0xa4(%ebp),%ebx
   33801:	8d 7d a8             	lea    -0x58(%ebp),%edi
   33804:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   3380a:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   33810:	e9 62 fc ff ff       	jmp    33477 <_svfprintf_r+0x1637>
   33815:	c7 85 44 ff ff ff 06 	movl   $0x6,-0xbc(%ebp)
   3381c:	00 00 00 
   3381f:	e9 07 fd ff ff       	jmp    3352b <_svfprintf_r+0x16eb>
   33824:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
   3382a:	89 04 24             	mov    %eax,(%esp)
   3382d:	e8 0e 31 00 00       	call   36940 <strlen>
   33832:	e9 6a e8 ff ff       	jmp    320a1 <_svfprintf_r+0x261>
   33837:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3383d:	89 44 24 08          	mov    %eax,0x8(%esp)
   33841:	8b 45 0c             	mov    0xc(%ebp),%eax
   33844:	89 44 24 04          	mov    %eax,0x4(%esp)
   33848:	8b 45 08             	mov    0x8(%ebp),%eax
   3384b:	89 04 24             	mov    %eax,(%esp)
   3384e:	e8 6d 31 00 00       	call   369c0 <__ssprint_r>
   33853:	85 c0                	test   %eax,%eax
   33855:	0f 85 b5 e7 ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   3385b:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   33861:	8d 7d a8             	lea    -0x58(%ebp),%edi
   33864:	e9 76 f6 ff ff       	jmp    32edf <_svfprintf_r+0x109f>
   33869:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3386f:	89 44 24 08          	mov    %eax,0x8(%esp)
   33873:	8b 45 0c             	mov    0xc(%ebp),%eax
   33876:	89 44 24 04          	mov    %eax,0x4(%esp)
   3387a:	8b 45 08             	mov    0x8(%ebp),%eax
   3387d:	89 04 24             	mov    %eax,(%esp)
   33880:	e8 3b 31 00 00       	call   369c0 <__ssprint_r>
   33885:	85 c0                	test   %eax,%eax
   33887:	0f 85 83 e7 ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   3388d:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
   33893:	8d 7d a8             	lea    -0x58(%ebp),%edi
   33896:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   3389c:	e9 f4 f8 ff ff       	jmp    33195 <_svfprintf_r+0x1355>
   338a1:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   338a7:	89 44 24 08          	mov    %eax,0x8(%esp)
   338ab:	8b 45 0c             	mov    0xc(%ebp),%eax
   338ae:	89 44 24 04          	mov    %eax,0x4(%esp)
   338b2:	8b 45 08             	mov    0x8(%ebp),%eax
   338b5:	89 04 24             	mov    %eax,(%esp)
   338b8:	e8 03 31 00 00       	call   369c0 <__ssprint_r>
   338bd:	85 c0                	test   %eax,%eax
   338bf:	0f 85 4b e7 ff ff    	jne    32010 <_svfprintf_r+0x1d0>
   338c5:	8b b5 1c ff ff ff    	mov    -0xe4(%ebp),%esi
   338cb:	8d 7d a8             	lea    -0x58(%ebp),%edi
   338ce:	2b b5 5c ff ff ff    	sub    -0xa4(%ebp),%esi
   338d4:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   338da:	e9 fa f8 ff ff       	jmp    331d9 <_svfprintf_r+0x1399>
   338df:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
   338e5:	b0 06                	mov    $0x6,%al
   338e7:	89 75 14             	mov    %esi,0x14(%ebp)
   338ea:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   338f1:	00 00 00 
   338f4:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   338fb:	00 00 00 
   338fe:	83 fa 06             	cmp    $0x6,%edx
   33901:	0f 46 c2             	cmovbe %edx,%eax
   33904:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
   3390a:	85 c0                	test   %eax,%eax
   3390c:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   33912:	c7 85 28 ff ff ff 74 	movl   $0x38e74,-0xd8(%ebp)
   33919:	8e 03 00 
   3391c:	0f 49 d0             	cmovns %eax,%edx
   3391f:	31 db                	xor    %ebx,%ebx
   33921:	89 95 48 ff ff ff    	mov    %edx,-0xb8(%ebp)
   33927:	e9 b7 e7 ff ff       	jmp    320e3 <_svfprintf_r+0x2a3>
   3392c:	c6 85 59 ff ff ff 2d 	movb   $0x2d,-0xa7(%ebp)
   33933:	bb 2d 00 00 00       	mov    $0x2d,%ebx
   33938:	e9 9d ea ff ff       	jmp    323da <_svfprintf_r+0x59a>
   3393d:	ba 03 00 00 00       	mov    $0x3,%edx
   33942:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
   33948:	89 44 24 1c          	mov    %eax,0x1c(%esp)
   3394c:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
   33952:	89 44 24 18          	mov    %eax,0x18(%esp)
   33956:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
   3395c:	89 44 24 14          	mov    %eax,0x14(%esp)
   33960:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
   33966:	dd 54 24 04          	fstl   0x4(%esp)
   3396a:	89 54 24 0c          	mov    %edx,0xc(%esp)
   3396e:	dd 9d 38 ff ff ff    	fstpl  -0xc8(%ebp)
   33974:	89 44 24 10          	mov    %eax,0x10(%esp)
   33978:	8b 45 08             	mov    0x8(%ebp),%eax
   3397b:	89 04 24             	mov    %eax,(%esp)
   3397e:	e8 8d 05 00 00       	call   33f10 <_dtoa_r>
   33983:	83 fb 47             	cmp    $0x47,%ebx
   33986:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   3398c:	dd 85 38 ff ff ff    	fldl   -0xc8(%ebp)
   33992:	75 09                	jne    3399d <_svfprintf_r+0x1b5d>
   33994:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   3399b:	74 5b                	je     339f8 <_svfprintf_r+0x1bb8>
   3399d:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
   339a3:	89 f0                	mov    %esi,%eax
   339a5:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
   339ab:	01 d1                	add    %edx,%ecx
   339ad:	84 c0                	test   %al,%al
   339af:	0f 84 14 fc ff ff    	je     335c9 <_svfprintf_r+0x1789>
   339b5:	80 3a 30             	cmpb   $0x30,(%edx)
   339b8:	0f 84 37 02 00 00    	je     33bf5 <_svfprintf_r+0x1db5>
   339be:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
   339c4:	01 c1                	add    %eax,%ecx
   339c6:	e9 fe fb ff ff       	jmp    335c9 <_svfprintf_r+0x1789>
   339cb:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
   339d1:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
   339d7:	bb 2d 00 00 00       	mov    $0x2d,%ebx
   339dc:	c6 85 59 ff ff ff 2d 	movb   $0x2d,-0xa7(%ebp)
   339e3:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   339ea:	00 00 00 
   339ed:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
   339f3:	e9 e4 e6 ff ff       	jmp    320dc <_svfprintf_r+0x29c>
   339f8:	dd d8                	fstp   %st(0)
   339fa:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
   33a00:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
   33a06:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
   33a0c:	29 85 1c ff ff ff    	sub    %eax,-0xe4(%ebp)
   33a12:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
   33a18:	83 f8 fd             	cmp    $0xfffffffd,%eax
   33a1b:	7c 48                	jl     33a65 <_svfprintf_r+0x1c25>
   33a1d:	39 85 44 ff ff ff    	cmp    %eax,-0xbc(%ebp)
   33a23:	7c 40                	jl     33a65 <_svfprintf_r+0x1c25>
   33a25:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
   33a2b:	e9 ea fb ff ff       	jmp    3361a <_svfprintf_r+0x17da>
   33a30:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
   33a36:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   33a3d:	89 75 14             	mov    %esi,0x14(%ebp)
   33a40:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   33a47:	00 00 00 
   33a4a:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
   33a50:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   33a56:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   33a5d:	00 00 00 
   33a60:	e9 73 e6 ff ff       	jmp    320d8 <_svfprintf_r+0x298>
   33a65:	83 ad 24 ff ff ff 02 	subl   $0x2,-0xdc(%ebp)
   33a6c:	8d 48 ff             	lea    -0x1(%eax),%ecx
   33a6f:	0f b6 85 24 ff ff ff 	movzbl -0xdc(%ebp),%eax
   33a76:	85 c9                	test   %ecx,%ecx
   33a78:	89 8d 5c ff ff ff    	mov    %ecx,-0xa4(%ebp)
   33a7e:	88 85 65 ff ff ff    	mov    %al,-0x9b(%ebp)
   33a84:	0f 88 2c 02 00 00    	js     33cb6 <_svfprintf_r+0x1e76>
   33a8a:	c6 85 66 ff ff ff 2b 	movb   $0x2b,-0x9a(%ebp)
   33a91:	83 f9 09             	cmp    $0x9,%ecx
   33a94:	0f 8f ea 00 00 00    	jg     33b84 <_svfprintf_r+0x1d44>
   33a9a:	83 c1 30             	add    $0x30,%ecx
   33a9d:	c6 85 67 ff ff ff 30 	movb   $0x30,-0x99(%ebp)
   33aa4:	8d 85 69 ff ff ff    	lea    -0x97(%ebp),%eax
   33aaa:	88 8d 68 ff ff ff    	mov    %cl,-0x98(%ebp)
   33ab0:	8b 9d 1c ff ff ff    	mov    -0xe4(%ebp),%ebx
   33ab6:	8d 95 65 ff ff ff    	lea    -0x9b(%ebp),%edx
   33abc:	29 d0                	sub    %edx,%eax
   33abe:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
   33ac4:	89 da                	mov    %ebx,%edx
   33ac6:	01 c2                	add    %eax,%edx
   33ac8:	83 fb 01             	cmp    $0x1,%ebx
   33acb:	89 95 38 ff ff ff    	mov    %edx,-0xc8(%ebp)
   33ad1:	0f 8e 21 02 00 00    	jle    33cf8 <_svfprintf_r+0x1eb8>
   33ad7:	31 c0                	xor    %eax,%eax
   33ad9:	83 85 38 ff ff ff 01 	addl   $0x1,-0xc8(%ebp)
   33ae0:	0f 49 85 38 ff ff ff 	cmovns -0xc8(%ebp),%eax
   33ae7:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   33aee:	00 00 00 
   33af1:	e9 60 fb ff ff       	jmp    33656 <_svfprintf_r+0x1816>
   33af6:	8b 8d 48 ff ff ff    	mov    -0xb8(%ebp),%ecx
   33afc:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   33b03:	00 00 00 
   33b06:	e9 68 e4 ff ff       	jmp    31f73 <_svfprintf_r+0x133>
   33b0b:	ba 02 00 00 00       	mov    $0x2,%edx
   33b10:	e9 2d fe ff ff       	jmp    33942 <_svfprintf_r+0x1b02>
   33b15:	d9 e0                	fchs   
   33b17:	c6 85 48 ff ff ff 2d 	movb   $0x2d,-0xb8(%ebp)
   33b1e:	e9 38 fa ff ff       	jmp    3355b <_svfprintf_r+0x171b>
   33b23:	8b 8d 20 ff ff ff    	mov    -0xe0(%ebp),%ecx
   33b29:	ba 01 00 00 00       	mov    $0x1,%edx
   33b2e:	85 c9                	test   %ecx,%ecx
   33b30:	0f 8e 5a 01 00 00    	jle    33c90 <_svfprintf_r+0x1e50>
   33b36:	31 c0                	xor    %eax,%eax
   33b38:	03 95 1c ff ff ff    	add    -0xe4(%ebp),%edx
   33b3e:	c7 85 24 ff ff ff 67 	movl   $0x67,-0xdc(%ebp)
   33b45:	00 00 00 
   33b48:	89 95 38 ff ff ff    	mov    %edx,-0xc8(%ebp)
   33b4e:	0f 49 c2             	cmovns %edx,%eax
   33b51:	e9 00 fb ff ff       	jmp    33656 <_svfprintf_r+0x1816>
   33b56:	85 c0                	test   %eax,%eax
   33b58:	0f 8e 06 01 00 00    	jle    33c64 <_svfprintf_r+0x1e24>
   33b5e:	8b b5 44 ff ff ff    	mov    -0xbc(%ebp),%esi
   33b64:	85 f6                	test   %esi,%esi
   33b66:	0f 85 d4 00 00 00    	jne    33c40 <_svfprintf_r+0x1e00>
   33b6c:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   33b73:	0f 85 c7 00 00 00    	jne    33c40 <_svfprintf_r+0x1e00>
   33b79:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   33b7f:	e9 d2 fa ff ff       	jmp    33656 <_svfprintf_r+0x1816>
   33b84:	8d b5 73 ff ff ff    	lea    -0x8d(%ebp),%esi
   33b8a:	89 f3                	mov    %esi,%ebx
   33b8c:	b8 67 66 66 66       	mov    $0x66666667,%eax
   33b91:	83 eb 01             	sub    $0x1,%ebx
   33b94:	f7 e9                	imul   %ecx
   33b96:	89 c8                	mov    %ecx,%eax
   33b98:	c1 f8 1f             	sar    $0x1f,%eax
   33b9b:	c1 fa 02             	sar    $0x2,%edx
   33b9e:	29 c2                	sub    %eax,%edx
   33ba0:	8d 04 92             	lea    (%edx,%edx,4),%eax
   33ba3:	01 c0                	add    %eax,%eax
   33ba5:	29 c1                	sub    %eax,%ecx
   33ba7:	83 fa 09             	cmp    $0x9,%edx
   33baa:	8d 41 30             	lea    0x30(%ecx),%eax
   33bad:	89 d1                	mov    %edx,%ecx
   33baf:	88 03                	mov    %al,(%ebx)
   33bb1:	7f d9                	jg     33b8c <_svfprintf_r+0x1d4c>
   33bb3:	8d 43 ff             	lea    -0x1(%ebx),%eax
   33bb6:	83 c1 30             	add    $0x30,%ecx
   33bb9:	39 f0                	cmp    %esi,%eax
   33bbb:	88 4b ff             	mov    %cl,-0x1(%ebx)
   33bbe:	0f 83 6a 01 00 00    	jae    33d2e <_svfprintf_r+0x1eee>
   33bc4:	8d 95 67 ff ff ff    	lea    -0x99(%ebp),%edx
   33bca:	eb 07                	jmp    33bd3 <_svfprintf_r+0x1d93>
   33bcc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   33bd0:	0f b6 08             	movzbl (%eax),%ecx
   33bd3:	83 c0 01             	add    $0x1,%eax
   33bd6:	83 c2 01             	add    $0x1,%edx
   33bd9:	39 f0                	cmp    %esi,%eax
   33bdb:	88 4a ff             	mov    %cl,-0x1(%edx)
   33bde:	75 f0                	jne    33bd0 <_svfprintf_r+0x1d90>
   33be0:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   33be6:	29 d8                	sub    %ebx,%eax
   33be8:	8d 95 67 ff ff ff    	lea    -0x99(%ebp),%edx
   33bee:	01 d0                	add    %edx,%eax
   33bf0:	e9 bb fe ff ff       	jmp    33ab0 <_svfprintf_r+0x1c70>
   33bf5:	d9 ee                	fldz   
   33bf7:	d9 c9                	fxch   %st(1)
   33bf9:	db e9                	fucomi %st(1),%st
   33bfb:	dd d9                	fstp   %st(1)
   33bfd:	7a 06                	jp     33c05 <_svfprintf_r+0x1dc5>
   33bff:	0f 84 b9 fd ff ff    	je     339be <_svfprintf_r+0x1b7e>
   33c05:	b8 01 00 00 00       	mov    $0x1,%eax
   33c0a:	2b 85 44 ff ff ff    	sub    -0xbc(%ebp),%eax
   33c10:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
   33c16:	01 c1                	add    %eax,%ecx
   33c18:	e9 ac f9 ff ff       	jmp    335c9 <_svfprintf_r+0x1789>
   33c1d:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
   33c23:	31 c0                	xor    %eax,%eax
   33c25:	c7 85 24 ff ff ff 67 	movl   $0x67,-0xdc(%ebp)
   33c2c:	00 00 00 
   33c2f:	83 c2 01             	add    $0x1,%edx
   33c32:	89 95 38 ff ff ff    	mov    %edx,-0xc8(%ebp)
   33c38:	0f 49 c2             	cmovns %edx,%eax
   33c3b:	e9 16 fa ff ff       	jmp    33656 <_svfprintf_r+0x1816>
   33c40:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
   33c46:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
   33c4c:	8d 44 10 01          	lea    0x1(%eax,%edx,1),%eax
   33c50:	89 c2                	mov    %eax,%edx
   33c52:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   33c58:	31 c0                	xor    %eax,%eax
   33c5a:	85 d2                	test   %edx,%edx
   33c5c:	0f 49 c2             	cmovns %edx,%eax
   33c5f:	e9 f2 f9 ff ff       	jmp    33656 <_svfprintf_r+0x1816>
   33c64:	8b 9d 44 ff ff ff    	mov    -0xbc(%ebp),%ebx
   33c6a:	85 db                	test   %ebx,%ebx
   33c6c:	75 2f                	jne    33c9d <_svfprintf_r+0x1e5d>
   33c6e:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   33c75:	75 26                	jne    33c9d <_svfprintf_r+0x1e5d>
   33c77:	b8 01 00 00 00       	mov    $0x1,%eax
   33c7c:	c7 85 38 ff ff ff 01 	movl   $0x1,-0xc8(%ebp)
   33c83:	00 00 00 
   33c86:	e9 cb f9 ff ff       	jmp    33656 <_svfprintf_r+0x1816>
   33c8b:	90                   	nop
   33c8c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   33c90:	b2 02                	mov    $0x2,%dl
   33c92:	2b 95 20 ff ff ff    	sub    -0xe0(%ebp),%edx
   33c98:	e9 99 fe ff ff       	jmp    33b36 <_svfprintf_r+0x1cf6>
   33c9d:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
   33ca3:	31 c0                	xor    %eax,%eax
   33ca5:	83 c2 02             	add    $0x2,%edx
   33ca8:	89 95 38 ff ff ff    	mov    %edx,-0xc8(%ebp)
   33cae:	0f 49 c2             	cmovns %edx,%eax
   33cb1:	e9 a0 f9 ff ff       	jmp    33656 <_svfprintf_r+0x1816>
   33cb6:	f7 d9                	neg    %ecx
   33cb8:	c6 85 66 ff ff ff 2d 	movb   $0x2d,-0x9a(%ebp)
   33cbf:	e9 cd fd ff ff       	jmp    33a91 <_svfprintf_r+0x1c51>
   33cc4:	8b 55 14             	mov    0x14(%ebp),%edx
   33cc7:	8b 45 14             	mov    0x14(%ebp),%eax
   33cca:	8b 8d 48 ff ff ff    	mov    -0xb8(%ebp),%ecx
   33cd0:	8b 12                	mov    (%edx),%edx
   33cd2:	83 c0 04             	add    $0x4,%eax
   33cd5:	89 45 14             	mov    %eax,0x14(%ebp)
   33cd8:	85 d2                	test   %edx,%edx
   33cda:	89 95 44 ff ff ff    	mov    %edx,-0xbc(%ebp)
   33ce0:	0f 89 a9 e2 ff ff    	jns    31f8f <_svfprintf_r+0x14f>
   33ce6:	c7 85 44 ff ff ff ff 	movl   $0xffffffff,-0xbc(%ebp)
   33ced:	ff ff ff 
   33cf0:	89 c8                	mov    %ecx,%eax
   33cf2:	e9 76 e2 ff ff       	jmp    31f6d <_svfprintf_r+0x12d>
   33cf7:	90                   	nop
   33cf8:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
   33cfe:	83 e0 01             	and    $0x1,%eax
   33d01:	0f 85 d0 fd ff ff    	jne    33ad7 <_svfprintf_r+0x1c97>
   33d07:	85 d2                	test   %edx,%edx
   33d09:	0f 49 c2             	cmovns %edx,%eax
   33d0c:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   33d13:	00 00 00 
   33d16:	e9 3b f9 ff ff       	jmp    33656 <_svfprintf_r+0x1816>
   33d1b:	8b 45 08             	mov    0x8(%ebp),%eax
   33d1e:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
   33d24:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
   33d29:	e9 f5 e2 ff ff       	jmp    32023 <_svfprintf_r+0x1e3>
   33d2e:	8d 85 67 ff ff ff    	lea    -0x99(%ebp),%eax
   33d34:	e9 77 fd ff ff       	jmp    33ab0 <_svfprintf_r+0x1c70>
   33d39:	66 90                	xchg   %ax,%ax
   33d3b:	66 90                	xchg   %ax,%ax
   33d3d:	66 90                	xchg   %ax,%ax
   33d3f:	90                   	nop

00033d40 <quorem>:
   33d40:	55                   	push   %ebp
   33d41:	89 c1                	mov    %eax,%ecx
   33d43:	89 e5                	mov    %esp,%ebp
   33d45:	57                   	push   %edi
   33d46:	89 d7                	mov    %edx,%edi
   33d48:	56                   	push   %esi
   33d49:	53                   	push   %ebx
   33d4a:	83 ec 3c             	sub    $0x3c,%esp
   33d4d:	89 45 d0             	mov    %eax,-0x30(%ebp)
   33d50:	8b 42 10             	mov    0x10(%edx),%eax
   33d53:	3b 41 10             	cmp    0x10(%ecx),%eax
   33d56:	89 55 c8             	mov    %edx,-0x38(%ebp)
   33d59:	89 ca                	mov    %ecx,%edx
   33d5b:	0f 8f 9f 01 00 00    	jg     33f00 <quorem+0x1c0>
   33d61:	83 e8 01             	sub    $0x1,%eax
   33d64:	83 c7 14             	add    $0x14,%edi
   33d67:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   33d6a:	c1 e0 02             	shl    $0x2,%eax
   33d6d:	83 c2 14             	add    $0x14,%edx
   33d70:	8d 1c 07             	lea    (%edi,%eax,1),%ebx
   33d73:	01 d0                	add    %edx,%eax
   33d75:	89 55 d8             	mov    %edx,-0x28(%ebp)
   33d78:	8b 13                	mov    (%ebx),%edx
   33d7a:	89 45 c4             	mov    %eax,-0x3c(%ebp)
   33d7d:	8b 00                	mov    (%eax),%eax
   33d7f:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
   33d82:	8d 4a 01             	lea    0x1(%edx),%ecx
   33d85:	31 d2                	xor    %edx,%edx
   33d87:	f7 f1                	div    %ecx
   33d89:	85 c0                	test   %eax,%eax
   33d8b:	89 45 e0             	mov    %eax,-0x20(%ebp)
   33d8e:	89 45 cc             	mov    %eax,-0x34(%ebp)
   33d91:	0f 84 b5 00 00 00    	je     33e4c <quorem+0x10c>
   33d97:	8b 45 d8             	mov    -0x28(%ebp),%eax
   33d9a:	31 f6                	xor    %esi,%esi
   33d9c:	89 fa                	mov    %edi,%edx
   33d9e:	89 7d c0             	mov    %edi,-0x40(%ebp)
   33da1:	89 f7                	mov    %esi,%edi
   33da3:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
   33daa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   33db0:	83 c2 04             	add    $0x4,%edx
   33db3:	8b 72 fc             	mov    -0x4(%edx),%esi
   33db6:	83 c0 04             	add    $0x4,%eax
   33db9:	0f b7 ce             	movzwl %si,%ecx
   33dbc:	0f af 4d e0          	imul   -0x20(%ebp),%ecx
   33dc0:	03 4d dc             	add    -0x24(%ebp),%ecx
   33dc3:	c1 ee 10             	shr    $0x10,%esi
   33dc6:	0f af 75 e0          	imul   -0x20(%ebp),%esi
   33dca:	89 cb                	mov    %ecx,%ebx
   33dcc:	0f b7 c9             	movzwl %cx,%ecx
   33dcf:	c1 eb 10             	shr    $0x10,%ebx
   33dd2:	29 cf                	sub    %ecx,%edi
   33dd4:	01 f3                	add    %esi,%ebx
   33dd6:	89 de                	mov    %ebx,%esi
   33dd8:	0f b7 db             	movzwl %bx,%ebx
   33ddb:	c1 ee 10             	shr    $0x10,%esi
   33dde:	89 75 dc             	mov    %esi,-0x24(%ebp)
   33de1:	8b 70 fc             	mov    -0x4(%eax),%esi
   33de4:	0f b7 ce             	movzwl %si,%ecx
   33de7:	01 f9                	add    %edi,%ecx
   33de9:	c1 ee 10             	shr    $0x10,%esi
   33dec:	29 de                	sub    %ebx,%esi
   33dee:	89 cb                	mov    %ecx,%ebx
   33df0:	c1 fb 10             	sar    $0x10,%ebx
   33df3:	0f b7 c9             	movzwl %cx,%ecx
   33df6:	01 de                	add    %ebx,%esi
   33df8:	89 f7                	mov    %esi,%edi
   33dfa:	c1 e6 10             	shl    $0x10,%esi
   33dfd:	09 ce                	or     %ecx,%esi
   33dff:	c1 ff 10             	sar    $0x10,%edi
   33e02:	39 55 e4             	cmp    %edx,-0x1c(%ebp)
   33e05:	89 70 fc             	mov    %esi,-0x4(%eax)
   33e08:	73 a6                	jae    33db0 <quorem+0x70>
   33e0a:	8b 45 c4             	mov    -0x3c(%ebp),%eax
   33e0d:	8b 7d c0             	mov    -0x40(%ebp),%edi
   33e10:	8b 10                	mov    (%eax),%edx
   33e12:	85 d2                	test   %edx,%edx
   33e14:	75 36                	jne    33e4c <quorem+0x10c>
   33e16:	8b 4d d8             	mov    -0x28(%ebp),%ecx
   33e19:	89 c2                	mov    %eax,%edx
   33e1b:	83 e8 04             	sub    $0x4,%eax
   33e1e:	39 c1                	cmp    %eax,%ecx
   33e20:	73 21                	jae    33e43 <quorem+0x103>
   33e22:	8b 72 fc             	mov    -0x4(%edx),%esi
   33e25:	85 f6                	test   %esi,%esi
   33e27:	75 1a                	jne    33e43 <quorem+0x103>
   33e29:	8b 55 d4             	mov    -0x2c(%ebp),%edx
   33e2c:	eb 08                	jmp    33e36 <quorem+0xf6>
   33e2e:	66 90                	xchg   %ax,%ax
   33e30:	8b 18                	mov    (%eax),%ebx
   33e32:	85 db                	test   %ebx,%ebx
   33e34:	75 0a                	jne    33e40 <quorem+0x100>
   33e36:	83 e8 04             	sub    $0x4,%eax
   33e39:	83 ea 01             	sub    $0x1,%edx
   33e3c:	39 c1                	cmp    %eax,%ecx
   33e3e:	72 f0                	jb     33e30 <quorem+0xf0>
   33e40:	89 55 d4             	mov    %edx,-0x2c(%ebp)
   33e43:	8b 45 d0             	mov    -0x30(%ebp),%eax
   33e46:	8b 55 d4             	mov    -0x2c(%ebp),%edx
   33e49:	89 50 10             	mov    %edx,0x10(%eax)
   33e4c:	8b 45 c8             	mov    -0x38(%ebp),%eax
   33e4f:	89 44 24 04          	mov    %eax,0x4(%esp)
   33e53:	8b 45 d0             	mov    -0x30(%ebp),%eax
   33e56:	89 04 24             	mov    %eax,(%esp)
   33e59:	e8 a2 23 00 00       	call   36200 <__mcmp>
   33e5e:	85 c0                	test   %eax,%eax
   33e60:	0f 88 8e 00 00 00    	js     33ef4 <quorem+0x1b4>
   33e66:	8b 45 e0             	mov    -0x20(%ebp),%eax
   33e69:	31 f6                	xor    %esi,%esi
   33e6b:	83 c0 01             	add    $0x1,%eax
   33e6e:	89 45 cc             	mov    %eax,-0x34(%ebp)
   33e71:	8b 45 d8             	mov    -0x28(%ebp),%eax
   33e74:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   33e78:	83 c7 04             	add    $0x4,%edi
   33e7b:	8b 4f fc             	mov    -0x4(%edi),%ecx
   33e7e:	83 c0 04             	add    $0x4,%eax
   33e81:	8b 58 fc             	mov    -0x4(%eax),%ebx
   33e84:	0f b7 d1             	movzwl %cx,%edx
   33e87:	29 d6                	sub    %edx,%esi
   33e89:	0f b7 d3             	movzwl %bx,%edx
   33e8c:	01 f2                	add    %esi,%edx
   33e8e:	c1 e9 10             	shr    $0x10,%ecx
   33e91:	c1 eb 10             	shr    $0x10,%ebx
   33e94:	29 cb                	sub    %ecx,%ebx
   33e96:	89 d1                	mov    %edx,%ecx
   33e98:	c1 f9 10             	sar    $0x10,%ecx
   33e9b:	0f b7 d2             	movzwl %dx,%edx
   33e9e:	01 cb                	add    %ecx,%ebx
   33ea0:	89 de                	mov    %ebx,%esi
   33ea2:	c1 e3 10             	shl    $0x10,%ebx
   33ea5:	09 d3                	or     %edx,%ebx
   33ea7:	c1 fe 10             	sar    $0x10,%esi
   33eaa:	39 7d e4             	cmp    %edi,-0x1c(%ebp)
   33ead:	89 58 fc             	mov    %ebx,-0x4(%eax)
   33eb0:	73 c6                	jae    33e78 <quorem+0x138>
   33eb2:	8b 45 d8             	mov    -0x28(%ebp),%eax
   33eb5:	8b 7d d4             	mov    -0x2c(%ebp),%edi
   33eb8:	8d 14 b8             	lea    (%eax,%edi,4),%edx
   33ebb:	8b 02                	mov    (%edx),%eax
   33ebd:	85 c0                	test   %eax,%eax
   33ebf:	75 33                	jne    33ef4 <quorem+0x1b4>
   33ec1:	8b 4d d8             	mov    -0x28(%ebp),%ecx
   33ec4:	8d 42 fc             	lea    -0x4(%edx),%eax
   33ec7:	39 c1                	cmp    %eax,%ecx
   33ec9:	73 20                	jae    33eeb <quorem+0x1ab>
   33ecb:	8b 72 fc             	mov    -0x4(%edx),%esi
   33ece:	85 f6                	test   %esi,%esi
   33ed0:	75 19                	jne    33eeb <quorem+0x1ab>
   33ed2:	89 fa                	mov    %edi,%edx
   33ed4:	eb 08                	jmp    33ede <quorem+0x19e>
   33ed6:	66 90                	xchg   %ax,%ax
   33ed8:	8b 18                	mov    (%eax),%ebx
   33eda:	85 db                	test   %ebx,%ebx
   33edc:	75 0a                	jne    33ee8 <quorem+0x1a8>
   33ede:	83 e8 04             	sub    $0x4,%eax
   33ee1:	83 ea 01             	sub    $0x1,%edx
   33ee4:	39 c1                	cmp    %eax,%ecx
   33ee6:	72 f0                	jb     33ed8 <quorem+0x198>
   33ee8:	89 55 d4             	mov    %edx,-0x2c(%ebp)
   33eeb:	8b 45 d0             	mov    -0x30(%ebp),%eax
   33eee:	8b 7d d4             	mov    -0x2c(%ebp),%edi
   33ef1:	89 78 10             	mov    %edi,0x10(%eax)
   33ef4:	8b 45 cc             	mov    -0x34(%ebp),%eax
   33ef7:	83 c4 3c             	add    $0x3c,%esp
   33efa:	5b                   	pop    %ebx
   33efb:	5e                   	pop    %esi
   33efc:	5f                   	pop    %edi
   33efd:	5d                   	pop    %ebp
   33efe:	c3                   	ret    
   33eff:	90                   	nop
   33f00:	83 c4 3c             	add    $0x3c,%esp
   33f03:	31 c0                	xor    %eax,%eax
   33f05:	5b                   	pop    %ebx
   33f06:	5e                   	pop    %esi
   33f07:	5f                   	pop    %edi
   33f08:	5d                   	pop    %ebp
   33f09:	c3                   	ret    
   33f0a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

00033f10 <_dtoa_r>:
   33f10:	55                   	push   %ebp
   33f11:	89 e5                	mov    %esp,%ebp
   33f13:	57                   	push   %edi
   33f14:	56                   	push   %esi
   33f15:	53                   	push   %ebx
   33f16:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
   33f1c:	8b 75 08             	mov    0x8(%ebp),%esi
   33f1f:	dd 45 0c             	fldl   0xc(%ebp)
   33f22:	8b 5d 20             	mov    0x20(%ebp),%ebx
   33f25:	dd 5d c0             	fstpl  -0x40(%ebp)
   33f28:	8b 46 40             	mov    0x40(%esi),%eax
   33f2b:	85 c0                	test   %eax,%eax
   33f2d:	74 23                	je     33f52 <_dtoa_r+0x42>
   33f2f:	8b 4e 44             	mov    0x44(%esi),%ecx
   33f32:	ba 01 00 00 00       	mov    $0x1,%edx
   33f37:	d3 e2                	shl    %cl,%edx
   33f39:	89 48 04             	mov    %ecx,0x4(%eax)
   33f3c:	89 50 08             	mov    %edx,0x8(%eax)
   33f3f:	89 44 24 04          	mov    %eax,0x4(%esp)
   33f43:	89 34 24             	mov    %esi,(%esp)
   33f46:	e8 95 1b 00 00       	call   35ae0 <_Bfree>
   33f4b:	c7 46 40 00 00 00 00 	movl   $0x0,0x40(%esi)
   33f52:	8b 7d c4             	mov    -0x3c(%ebp),%edi
   33f55:	85 ff                	test   %edi,%edi
   33f57:	0f 88 3b 02 00 00    	js     34198 <_dtoa_r+0x288>
   33f5d:	c7 03 00 00 00 00    	movl   $0x0,(%ebx)
   33f63:	89 f8                	mov    %edi,%eax
   33f65:	25 00 00 f0 7f       	and    $0x7ff00000,%eax
   33f6a:	3d 00 00 f0 7f       	cmp    $0x7ff00000,%eax
   33f6f:	0f 84 e3 01 00 00    	je     34158 <_dtoa_r+0x248>
   33f75:	dd 45 c0             	fldl   -0x40(%ebp)
   33f78:	d9 ee                	fldz   
   33f7a:	d9 c9                	fxch   %st(1)
   33f7c:	db e9                	fucomi %st(1),%st
   33f7e:	dd d9                	fstp   %st(1)
   33f80:	7a 36                	jp     33fb8 <_dtoa_r+0xa8>
   33f82:	75 34                	jne    33fb8 <_dtoa_r+0xa8>
   33f84:	dd d8                	fstp   %st(0)
   33f86:	8b 4d 24             	mov    0x24(%ebp),%ecx
   33f89:	8b 45 1c             	mov    0x1c(%ebp),%eax
   33f8c:	85 c9                	test   %ecx,%ecx
   33f8e:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
   33f94:	0f 84 4e 02 00 00    	je     341e8 <_dtoa_r+0x2d8>
   33f9a:	8b 45 24             	mov    0x24(%ebp),%eax
   33f9d:	c7 00 7c 8e 03 00    	movl   $0x38e7c,(%eax)
   33fa3:	b8 7b 8e 03 00       	mov    $0x38e7b,%eax
   33fa8:	81 c4 8c 00 00 00    	add    $0x8c,%esp
   33fae:	5b                   	pop    %ebx
   33faf:	5e                   	pop    %esi
   33fb0:	5f                   	pop    %edi
   33fb1:	5d                   	pop    %ebp
   33fb2:	c3                   	ret    
   33fb3:	90                   	nop
   33fb4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   33fb8:	8d 45 e0             	lea    -0x20(%ebp),%eax
   33fbb:	89 fb                	mov    %edi,%ebx
   33fbd:	89 44 24 10          	mov    %eax,0x10(%esp)
   33fc1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
   33fc4:	dd 54 24 04          	fstl   0x4(%esp)
   33fc8:	89 44 24 0c          	mov    %eax,0xc(%esp)
   33fcc:	dd 5d b8             	fstpl  -0x48(%ebp)
   33fcf:	89 34 24             	mov    %esi,(%esp)
   33fd2:	c1 eb 14             	shr    $0x14,%ebx
   33fd5:	e8 76 25 00 00       	call   36550 <__d2b>
   33fda:	85 db                	test   %ebx,%ebx
   33fdc:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   33fdf:	0f 85 db 01 00 00    	jne    341c0 <_dtoa_r+0x2b0>
   33fe5:	8b 45 e0             	mov    -0x20(%ebp),%eax
   33fe8:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
   33feb:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   33fee:	01 c3                	add    %eax,%ebx
   33ff0:	81 fb ef fb ff ff    	cmp    $0xfffffbef,%ebx
   33ff6:	0f 8c ec 07 00 00    	jl     347e8 <_dtoa_r+0x8d8>
   33ffc:	8b 55 c0             	mov    -0x40(%ebp),%edx
   33fff:	b9 0e fc ff ff       	mov    $0xfffffc0e,%ecx
   34004:	89 f8                	mov    %edi,%eax
   34006:	29 d9                	sub    %ebx,%ecx
   34008:	d3 e0                	shl    %cl,%eax
   3400a:	8d 8b 12 04 00 00    	lea    0x412(%ebx),%ecx
   34010:	d3 ea                	shr    %cl,%edx
   34012:	09 d0                	or     %edx,%eax
   34014:	31 d2                	xor    %edx,%edx
   34016:	83 eb 01             	sub    $0x1,%ebx
   34019:	89 55 cc             	mov    %edx,-0x34(%ebp)
   3401c:	8b 55 b4             	mov    -0x4c(%ebp),%edx
   3401f:	89 45 c8             	mov    %eax,-0x38(%ebp)
   34022:	df 6d c8             	fildll -0x38(%ebp)
   34025:	dd 5d b8             	fstpl  -0x48(%ebp)
   34028:	81 6d bc 00 00 f0 01 	subl   $0x1f00000,-0x44(%ebp)
   3402f:	c7 45 8c 01 00 00 00 	movl   $0x1,-0x74(%ebp)
   34036:	dd 45 b8             	fldl   -0x48(%ebp)
   34039:	d8 25 14 90 03 00    	fsubs  0x39014
   3403f:	89 5d d4             	mov    %ebx,-0x2c(%ebp)
   34042:	d9 7d d2             	fnstcw -0x2e(%ebp)
   34045:	dc 0d 30 90 03 00    	fmull  0x39030
   3404b:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
   3404f:	b4 0c                	mov    $0xc,%ah
   34051:	dc 05 38 90 03 00    	faddl  0x39038
   34057:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
   3405b:	db 45 d4             	fildl  -0x2c(%ebp)
   3405e:	dc 0d 40 90 03 00    	fmull  0x39040
   34064:	de c1                	faddp  %st,%st(1)
   34066:	d9 6d d0             	fldcw  -0x30(%ebp)
   34069:	db 55 b8             	fistl  -0x48(%ebp)
   3406c:	d9 6d d2             	fldcw  -0x2e(%ebp)
   3406f:	d9 ee                	fldz   
   34071:	df e9                	fucomip %st(1),%st
   34073:	0f 87 27 07 00 00    	ja     347a0 <_dtoa_r+0x890>
   34079:	dd d8                	fstp   %st(0)
   3407b:	83 7d b8 16          	cmpl   $0x16,-0x48(%ebp)
   3407f:	c7 45 9c 01 00 00 00 	movl   $0x1,-0x64(%ebp)
   34086:	77 24                	ja     340ac <_dtoa_r+0x19c>
   34088:	8b 45 b8             	mov    -0x48(%ebp),%eax
   3408b:	dd 04 c5 00 91 03 00 	fldl   0x39100(,%eax,8)
   34092:	dd 45 c0             	fldl   -0x40(%ebp)
   34095:	d9 c9                	fxch   %st(1)
   34097:	df e9                	fucomip %st(1),%st
   34099:	dd d8                	fstp   %st(0)
   3409b:	0f 86 5f 07 00 00    	jbe    34800 <_dtoa_r+0x8f0>
   340a1:	83 6d b8 01          	subl   $0x1,-0x48(%ebp)
   340a5:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
   340ac:	89 d0                	mov    %edx,%eax
   340ae:	29 d8                	sub    %ebx,%eax
   340b0:	83 e8 01             	sub    $0x1,%eax
   340b3:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
   340ba:	89 45 ac             	mov    %eax,-0x54(%ebp)
   340bd:	0f 88 0d 07 00 00    	js     347d0 <_dtoa_r+0x8c0>
   340c3:	8b 45 b8             	mov    -0x48(%ebp),%eax
   340c6:	85 c0                	test   %eax,%eax
   340c8:	0f 88 ea 06 00 00    	js     347b8 <_dtoa_r+0x8a8>
   340ce:	01 45 ac             	add    %eax,-0x54(%ebp)
   340d1:	89 45 94             	mov    %eax,-0x6c(%ebp)
   340d4:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
   340db:	83 7d 14 09          	cmpl   $0x9,0x14(%ebp)
   340df:	0f 87 0b 03 00 00    	ja     343f0 <_dtoa_r+0x4e0>
   340e5:	83 7d 14 05          	cmpl   $0x5,0x14(%ebp)
   340e9:	0f 8e 23 10 00 00    	jle    35112 <_dtoa_r+0x1202>
   340ef:	83 6d 14 04          	subl   $0x4,0x14(%ebp)
   340f3:	31 c0                	xor    %eax,%eax
   340f5:	83 7d 14 03          	cmpl   $0x3,0x14(%ebp)
   340f9:	0f 84 43 0d 00 00    	je     34e42 <_dtoa_r+0xf32>
   340ff:	0f 8e f3 00 00 00    	jle    341f8 <_dtoa_r+0x2e8>
   34105:	83 7d 14 04          	cmpl   $0x4,0x14(%ebp)
   34109:	c7 45 98 01 00 00 00 	movl   $0x1,-0x68(%ebp)
   34110:	0f 84 f3 00 00 00    	je     34209 <_dtoa_r+0x2f9>
   34116:	83 7d 14 05          	cmpl   $0x5,0x14(%ebp)
   3411a:	0f 85 d7 02 00 00    	jne    343f7 <_dtoa_r+0x4e7>
   34120:	8b 5d b8             	mov    -0x48(%ebp),%ebx
   34123:	03 5d 18             	add    0x18(%ebp),%ebx
   34126:	89 5d 90             	mov    %ebx,-0x70(%ebp)
   34129:	83 c3 01             	add    $0x1,%ebx
   3412c:	83 fb 0e             	cmp    $0xe,%ebx
   3412f:	0f 96 c2             	setbe  %dl
   34132:	85 db                	test   %ebx,%ebx
   34134:	89 5d a8             	mov    %ebx,-0x58(%ebp)
   34137:	0f 8e a7 08 00 00    	jle    349e4 <_dtoa_r+0xad4>
   3413d:	8b 5d a8             	mov    -0x58(%ebp),%ebx
   34140:	83 fb 0e             	cmp    $0xe,%ebx
   34143:	89 df                	mov    %ebx,%edi
   34145:	0f 96 45 b4          	setbe  -0x4c(%ebp)
   34149:	20 45 b4             	and    %al,-0x4c(%ebp)
   3414c:	e9 d6 00 00 00       	jmp    34227 <_dtoa_r+0x317>
   34151:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   34158:	8b 55 c0             	mov    -0x40(%ebp),%edx
   3415b:	8b 45 1c             	mov    0x1c(%ebp),%eax
   3415e:	85 d2                	test   %edx,%edx
   34160:	c7 00 0f 27 00 00    	movl   $0x270f,(%eax)
   34166:	b8 0d 90 03 00       	mov    $0x3900d,%eax
   3416b:	74 43                	je     341b0 <_dtoa_r+0x2a0>
   3416d:	8b 5d 24             	mov    0x24(%ebp),%ebx
   34170:	85 db                	test   %ebx,%ebx
   34172:	0f 84 30 fe ff ff    	je     33fa8 <_dtoa_r+0x98>
   34178:	8b 75 24             	mov    0x24(%ebp),%esi
   3417b:	8d 50 08             	lea    0x8(%eax),%edx
   3417e:	80 78 03 00          	cmpb   $0x0,0x3(%eax)
   34182:	8d 48 03             	lea    0x3(%eax),%ecx
   34185:	0f 44 d1             	cmove  %ecx,%edx
   34188:	89 16                	mov    %edx,(%esi)
   3418a:	81 c4 8c 00 00 00    	add    $0x8c,%esp
   34190:	5b                   	pop    %ebx
   34191:	5e                   	pop    %esi
   34192:	5f                   	pop    %edi
   34193:	5d                   	pop    %ebp
   34194:	c3                   	ret    
   34195:	8d 76 00             	lea    0x0(%esi),%esi
   34198:	81 e7 ff ff ff 7f    	and    $0x7fffffff,%edi
   3419e:	c7 03 01 00 00 00    	movl   $0x1,(%ebx)
   341a4:	89 7d c4             	mov    %edi,-0x3c(%ebp)
   341a7:	e9 b7 fd ff ff       	jmp    33f63 <_dtoa_r+0x53>
   341ac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   341b0:	81 e7 ff ff 0f 00    	and    $0xfffff,%edi
   341b6:	ba 04 90 03 00       	mov    $0x39004,%edx
   341bb:	0f 44 c2             	cmove  %edx,%eax
   341be:	eb ad                	jmp    3416d <_dtoa_r+0x25d>
   341c0:	8b 45 bc             	mov    -0x44(%ebp),%eax
   341c3:	81 eb ff 03 00 00    	sub    $0x3ff,%ebx
   341c9:	8b 55 e0             	mov    -0x20(%ebp),%edx
   341cc:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
   341d3:	25 ff ff 0f 00       	and    $0xfffff,%eax
   341d8:	0d 00 00 f0 3f       	or     $0x3ff00000,%eax
   341dd:	89 45 bc             	mov    %eax,-0x44(%ebp)
   341e0:	e9 51 fe ff ff       	jmp    34036 <_dtoa_r+0x126>
   341e5:	8d 76 00             	lea    0x0(%esi),%esi
   341e8:	b8 7b 8e 03 00       	mov    $0x38e7b,%eax
   341ed:	e9 b6 fd ff ff       	jmp    33fa8 <_dtoa_r+0x98>
   341f2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   341f8:	83 7d 14 02          	cmpl   $0x2,0x14(%ebp)
   341fc:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
   34203:	0f 85 ee 01 00 00    	jne    343f7 <_dtoa_r+0x4e7>
   34209:	8b 55 18             	mov    0x18(%ebp),%edx
   3420c:	85 d2                	test   %edx,%edx
   3420e:	0f 8e b6 07 00 00    	jle    349ca <_dtoa_r+0xaba>
   34214:	8b 7d 18             	mov    0x18(%ebp),%edi
   34217:	83 ff 0e             	cmp    $0xe,%edi
   3421a:	0f 96 45 b4          	setbe  -0x4c(%ebp)
   3421e:	20 45 b4             	and    %al,-0x4c(%ebp)
   34221:	89 7d 90             	mov    %edi,-0x70(%ebp)
   34224:	89 7d a8             	mov    %edi,-0x58(%ebp)
   34227:	83 ff 17             	cmp    $0x17,%edi
   3422a:	c7 46 44 00 00 00 00 	movl   $0x0,0x44(%esi)
   34231:	0f 86 e5 0e 00 00    	jbe    3511c <_dtoa_r+0x120c>
   34237:	b9 01 00 00 00       	mov    $0x1,%ecx
   3423c:	b8 04 00 00 00       	mov    $0x4,%eax
   34241:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   34248:	01 c0                	add    %eax,%eax
   3424a:	89 ca                	mov    %ecx,%edx
   3424c:	8d 58 14             	lea    0x14(%eax),%ebx
   3424f:	39 fb                	cmp    %edi,%ebx
   34251:	8d 49 01             	lea    0x1(%ecx),%ecx
   34254:	76 f2                	jbe    34248 <_dtoa_r+0x338>
   34256:	89 56 44             	mov    %edx,0x44(%esi)
   34259:	89 54 24 04          	mov    %edx,0x4(%esp)
   3425d:	89 34 24             	mov    %esi,(%esp)
   34260:	e8 db 17 00 00       	call   35a40 <_Balloc>
   34265:	80 7d b4 00          	cmpb   $0x0,-0x4c(%ebp)
   34269:	89 c7                	mov    %eax,%edi
   3426b:	89 46 40             	mov    %eax,0x40(%esi)
   3426e:	0f 84 bb 01 00 00    	je     3442f <_dtoa_r+0x51f>
   34274:	8b 5d b8             	mov    -0x48(%ebp),%ebx
   34277:	dd 45 c0             	fldl   -0x40(%ebp)
   3427a:	85 db                	test   %ebx,%ebx
   3427c:	0f 8e de 07 00 00    	jle    34a60 <_dtoa_r+0xb50>
   34282:	89 d8                	mov    %ebx,%eax
   34284:	83 e0 0f             	and    $0xf,%eax
   34287:	dd 04 c5 00 91 03 00 	fldl   0x39100(,%eax,8)
   3428e:	89 d8                	mov    %ebx,%eax
   34290:	c1 f8 04             	sar    $0x4,%eax
   34293:	a8 10                	test   $0x10,%al
   34295:	0f 84 cd 05 00 00    	je     34868 <_dtoa_r+0x958>
   3429b:	dd 05 e0 90 03 00    	fldl   0x390e0
   342a1:	83 e0 0f             	and    $0xf,%eax
   342a4:	b9 03 00 00 00       	mov    $0x3,%ecx
   342a9:	d8 fa                	fdivr  %st(2),%st
   342ab:	85 c0                	test   %eax,%eax
   342ad:	74 22                	je     342d1 <_dtoa_r+0x3c1>
   342af:	31 d2                	xor    %edx,%edx
   342b1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   342b8:	a8 01                	test   $0x1,%al
   342ba:	74 0e                	je     342ca <_dtoa_r+0x3ba>
   342bc:	d9 c9                	fxch   %st(1)
   342be:	dc 0c d5 c0 90 03 00 	fmull  0x390c0(,%edx,8)
   342c5:	d9 c9                	fxch   %st(1)
   342c7:	83 c1 01             	add    $0x1,%ecx
   342ca:	83 c2 01             	add    $0x1,%edx
   342cd:	d1 f8                	sar    %eax
   342cf:	75 e7                	jne    342b8 <_dtoa_r+0x3a8>
   342d1:	de f1                	fdivp  %st,%st(1)
   342d3:	8b 45 9c             	mov    -0x64(%ebp),%eax
   342d6:	85 c0                	test   %eax,%eax
   342d8:	74 0a                	je     342e4 <_dtoa_r+0x3d4>
   342da:	d9 e8                	fld1   
   342dc:	df e9                	fucomip %st(1),%st
   342de:	0f 87 92 0b 00 00    	ja     34e76 <_dtoa_r+0xf66>
   342e4:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
   342e7:	8b 45 a8             	mov    -0x58(%ebp),%eax
   342ea:	db 45 d4             	fildl  -0x2c(%ebp)
   342ed:	d8 c9                	fmul   %st(1),%st
   342ef:	d8 05 20 90 03 00    	fadds  0x39020
   342f5:	dd 5d c0             	fstpl  -0x40(%ebp)
   342f8:	81 6d c4 00 00 40 03 	subl   $0x3400000,-0x3c(%ebp)
   342ff:	85 c0                	test   %eax,%eax
   34301:	0f 84 89 05 00 00    	je     34890 <_dtoa_r+0x980>
   34307:	8b 45 b8             	mov    -0x48(%ebp),%eax
   3430a:	8b 4d a8             	mov    -0x58(%ebp),%ecx
   3430d:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   34310:	8b 45 98             	mov    -0x68(%ebp),%eax
   34313:	85 c0                	test   %eax,%eax
   34315:	0f 84 b5 07 00 00    	je     34ad0 <_dtoa_r+0xbc0>
   3431b:	d9 05 28 90 03 00    	flds   0x39028
   34321:	8d 57 01             	lea    0x1(%edi),%edx
   34324:	dc 34 cd f8 90 03 00 	fdivl  0x390f8(,%ecx,8)
   3432b:	d9 7d d2             	fnstcw -0x2e(%ebp)
   3432e:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
   34332:	b4 0c                	mov    $0xc,%ah
   34334:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
   34338:	dc 65 c0             	fsubl  -0x40(%ebp)
   3433b:	d9 c9                	fxch   %st(1)
   3433d:	d9 6d d0             	fldcw  -0x30(%ebp)
   34340:	db 55 d4             	fistl  -0x2c(%ebp)
   34343:	d9 6d d2             	fldcw  -0x2e(%ebp)
   34346:	8b 45 d4             	mov    -0x2c(%ebp),%eax
   34349:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   3434c:	83 c0 30             	add    $0x30,%eax
   3434f:	db 45 d4             	fildl  -0x2c(%ebp)
   34352:	de e9                	fsubrp %st,%st(1)
   34354:	d9 c9                	fxch   %st(1)
   34356:	88 07                	mov    %al,(%edi)
   34358:	db e9                	fucomi %st(1),%st
   3435a:	77 7f                	ja     343db <_dtoa_r+0x4cb>
   3435c:	d9 c1                	fld    %st(1)
   3435e:	d8 2d 18 90 03 00    	fsubrs 0x39018
   34364:	d9 c9                	fxch   %st(1)
   34366:	db e9                	fucomi %st(1),%st
   34368:	dd d9                	fstp   %st(1)
   3436a:	0f 87 33 0c 00 00    	ja     34fa3 <_dtoa_r+0x1093>
   34370:	83 f9 01             	cmp    $0x1,%ecx
   34373:	0f 8e c4 06 00 00    	jle    34a3d <_dtoa_r+0xb2d>
   34379:	01 f9                	add    %edi,%ecx
   3437b:	d9 05 1c 90 03 00    	flds   0x3901c
   34381:	eb 25                	jmp    343a8 <_dtoa_r+0x498>
   34383:	90                   	nop
   34384:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34388:	d9 c1                	fld    %st(1)
   3438a:	d8 2d 18 90 03 00    	fsubrs 0x39018
   34390:	d9 c9                	fxch   %st(1)
   34392:	db e9                	fucomi %st(1),%st
   34394:	dd d9                	fstp   %st(1)
   34396:	0f 87 14 0c 00 00    	ja     34fb0 <_dtoa_r+0x10a0>
   3439c:	39 ca                	cmp    %ecx,%edx
   3439e:	0f 84 a4 06 00 00    	je     34a48 <_dtoa_r+0xb38>
   343a4:	d9 c9                	fxch   %st(1)
   343a6:	d9 ca                	fxch   %st(2)
   343a8:	dc c9                	fmul   %st,%st(1)
   343aa:	83 c2 01             	add    $0x1,%edx
   343ad:	dc ca                	fmul   %st,%st(2)
   343af:	d9 ca                	fxch   %st(2)
   343b1:	d9 6d d0             	fldcw  -0x30(%ebp)
   343b4:	db 55 d4             	fistl  -0x2c(%ebp)
   343b7:	d9 6d d2             	fldcw  -0x2e(%ebp)
   343ba:	8b 45 d4             	mov    -0x2c(%ebp),%eax
   343bd:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   343c0:	83 c0 30             	add    $0x30,%eax
   343c3:	db 45 d4             	fildl  -0x2c(%ebp)
   343c6:	de e9                	fsubrp %st,%st(1)
   343c8:	d9 c9                	fxch   %st(1)
   343ca:	88 42 ff             	mov    %al,-0x1(%edx)
   343cd:	db e9                	fucomi %st(1),%st
   343cf:	76 b7                	jbe    34388 <_dtoa_r+0x478>
   343d1:	dd d8                	fstp   %st(0)
   343d3:	dd d8                	fstp   %st(0)
   343d5:	dd d8                	fstp   %st(0)
   343d7:	dd d8                	fstp   %st(0)
   343d9:	eb 06                	jmp    343e1 <_dtoa_r+0x4d1>
   343db:	dd d8                	fstp   %st(0)
   343dd:	dd d8                	fstp   %st(0)
   343df:	dd d8                	fstp   %st(0)
   343e1:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   343e4:	89 fb                	mov    %edi,%ebx
   343e6:	89 d7                	mov    %edx,%edi
   343e8:	89 45 b8             	mov    %eax,-0x48(%ebp)
   343eb:	e9 70 03 00 00       	jmp    34760 <_dtoa_r+0x850>
   343f0:	c7 45 14 00 00 00 00 	movl   $0x0,0x14(%ebp)
   343f7:	c7 46 44 00 00 00 00 	movl   $0x0,0x44(%esi)
   343fe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   34405:	00 
   34406:	89 34 24             	mov    %esi,(%esp)
   34409:	e8 32 16 00 00       	call   35a40 <_Balloc>
   3440e:	c7 45 98 01 00 00 00 	movl   $0x1,-0x68(%ebp)
   34415:	c7 45 a8 ff ff ff ff 	movl   $0xffffffff,-0x58(%ebp)
   3441c:	c7 45 90 ff ff ff ff 	movl   $0xffffffff,-0x70(%ebp)
   34423:	c7 45 18 00 00 00 00 	movl   $0x0,0x18(%ebp)
   3442a:	89 c7                	mov    %eax,%edi
   3442c:	89 46 40             	mov    %eax,0x40(%esi)
   3442f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   34432:	85 c0                	test   %eax,%eax
   34434:	0f 88 2e 01 00 00    	js     34568 <_dtoa_r+0x658>
   3443a:	83 7d b8 0e          	cmpl   $0xe,-0x48(%ebp)
   3443e:	0f 8f 24 01 00 00    	jg     34568 <_dtoa_r+0x658>
   34444:	8b 45 b8             	mov    -0x48(%ebp),%eax
   34447:	dd 04 c5 00 91 03 00 	fldl   0x39100(,%eax,8)
   3444e:	8b 45 a8             	mov    -0x58(%ebp),%eax
   34451:	85 c0                	test   %eax,%eax
   34453:	7f 0e                	jg     34463 <_dtoa_r+0x553>
   34455:	8b 45 18             	mov    0x18(%ebp),%eax
   34458:	c1 e8 1f             	shr    $0x1f,%eax
   3445b:	84 c0                	test   %al,%al
   3445d:	0f 85 9d 07 00 00    	jne    34c00 <_dtoa_r+0xcf0>
   34463:	dd 45 c0             	fldl   -0x40(%ebp)
   34466:	d9 c0                	fld    %st(0)
   34468:	d8 f2                	fdiv   %st(2),%st
   3446a:	d9 7d d2             	fnstcw -0x2e(%ebp)
   3446d:	83 7d a8 01          	cmpl   $0x1,-0x58(%ebp)
   34471:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
   34475:	b4 0c                	mov    $0xc,%ah
   34477:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
   3447b:	8d 47 01             	lea    0x1(%edi),%eax
   3447e:	89 45 c0             	mov    %eax,-0x40(%ebp)
   34481:	d9 6d d0             	fldcw  -0x30(%ebp)
   34484:	db 5d d4             	fistpl -0x2c(%ebp)
   34487:	d9 6d d2             	fldcw  -0x2e(%ebp)
   3448a:	8b 55 d4             	mov    -0x2c(%ebp),%edx
   3448d:	89 55 d4             	mov    %edx,-0x2c(%ebp)
   34490:	8d 42 30             	lea    0x30(%edx),%eax
   34493:	db 45 d4             	fildl  -0x2c(%ebp)
   34496:	d8 ca                	fmul   %st(2),%st
   34498:	88 07                	mov    %al,(%edi)
   3449a:	de e9                	fsubrp %st,%st(1)
   3449c:	74 66                	je     34504 <_dtoa_r+0x5f4>
   3449e:	d8 0d 1c 90 03 00    	fmuls  0x3901c
   344a4:	d9 ee                	fldz   
   344a6:	d9 c9                	fxch   %st(1)
   344a8:	db e9                	fucomi %st(1),%st
   344aa:	dd d9                	fstp   %st(1)
   344ac:	0f 8b 33 0c 00 00    	jnp    350e5 <_dtoa_r+0x11d5>
   344b2:	8b 5d a8             	mov    -0x58(%ebp),%ebx
   344b5:	8d 47 02             	lea    0x2(%edi),%eax
   344b8:	d9 05 1c 90 03 00    	flds   0x3901c
   344be:	01 fb                	add    %edi,%ebx
   344c0:	eb 19                	jmp    344db <_dtoa_r+0x5cb>
   344c2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   344c8:	dc c9                	fmul   %st,%st(1)
   344ca:	83 c0 01             	add    $0x1,%eax
   344cd:	d9 ee                	fldz   
   344cf:	d9 ca                	fxch   %st(2)
   344d1:	db ea                	fucomi %st(2),%st
   344d3:	dd da                	fstp   %st(2)
   344d5:	0f 8b 73 09 00 00    	jnp    34e4e <_dtoa_r+0xf3e>
   344db:	d9 c1                	fld    %st(1)
   344dd:	39 d8                	cmp    %ebx,%eax
   344df:	d8 f3                	fdiv   %st(3),%st
   344e1:	89 45 c0             	mov    %eax,-0x40(%ebp)
   344e4:	d9 6d d0             	fldcw  -0x30(%ebp)
   344e7:	db 5d d4             	fistpl -0x2c(%ebp)
   344ea:	d9 6d d2             	fldcw  -0x2e(%ebp)
   344ed:	8b 55 d4             	mov    -0x2c(%ebp),%edx
   344f0:	89 55 d4             	mov    %edx,-0x2c(%ebp)
   344f3:	8d 4a 30             	lea    0x30(%edx),%ecx
   344f6:	db 45 d4             	fildl  -0x2c(%ebp)
   344f9:	d8 cb                	fmul   %st(3),%st
   344fb:	88 48 ff             	mov    %cl,-0x1(%eax)
   344fe:	de ea                	fsubrp %st,%st(2)
   34500:	75 c6                	jne    344c8 <_dtoa_r+0x5b8>
   34502:	dd d8                	fstp   %st(0)
   34504:	d8 c0                	fadd   %st(0),%st
   34506:	db e9                	fucomi %st(1),%st
   34508:	77 1e                	ja     34528 <_dtoa_r+0x618>
   3450a:	d9 c9                	fxch   %st(1)
   3450c:	df e9                	fucomip %st(1),%st
   3450e:	dd d8                	fstp   %st(0)
   34510:	0f 8a 44 09 00 00    	jp     34e5a <_dtoa_r+0xf4a>
   34516:	0f 85 3e 09 00 00    	jne    34e5a <_dtoa_r+0xf4a>
   3451c:	83 e2 01             	and    $0x1,%edx
   3451f:	90                   	nop
   34520:	0f 84 34 09 00 00    	je     34e5a <_dtoa_r+0xf4a>
   34526:	eb 04                	jmp    3452c <_dtoa_r+0x61c>
   34528:	dd d8                	fstp   %st(0)
   3452a:	dd d8                	fstp   %st(0)
   3452c:	8b 4d c0             	mov    -0x40(%ebp),%ecx
   3452f:	89 fb                	mov    %edi,%ebx
   34531:	0f b6 41 ff          	movzbl -0x1(%ecx),%eax
   34535:	89 cf                	mov    %ecx,%edi
   34537:	8b 4d b8             	mov    -0x48(%ebp),%ecx
   3453a:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
   3453d:	eb 0f                	jmp    3454e <_dtoa_r+0x63e>
   3453f:	90                   	nop
   34540:	39 d3                	cmp    %edx,%ebx
   34542:	0f 84 75 09 00 00    	je     34ebd <_dtoa_r+0xfad>
   34548:	0f b6 42 ff          	movzbl -0x1(%edx),%eax
   3454c:	89 d7                	mov    %edx,%edi
   3454e:	3c 39                	cmp    $0x39,%al
   34550:	8d 57 ff             	lea    -0x1(%edi),%edx
   34553:	74 eb                	je     34540 <_dtoa_r+0x630>
   34555:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
   34558:	83 c0 01             	add    $0x1,%eax
   3455b:	88 02                	mov    %al,(%edx)
   3455d:	89 4d b8             	mov    %ecx,-0x48(%ebp)
   34560:	e9 fb 01 00 00       	jmp    34760 <_dtoa_r+0x850>
   34565:	8d 76 00             	lea    0x0(%esi),%esi
   34568:	8b 4d 98             	mov    -0x68(%ebp),%ecx
   3456b:	85 c9                	test   %ecx,%ecx
   3456d:	0f 85 9d 02 00 00    	jne    34810 <_dtoa_r+0x900>
   34573:	8b 55 b0             	mov    -0x50(%ebp),%edx
   34576:	8b 5d a0             	mov    -0x60(%ebp),%ebx
   34579:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
   34580:	8b 45 ac             	mov    -0x54(%ebp),%eax
   34583:	85 c0                	test   %eax,%eax
   34585:	7e 14                	jle    3459b <_dtoa_r+0x68b>
   34587:	85 db                	test   %ebx,%ebx
   34589:	7e 10                	jle    3459b <_dtoa_r+0x68b>
   3458b:	8b 45 ac             	mov    -0x54(%ebp),%eax
   3458e:	39 d8                	cmp    %ebx,%eax
   34590:	0f 4f c3             	cmovg  %ebx,%eax
   34593:	29 45 a0             	sub    %eax,-0x60(%ebp)
   34596:	29 c3                	sub    %eax,%ebx
   34598:	29 45 ac             	sub    %eax,-0x54(%ebp)
   3459b:	8b 45 b0             	mov    -0x50(%ebp),%eax
   3459e:	85 c0                	test   %eax,%eax
   345a0:	7e 61                	jle    34603 <_dtoa_r+0x6f3>
   345a2:	8b 45 98             	mov    -0x68(%ebp),%eax
   345a5:	85 c0                	test   %eax,%eax
   345a7:	0f 84 72 04 00 00    	je     34a1f <_dtoa_r+0xb0f>
   345ad:	85 d2                	test   %edx,%edx
   345af:	7e 47                	jle    345f8 <_dtoa_r+0x6e8>
   345b1:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   345b4:	89 54 24 08          	mov    %edx,0x8(%esp)
   345b8:	89 34 24             	mov    %esi,(%esp)
   345bb:	89 55 88             	mov    %edx,-0x78(%ebp)
   345be:	89 44 24 04          	mov    %eax,0x4(%esp)
   345c2:	e8 f9 19 00 00       	call   35fc0 <__pow5mult>
   345c7:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
   345ca:	89 34 24             	mov    %esi,(%esp)
   345cd:	89 4c 24 08          	mov    %ecx,0x8(%esp)
   345d1:	89 44 24 04          	mov    %eax,0x4(%esp)
   345d5:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   345d8:	e8 13 18 00 00       	call   35df0 <__multiply>
   345dd:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
   345e0:	89 34 24             	mov    %esi,(%esp)
   345e3:	89 4c 24 04          	mov    %ecx,0x4(%esp)
   345e7:	89 45 8c             	mov    %eax,-0x74(%ebp)
   345ea:	e8 f1 14 00 00       	call   35ae0 <_Bfree>
   345ef:	8b 45 8c             	mov    -0x74(%ebp),%eax
   345f2:	8b 55 88             	mov    -0x78(%ebp),%edx
   345f5:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   345f8:	8b 45 b0             	mov    -0x50(%ebp),%eax
   345fb:	29 d0                	sub    %edx,%eax
   345fd:	0f 85 1f 04 00 00    	jne    34a22 <_dtoa_r+0xb12>
   34603:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
   3460a:	00 
   3460b:	89 34 24             	mov    %esi,(%esp)
   3460e:	e8 ad 17 00 00       	call   35dc0 <__i2b>
   34613:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
   34616:	85 c9                	test   %ecx,%ecx
   34618:	89 45 b0             	mov    %eax,-0x50(%ebp)
   3461b:	7e 13                	jle    34630 <_dtoa_r+0x720>
   3461d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
   34621:	89 44 24 04          	mov    %eax,0x4(%esp)
   34625:	89 34 24             	mov    %esi,(%esp)
   34628:	e8 93 19 00 00       	call   35fc0 <__pow5mult>
   3462d:	89 45 b0             	mov    %eax,-0x50(%ebp)
   34630:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
   34634:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
   3463b:	0f 8e f7 05 00 00    	jle    34c38 <_dtoa_r+0xd28>
   34641:	8b 45 94             	mov    -0x6c(%ebp),%eax
   34644:	ba 01 00 00 00       	mov    $0x1,%edx
   34649:	85 c0                	test   %eax,%eax
   3464b:	0f 85 27 05 00 00    	jne    34b78 <_dtoa_r+0xc68>
   34651:	8b 45 ac             	mov    -0x54(%ebp),%eax
   34654:	01 d0                	add    %edx,%eax
   34656:	83 e0 1f             	and    $0x1f,%eax
   34659:	89 c2                	mov    %eax,%edx
   3465b:	0f 84 57 03 00 00    	je     349b8 <_dtoa_r+0xaa8>
   34661:	b8 20 00 00 00       	mov    $0x20,%eax
   34666:	29 d0                	sub    %edx,%eax
   34668:	83 f8 04             	cmp    $0x4,%eax
   3466b:	0f 8e 8c 0a 00 00    	jle    350fd <_dtoa_r+0x11ed>
   34671:	b8 1c 00 00 00       	mov    $0x1c,%eax
   34676:	29 d0                	sub    %edx,%eax
   34678:	01 45 a0             	add    %eax,-0x60(%ebp)
   3467b:	01 c3                	add    %eax,%ebx
   3467d:	01 45 ac             	add    %eax,-0x54(%ebp)
   34680:	8b 45 a0             	mov    -0x60(%ebp),%eax
   34683:	85 c0                	test   %eax,%eax
   34685:	7e 16                	jle    3469d <_dtoa_r+0x78d>
   34687:	89 44 24 08          	mov    %eax,0x8(%esp)
   3468b:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   3468e:	89 34 24             	mov    %esi,(%esp)
   34691:	89 44 24 04          	mov    %eax,0x4(%esp)
   34695:	e8 46 1a 00 00       	call   360e0 <__lshift>
   3469a:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   3469d:	8b 45 ac             	mov    -0x54(%ebp),%eax
   346a0:	85 c0                	test   %eax,%eax
   346a2:	7e 16                	jle    346ba <_dtoa_r+0x7aa>
   346a4:	89 44 24 08          	mov    %eax,0x8(%esp)
   346a8:	8b 45 b0             	mov    -0x50(%ebp),%eax
   346ab:	89 34 24             	mov    %esi,(%esp)
   346ae:	89 44 24 04          	mov    %eax,0x4(%esp)
   346b2:	e8 29 1a 00 00       	call   360e0 <__lshift>
   346b7:	89 45 b0             	mov    %eax,-0x50(%ebp)
   346ba:	8b 45 9c             	mov    -0x64(%ebp),%eax
   346bd:	85 c0                	test   %eax,%eax
   346bf:	0f 85 d3 04 00 00    	jne    34b98 <_dtoa_r+0xc88>
   346c5:	83 7d 14 02          	cmpl   $0x2,0x14(%ebp)
   346c9:	0f 8e 11 02 00 00    	jle    348e0 <_dtoa_r+0x9d0>
   346cf:	8b 45 a8             	mov    -0x58(%ebp),%eax
   346d2:	85 c0                	test   %eax,%eax
   346d4:	0f 8f 06 02 00 00    	jg     348e0 <_dtoa_r+0x9d0>
   346da:	8b 45 a8             	mov    -0x58(%ebp),%eax
   346dd:	85 c0                	test   %eax,%eax
   346df:	0f 85 e0 01 00 00    	jne    348c5 <_dtoa_r+0x9b5>
   346e5:	8b 45 b0             	mov    -0x50(%ebp),%eax
   346e8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   346ef:	00 
   346f0:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
   346f7:	00 
   346f8:	89 34 24             	mov    %esi,(%esp)
   346fb:	89 44 24 04          	mov    %eax,0x4(%esp)
   346ff:	e8 fc 13 00 00       	call   35b00 <__multadd>
   34704:	89 45 b0             	mov    %eax,-0x50(%ebp)
   34707:	89 44 24 04          	mov    %eax,0x4(%esp)
   3470b:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   3470e:	89 04 24             	mov    %eax,(%esp)
   34711:	e8 ea 1a 00 00       	call   36200 <__mcmp>
   34716:	85 c0                	test   %eax,%eax
   34718:	0f 8e a7 01 00 00    	jle    348c5 <_dtoa_r+0x9b5>
   3471e:	83 45 b8 01          	addl   $0x1,-0x48(%ebp)
   34722:	89 fb                	mov    %edi,%ebx
   34724:	83 c7 01             	add    $0x1,%edi
   34727:	c6 47 ff 31          	movb   $0x31,-0x1(%edi)
   3472b:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
   34732:	8b 45 b0             	mov    -0x50(%ebp),%eax
   34735:	89 34 24             	mov    %esi,(%esp)
   34738:	89 44 24 04          	mov    %eax,0x4(%esp)
   3473c:	e8 9f 13 00 00       	call   35ae0 <_Bfree>
   34741:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   34744:	85 c0                	test   %eax,%eax
   34746:	74 18                	je     34760 <_dtoa_r+0x850>
   34748:	39 45 c0             	cmp    %eax,-0x40(%ebp)
   3474b:	0f 85 a7 02 00 00    	jne    349f8 <_dtoa_r+0xae8>
   34751:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   34754:	89 34 24             	mov    %esi,(%esp)
   34757:	89 44 24 04          	mov    %eax,0x4(%esp)
   3475b:	e8 80 13 00 00       	call   35ae0 <_Bfree>
   34760:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   34763:	89 34 24             	mov    %esi,(%esp)
   34766:	89 44 24 04          	mov    %eax,0x4(%esp)
   3476a:	e8 71 13 00 00       	call   35ae0 <_Bfree>
   3476f:	8b 45 b8             	mov    -0x48(%ebp),%eax
   34772:	8b 75 1c             	mov    0x1c(%ebp),%esi
   34775:	c6 07 00             	movb   $0x0,(%edi)
   34778:	83 c0 01             	add    $0x1,%eax
   3477b:	89 06                	mov    %eax,(%esi)
   3477d:	8b 45 24             	mov    0x24(%ebp),%eax
   34780:	85 c0                	test   %eax,%eax
   34782:	0f 84 90 02 00 00    	je     34a18 <_dtoa_r+0xb08>
   34788:	8b 45 24             	mov    0x24(%ebp),%eax
   3478b:	89 38                	mov    %edi,(%eax)
   3478d:	81 c4 8c 00 00 00    	add    $0x8c,%esp
   34793:	89 d8                	mov    %ebx,%eax
   34795:	5b                   	pop    %ebx
   34796:	5e                   	pop    %esi
   34797:	5f                   	pop    %edi
   34798:	5d                   	pop    %ebp
   34799:	c3                   	ret    
   3479a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   347a0:	db 45 b8             	fildl  -0x48(%ebp)
   347a3:	df e9                	fucomip %st(1),%st
   347a5:	dd d8                	fstp   %st(0)
   347a7:	7a 06                	jp     347af <_dtoa_r+0x89f>
   347a9:	0f 84 cc f8 ff ff    	je     3407b <_dtoa_r+0x16b>
   347af:	83 6d b8 01          	subl   $0x1,-0x48(%ebp)
   347b3:	e9 c3 f8 ff ff       	jmp    3407b <_dtoa_r+0x16b>
   347b8:	8b 45 b8             	mov    -0x48(%ebp),%eax
   347bb:	29 45 a0             	sub    %eax,-0x60(%ebp)
   347be:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
   347c5:	f7 d8                	neg    %eax
   347c7:	89 45 b0             	mov    %eax,-0x50(%ebp)
   347ca:	e9 0c f9 ff ff       	jmp    340db <_dtoa_r+0x1cb>
   347cf:	90                   	nop
   347d0:	f7 d8                	neg    %eax
   347d2:	89 45 a0             	mov    %eax,-0x60(%ebp)
   347d5:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
   347dc:	e9 e2 f8 ff ff       	jmp    340c3 <_dtoa_r+0x1b3>
   347e1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   347e8:	8b 45 c0             	mov    -0x40(%ebp),%eax
   347eb:	b9 ee fb ff ff       	mov    $0xfffffbee,%ecx
   347f0:	29 d9                	sub    %ebx,%ecx
   347f2:	d3 e0                	shl    %cl,%eax
   347f4:	e9 1b f8 ff ff       	jmp    34014 <_dtoa_r+0x104>
   347f9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   34800:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
   34807:	e9 a0 f8 ff ff       	jmp    340ac <_dtoa_r+0x19c>
   3480c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34810:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
   34814:	0f 8e fe 06 00 00    	jle    34f18 <_dtoa_r+0x1008>
   3481a:	8b 45 a8             	mov    -0x58(%ebp),%eax
   3481d:	83 e8 01             	sub    $0x1,%eax
   34820:	39 45 b0             	cmp    %eax,-0x50(%ebp)
   34823:	0f 8c 3b 06 00 00    	jl     34e64 <_dtoa_r+0xf54>
   34829:	8b 55 b0             	mov    -0x50(%ebp),%edx
   3482c:	29 c2                	sub    %eax,%edx
   3482e:	8b 4d a8             	mov    -0x58(%ebp),%ecx
   34831:	8b 5d a0             	mov    -0x60(%ebp),%ebx
   34834:	85 c9                	test   %ecx,%ecx
   34836:	89 c8                	mov    %ecx,%eax
   34838:	0f 88 83 07 00 00    	js     34fc1 <_dtoa_r+0x10b1>
   3483e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
   34845:	00 
   34846:	89 34 24             	mov    %esi,(%esp)
   34849:	89 55 8c             	mov    %edx,-0x74(%ebp)
   3484c:	01 45 a0             	add    %eax,-0x60(%ebp)
   3484f:	01 45 ac             	add    %eax,-0x54(%ebp)
   34852:	e8 69 15 00 00       	call   35dc0 <__i2b>
   34857:	8b 55 8c             	mov    -0x74(%ebp),%edx
   3485a:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   3485d:	e9 1e fd ff ff       	jmp    34580 <_dtoa_r+0x670>
   34862:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   34868:	d9 c1                	fld    %st(1)
   3486a:	b9 02 00 00 00       	mov    $0x2,%ecx
   3486f:	e9 37 fa ff ff       	jmp    342ab <_dtoa_r+0x39b>
   34874:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
   34877:	db 45 d4             	fildl  -0x2c(%ebp)
   3487a:	d8 c9                	fmul   %st(1),%st
   3487c:	d8 05 20 90 03 00    	fadds  0x39020
   34882:	dd 5d c0             	fstpl  -0x40(%ebp)
   34885:	81 6d c4 00 00 40 03 	subl   $0x3400000,-0x3c(%ebp)
   3488c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34890:	d8 25 24 90 03 00    	fsubs  0x39024
   34896:	dd 45 c0             	fldl   -0x40(%ebp)
   34899:	d9 c9                	fxch   %st(1)
   3489b:	db e9                	fucomi %st(1),%st
   3489d:	0f 87 0d 02 00 00    	ja     34ab0 <_dtoa_r+0xba0>
   348a3:	d9 c9                	fxch   %st(1)
   348a5:	d9 e0                	fchs   
   348a7:	df e9                	fucomip %st(1),%st
   348a9:	dd d8                	fstp   %st(0)
   348ab:	0f 86 a7 01 00 00    	jbe    34a58 <_dtoa_r+0xb48>
   348b1:	dd d8                	fstp   %st(0)
   348b3:	eb 02                	jmp    348b7 <_dtoa_r+0x9a7>
   348b5:	dd d8                	fstp   %st(0)
   348b7:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
   348be:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
   348c5:	8b 45 18             	mov    0x18(%ebp),%eax
   348c8:	89 fb                	mov    %edi,%ebx
   348ca:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
   348d1:	f7 d0                	not    %eax
   348d3:	89 45 b8             	mov    %eax,-0x48(%ebp)
   348d6:	e9 57 fe ff ff       	jmp    34732 <_dtoa_r+0x822>
   348db:	90                   	nop
   348dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   348e0:	8b 45 98             	mov    -0x68(%ebp),%eax
   348e3:	85 c0                	test   %eax,%eax
   348e5:	0f 85 c5 03 00 00    	jne    34cb0 <_dtoa_r+0xda0>
   348eb:	89 75 08             	mov    %esi,0x8(%ebp)
   348ee:	bb 01 00 00 00       	mov    $0x1,%ebx
   348f3:	8b 75 a4             	mov    -0x5c(%ebp),%esi
   348f6:	eb 24                	jmp    3491c <_dtoa_r+0xa0c>
   348f8:	8b 45 08             	mov    0x8(%ebp),%eax
   348fb:	83 c3 01             	add    $0x1,%ebx
   348fe:	89 74 24 04          	mov    %esi,0x4(%esp)
   34902:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   34909:	00 
   3490a:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   34911:	00 
   34912:	89 04 24             	mov    %eax,(%esp)
   34915:	e8 e6 11 00 00       	call   35b00 <__multadd>
   3491a:	89 c6                	mov    %eax,%esi
   3491c:	8b 55 b0             	mov    -0x50(%ebp),%edx
   3491f:	89 f0                	mov    %esi,%eax
   34921:	e8 1a f4 ff ff       	call   33d40 <quorem>
   34926:	83 c0 30             	add    $0x30,%eax
   34929:	3b 5d a8             	cmp    -0x58(%ebp),%ebx
   3492c:	88 44 1f ff          	mov    %al,-0x1(%edi,%ebx,1)
   34930:	7c c6                	jl     348f8 <_dtoa_r+0x9e8>
   34932:	89 45 a0             	mov    %eax,-0x60(%ebp)
   34935:	8b 45 a8             	mov    -0x58(%ebp),%eax
   34938:	ba 01 00 00 00       	mov    $0x1,%edx
   3493d:	89 75 a4             	mov    %esi,-0x5c(%ebp)
   34940:	8b 75 08             	mov    0x8(%ebp),%esi
   34943:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
   3494a:	85 c0                	test   %eax,%eax
   3494c:	0f 4f d0             	cmovg  %eax,%edx
   3494f:	01 fa                	add    %edi,%edx
   34951:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   34954:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
   3495b:	00 
   3495c:	89 34 24             	mov    %esi,(%esp)
   3495f:	89 55 ac             	mov    %edx,-0x54(%ebp)
   34962:	89 44 24 04          	mov    %eax,0x4(%esp)
   34966:	e8 75 17 00 00       	call   360e0 <__lshift>
   3496b:	8b 5d b0             	mov    -0x50(%ebp),%ebx
   3496e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
   34972:	89 04 24             	mov    %eax,(%esp)
   34975:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   34978:	e8 83 18 00 00       	call   36200 <__mcmp>
   3497d:	8b 55 ac             	mov    -0x54(%ebp),%edx
   34980:	83 f8 00             	cmp    $0x0,%eax
   34983:	0f 8e 41 06 00 00    	jle    34fca <_dtoa_r+0x10ba>
   34989:	0f b6 4a ff          	movzbl -0x1(%edx),%ecx
   3498d:	eb 0f                	jmp    3499e <_dtoa_r+0xa8e>
   3498f:	90                   	nop
   34990:	39 c7                	cmp    %eax,%edi
   34992:	0f 84 70 05 00 00    	je     34f08 <_dtoa_r+0xff8>
   34998:	0f b6 48 ff          	movzbl -0x1(%eax),%ecx
   3499c:	89 c2                	mov    %eax,%edx
   3499e:	80 f9 39             	cmp    $0x39,%cl
   349a1:	8d 42 ff             	lea    -0x1(%edx),%eax
   349a4:	74 ea                	je     34990 <_dtoa_r+0xa80>
   349a6:	83 c1 01             	add    $0x1,%ecx
   349a9:	89 fb                	mov    %edi,%ebx
   349ab:	88 08                	mov    %cl,(%eax)
   349ad:	89 d7                	mov    %edx,%edi
   349af:	e9 7e fd ff ff       	jmp    34732 <_dtoa_r+0x822>
   349b4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   349b8:	b8 1c 00 00 00       	mov    $0x1c,%eax
   349bd:	01 45 a0             	add    %eax,-0x60(%ebp)
   349c0:	01 c3                	add    %eax,%ebx
   349c2:	01 45 ac             	add    %eax,-0x54(%ebp)
   349c5:	e9 b6 fc ff ff       	jmp    34680 <_dtoa_r+0x770>
   349ca:	ba 01 00 00 00       	mov    $0x1,%edx
   349cf:	c7 45 90 01 00 00 00 	movl   $0x1,-0x70(%ebp)
   349d6:	c7 45 a8 01 00 00 00 	movl   $0x1,-0x58(%ebp)
   349dd:	c7 45 18 01 00 00 00 	movl   $0x1,0x18(%ebp)
   349e4:	21 c2                	and    %eax,%edx
   349e6:	88 55 b4             	mov    %dl,-0x4c(%ebp)
   349e9:	31 d2                	xor    %edx,%edx
   349eb:	c7 46 44 00 00 00 00 	movl   $0x0,0x44(%esi)
   349f2:	e9 62 f8 ff ff       	jmp    34259 <_dtoa_r+0x349>
   349f7:	90                   	nop
   349f8:	8b 55 c0             	mov    -0x40(%ebp),%edx
   349fb:	85 d2                	test   %edx,%edx
   349fd:	0f 84 4e fd ff ff    	je     34751 <_dtoa_r+0x841>
   34a03:	8b 45 c0             	mov    -0x40(%ebp),%eax
   34a06:	89 34 24             	mov    %esi,(%esp)
   34a09:	89 44 24 04          	mov    %eax,0x4(%esp)
   34a0d:	e8 ce 10 00 00       	call   35ae0 <_Bfree>
   34a12:	e9 3a fd ff ff       	jmp    34751 <_dtoa_r+0x841>
   34a17:	90                   	nop
   34a18:	89 d8                	mov    %ebx,%eax
   34a1a:	e9 89 f5 ff ff       	jmp    33fa8 <_dtoa_r+0x98>
   34a1f:	8b 45 b0             	mov    -0x50(%ebp),%eax
   34a22:	89 44 24 08          	mov    %eax,0x8(%esp)
   34a26:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   34a29:	89 34 24             	mov    %esi,(%esp)
   34a2c:	89 44 24 04          	mov    %eax,0x4(%esp)
   34a30:	e8 8b 15 00 00       	call   35fc0 <__pow5mult>
   34a35:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   34a38:	e9 c6 fb ff ff       	jmp    34603 <_dtoa_r+0x6f3>
   34a3d:	dd d8                	fstp   %st(0)
   34a3f:	dd d8                	fstp   %st(0)
   34a41:	eb 15                	jmp    34a58 <_dtoa_r+0xb48>
   34a43:	90                   	nop
   34a44:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34a48:	dd d8                	fstp   %st(0)
   34a4a:	dd d8                	fstp   %st(0)
   34a4c:	dd d8                	fstp   %st(0)
   34a4e:	eb 08                	jmp    34a58 <_dtoa_r+0xb48>
   34a50:	dd d8                	fstp   %st(0)
   34a52:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   34a58:	dd 5d c0             	fstpl  -0x40(%ebp)
   34a5b:	e9 cf f9 ff ff       	jmp    3442f <_dtoa_r+0x51f>
   34a60:	8b 45 b8             	mov    -0x48(%ebp),%eax
   34a63:	f7 d8                	neg    %eax
   34a65:	0f 84 6a 04 00 00    	je     34ed5 <_dtoa_r+0xfc5>
   34a6b:	89 c2                	mov    %eax,%edx
   34a6d:	b9 02 00 00 00       	mov    $0x2,%ecx
   34a72:	83 e2 0f             	and    $0xf,%edx
   34a75:	c1 f8 04             	sar    $0x4,%eax
   34a78:	dd 04 d5 00 91 03 00 	fldl   0x39100(,%edx,8)
   34a7f:	85 c0                	test   %eax,%eax
   34a81:	d8 c9                	fmul   %st(1),%st
   34a83:	0f 84 4a f8 ff ff    	je     342d3 <_dtoa_r+0x3c3>
   34a89:	31 d2                	xor    %edx,%edx
   34a8b:	90                   	nop
   34a8c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34a90:	a8 01                	test   $0x1,%al
   34a92:	74 0a                	je     34a9e <_dtoa_r+0xb8e>
   34a94:	dc 0c d5 c0 90 03 00 	fmull  0x390c0(,%edx,8)
   34a9b:	83 c1 01             	add    $0x1,%ecx
   34a9e:	83 c2 01             	add    $0x1,%edx
   34aa1:	d1 f8                	sar    %eax
   34aa3:	75 eb                	jne    34a90 <_dtoa_r+0xb80>
   34aa5:	e9 29 f8 ff ff       	jmp    342d3 <_dtoa_r+0x3c3>
   34aaa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   34ab0:	dd d8                	fstp   %st(0)
   34ab2:	dd d8                	fstp   %st(0)
   34ab4:	dd d8                	fstp   %st(0)
   34ab6:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
   34abd:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
   34ac4:	e9 55 fc ff ff       	jmp    3471e <_dtoa_r+0x80e>
   34ac9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   34ad0:	d9 7d d2             	fnstcw -0x2e(%ebp)
   34ad3:	8d 41 ff             	lea    -0x1(%ecx),%eax
   34ad6:	dd 45 c0             	fldl   -0x40(%ebp)
   34ad9:	dc 0c c5 00 91 03 00 	fmull  0x39100(,%eax,8)
   34ae0:	d9 c9                	fxch   %st(1)
   34ae2:	89 45 88             	mov    %eax,-0x78(%ebp)
   34ae5:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
   34ae9:	8d 57 01             	lea    0x1(%edi),%edx
   34aec:	8d 1c 0f             	lea    (%edi,%ecx,1),%ebx
   34aef:	b4 0c                	mov    $0xc,%ah
   34af1:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
   34af5:	d9 6d d0             	fldcw  -0x30(%ebp)
   34af8:	db 55 d4             	fistl  -0x2c(%ebp)
   34afb:	d9 6d d2             	fldcw  -0x2e(%ebp)
   34afe:	8b 45 d4             	mov    -0x2c(%ebp),%eax
   34b01:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   34b04:	83 c0 30             	add    $0x30,%eax
   34b07:	83 f9 01             	cmp    $0x1,%ecx
   34b0a:	db 45 d4             	fildl  -0x2c(%ebp)
   34b0d:	de e9                	fsubrp %st,%st(1)
   34b0f:	88 07                	mov    %al,(%edi)
   34b11:	89 d0                	mov    %edx,%eax
   34b13:	74 37                	je     34b4c <_dtoa_r+0xc3c>
   34b15:	d9 05 1c 90 03 00    	flds   0x3901c
   34b1b:	eb 05                	jmp    34b22 <_dtoa_r+0xc12>
   34b1d:	8d 76 00             	lea    0x0(%esi),%esi
   34b20:	d9 c9                	fxch   %st(1)
   34b22:	dc c9                	fmul   %st,%st(1)
   34b24:	d9 c9                	fxch   %st(1)
   34b26:	83 c0 01             	add    $0x1,%eax
   34b29:	d9 6d d0             	fldcw  -0x30(%ebp)
   34b2c:	db 55 d4             	fistl  -0x2c(%ebp)
   34b2f:	d9 6d d2             	fldcw  -0x2e(%ebp)
   34b32:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
   34b35:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
   34b38:	83 c1 30             	add    $0x30,%ecx
   34b3b:	39 d8                	cmp    %ebx,%eax
   34b3d:	db 45 d4             	fildl  -0x2c(%ebp)
   34b40:	de e9                	fsubrp %st,%st(1)
   34b42:	88 48 ff             	mov    %cl,-0x1(%eax)
   34b45:	75 d9                	jne    34b20 <_dtoa_r+0xc10>
   34b47:	dd d9                	fstp   %st(1)
   34b49:	03 55 88             	add    -0x78(%ebp),%edx
   34b4c:	d9 05 28 90 03 00    	flds   0x39028
   34b52:	d9 c2                	fld    %st(2)
   34b54:	d8 c1                	fadd   %st(1),%st
   34b56:	d9 ca                	fxch   %st(2)
   34b58:	db ea                	fucomi %st(2),%st
   34b5a:	dd da                	fstp   %st(2)
   34b5c:	0f 86 7f 03 00 00    	jbe    34ee1 <_dtoa_r+0xfd1>
   34b62:	dd d8                	fstp   %st(0)
   34b64:	dd d8                	fstp   %st(0)
   34b66:	dd d8                	fstp   %st(0)
   34b68:	dd d8                	fstp   %st(0)
   34b6a:	89 fb                	mov    %edi,%ebx
   34b6c:	0f b6 42 ff          	movzbl -0x1(%edx),%eax
   34b70:	89 d7                	mov    %edx,%edi
   34b72:	e9 d7 f9 ff ff       	jmp    3454e <_dtoa_r+0x63e>
   34b77:	90                   	nop
   34b78:	8b 4d b0             	mov    -0x50(%ebp),%ecx
   34b7b:	8b 41 10             	mov    0x10(%ecx),%eax
   34b7e:	8b 44 81 10          	mov    0x10(%ecx,%eax,4),%eax
   34b82:	89 04 24             	mov    %eax,(%esp)
   34b85:	e8 56 11 00 00       	call   35ce0 <__hi0bits>
   34b8a:	ba 20 00 00 00       	mov    $0x20,%edx
   34b8f:	29 c2                	sub    %eax,%edx
   34b91:	e9 bb fa ff ff       	jmp    34651 <_dtoa_r+0x741>
   34b96:	66 90                	xchg   %ax,%ax
   34b98:	8b 45 b0             	mov    -0x50(%ebp),%eax
   34b9b:	89 44 24 04          	mov    %eax,0x4(%esp)
   34b9f:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   34ba2:	89 04 24             	mov    %eax,(%esp)
   34ba5:	e8 56 16 00 00       	call   36200 <__mcmp>
   34baa:	85 c0                	test   %eax,%eax
   34bac:	0f 89 13 fb ff ff    	jns    346c5 <_dtoa_r+0x7b5>
   34bb2:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   34bb5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   34bbc:	00 
   34bbd:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   34bc4:	00 
   34bc5:	89 34 24             	mov    %esi,(%esp)
   34bc8:	89 44 24 04          	mov    %eax,0x4(%esp)
   34bcc:	83 6d b8 01          	subl   $0x1,-0x48(%ebp)
   34bd0:	e8 2b 0f 00 00       	call   35b00 <__multadd>
   34bd5:	8b 4d 98             	mov    -0x68(%ebp),%ecx
   34bd8:	85 c9                	test   %ecx,%ecx
   34bda:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   34bdd:	0f 85 8d 00 00 00    	jne    34c70 <_dtoa_r+0xd60>
   34be3:	83 7d 90 00          	cmpl   $0x0,-0x70(%ebp)
   34be7:	8b 45 90             	mov    -0x70(%ebp),%eax
   34bea:	7f 0a                	jg     34bf6 <_dtoa_r+0xce6>
   34bec:	83 7d 14 02          	cmpl   $0x2,0x14(%ebp)
   34bf0:	0f 8f ff 04 00 00    	jg     350f5 <_dtoa_r+0x11e5>
   34bf6:	89 45 a8             	mov    %eax,-0x58(%ebp)
   34bf9:	e9 ed fc ff ff       	jmp    348eb <_dtoa_r+0x9db>
   34bfe:	66 90                	xchg   %ax,%ax
   34c00:	8b 5d a8             	mov    -0x58(%ebp),%ebx
   34c03:	85 db                	test   %ebx,%ebx
   34c05:	0f 85 aa fc ff ff    	jne    348b5 <_dtoa_r+0x9a5>
   34c0b:	d8 0d 24 90 03 00    	fmuls  0x39024
   34c11:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
   34c18:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
   34c1f:	dd 45 c0             	fldl   -0x40(%ebp)
   34c22:	d9 c9                	fxch   %st(1)
   34c24:	df e9                	fucomip %st(1),%st
   34c26:	dd d8                	fstp   %st(0)
   34c28:	0f 83 97 fc ff ff    	jae    348c5 <_dtoa_r+0x9b5>
   34c2e:	e9 eb fa ff ff       	jmp    3471e <_dtoa_r+0x80e>
   34c33:	90                   	nop
   34c34:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34c38:	8b 45 c0             	mov    -0x40(%ebp),%eax
   34c3b:	85 c0                	test   %eax,%eax
   34c3d:	0f 85 fe f9 ff ff    	jne    34641 <_dtoa_r+0x731>
   34c43:	8b 45 c4             	mov    -0x3c(%ebp),%eax
   34c46:	a9 ff ff 0f 00       	test   $0xfffff,%eax
   34c4b:	0f 85 f0 f9 ff ff    	jne    34641 <_dtoa_r+0x731>
   34c51:	a9 00 00 f0 7f       	test   $0x7ff00000,%eax
   34c56:	0f 84 e5 f9 ff ff    	je     34641 <_dtoa_r+0x731>
   34c5c:	83 45 a0 01          	addl   $0x1,-0x60(%ebp)
   34c60:	83 45 ac 01          	addl   $0x1,-0x54(%ebp)
   34c64:	c7 45 8c 01 00 00 00 	movl   $0x1,-0x74(%ebp)
   34c6b:	e9 d1 f9 ff ff       	jmp    34641 <_dtoa_r+0x731>
   34c70:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   34c73:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   34c7a:	00 
   34c7b:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   34c82:	00 
   34c83:	89 34 24             	mov    %esi,(%esp)
   34c86:	89 44 24 04          	mov    %eax,0x4(%esp)
   34c8a:	e8 71 0e 00 00       	call   35b00 <__multadd>
   34c8f:	8b 55 90             	mov    -0x70(%ebp),%edx
   34c92:	85 d2                	test   %edx,%edx
   34c94:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   34c97:	8b 45 90             	mov    -0x70(%ebp),%eax
   34c9a:	7f 0a                	jg     34ca6 <_dtoa_r+0xd96>
   34c9c:	83 7d 14 02          	cmpl   $0x2,0x14(%ebp)
   34ca0:	0f 8f 4f 04 00 00    	jg     350f5 <_dtoa_r+0x11e5>
   34ca6:	89 45 a8             	mov    %eax,-0x58(%ebp)
   34ca9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   34cb0:	85 db                	test   %ebx,%ebx
   34cb2:	7e 16                	jle    34cca <_dtoa_r+0xdba>
   34cb4:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   34cb7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   34cbb:	89 34 24             	mov    %esi,(%esp)
   34cbe:	89 44 24 04          	mov    %eax,0x4(%esp)
   34cc2:	e8 19 14 00 00       	call   360e0 <__lshift>
   34cc7:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   34cca:	8b 5d 8c             	mov    -0x74(%ebp),%ebx
   34ccd:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   34cd0:	85 db                	test   %ebx,%ebx
   34cd2:	89 45 ac             	mov    %eax,-0x54(%ebp)
   34cd5:	0f 85 11 03 00 00    	jne    34fec <_dtoa_r+0x10dc>
   34cdb:	8b 45 a8             	mov    -0x58(%ebp),%eax
   34cde:	8d 5f 01             	lea    0x1(%edi),%ebx
   34ce1:	89 7d 8c             	mov    %edi,-0x74(%ebp)
   34ce4:	01 f8                	add    %edi,%eax
   34ce6:	8b 7d a4             	mov    -0x5c(%ebp),%edi
   34ce9:	89 45 90             	mov    %eax,-0x70(%ebp)
   34cec:	8b 45 c0             	mov    -0x40(%ebp),%eax
   34cef:	83 e0 01             	and    $0x1,%eax
   34cf2:	89 45 9c             	mov    %eax,-0x64(%ebp)
   34cf5:	eb 2e                	jmp    34d25 <_dtoa_r+0xe15>
   34cf7:	90                   	nop
   34cf8:	e8 03 0e 00 00       	call   35b00 <__multadd>
   34cfd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   34d04:	00 
   34d05:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   34d0c:	00 
   34d0d:	89 34 24             	mov    %esi,(%esp)
   34d10:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   34d13:	8b 45 ac             	mov    -0x54(%ebp),%eax
   34d16:	89 44 24 04          	mov    %eax,0x4(%esp)
   34d1a:	e8 e1 0d 00 00       	call   35b00 <__multadd>
   34d1f:	89 45 ac             	mov    %eax,-0x54(%ebp)
   34d22:	83 c3 01             	add    $0x1,%ebx
   34d25:	8b 55 b0             	mov    -0x50(%ebp),%edx
   34d28:	8d 43 ff             	lea    -0x1(%ebx),%eax
   34d2b:	89 45 98             	mov    %eax,-0x68(%ebp)
   34d2e:	89 f8                	mov    %edi,%eax
   34d30:	e8 0b f0 ff ff       	call   33d40 <quorem>
   34d35:	89 3c 24             	mov    %edi,(%esp)
   34d38:	8d 48 30             	lea    0x30(%eax),%ecx
   34d3b:	89 4d a0             	mov    %ecx,-0x60(%ebp)
   34d3e:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
   34d41:	89 45 94             	mov    %eax,-0x6c(%ebp)
   34d44:	89 4c 24 04          	mov    %ecx,0x4(%esp)
   34d48:	e8 b3 14 00 00       	call   36200 <__mcmp>
   34d4d:	8b 4d ac             	mov    -0x54(%ebp),%ecx
   34d50:	89 34 24             	mov    %esi,(%esp)
   34d53:	89 4c 24 08          	mov    %ecx,0x8(%esp)
   34d57:	89 45 c0             	mov    %eax,-0x40(%ebp)
   34d5a:	8b 45 b0             	mov    -0x50(%ebp),%eax
   34d5d:	89 44 24 04          	mov    %eax,0x4(%esp)
   34d61:	e8 ea 14 00 00       	call   36250 <__mdiff>
   34d66:	8b 48 0c             	mov    0xc(%eax),%ecx
   34d69:	89 c2                	mov    %eax,%edx
   34d6b:	85 c9                	test   %ecx,%ecx
   34d6d:	0f 85 c5 00 00 00    	jne    34e38 <_dtoa_r+0xf28>
   34d73:	89 44 24 04          	mov    %eax,0x4(%esp)
   34d77:	89 3c 24             	mov    %edi,(%esp)
   34d7a:	89 45 a8             	mov    %eax,-0x58(%ebp)
   34d7d:	e8 7e 14 00 00       	call   36200 <__mcmp>
   34d82:	8b 55 a8             	mov    -0x58(%ebp),%edx
   34d85:	89 54 24 04          	mov    %edx,0x4(%esp)
   34d89:	89 34 24             	mov    %esi,(%esp)
   34d8c:	89 45 a8             	mov    %eax,-0x58(%ebp)
   34d8f:	e8 4c 0d 00 00       	call   35ae0 <_Bfree>
   34d94:	8b 45 a8             	mov    -0x58(%ebp),%eax
   34d97:	89 c1                	mov    %eax,%ecx
   34d99:	0b 4d 14             	or     0x14(%ebp),%ecx
   34d9c:	75 0b                	jne    34da9 <_dtoa_r+0xe99>
   34d9e:	8b 55 9c             	mov    -0x64(%ebp),%edx
   34da1:	85 d2                	test   %edx,%edx
   34da3:	0f 84 fb 02 00 00    	je     350a4 <_dtoa_r+0x1194>
   34da9:	8b 55 c0             	mov    -0x40(%ebp),%edx
   34dac:	85 d2                	test   %edx,%edx
   34dae:	0f 88 7f 01 00 00    	js     34f33 <_dtoa_r+0x1023>
   34db4:	8b 4d c0             	mov    -0x40(%ebp),%ecx
   34db7:	0b 4d 14             	or     0x14(%ebp),%ecx
   34dba:	75 0b                	jne    34dc7 <_dtoa_r+0xeb7>
   34dbc:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
   34dbf:	85 c9                	test   %ecx,%ecx
   34dc1:	0f 84 6c 01 00 00    	je     34f33 <_dtoa_r+0x1023>
   34dc7:	85 c0                	test   %eax,%eax
   34dc9:	0f 8f 82 02 00 00    	jg     35051 <_dtoa_r+0x1141>
   34dcf:	0f b6 45 a0          	movzbl -0x60(%ebp),%eax
   34dd3:	89 da                	mov    %ebx,%edx
   34dd5:	3b 5d 90             	cmp    -0x70(%ebp),%ebx
   34dd8:	88 43 ff             	mov    %al,-0x1(%ebx)
   34ddb:	0f 84 8d 02 00 00    	je     3506e <_dtoa_r+0x115e>
   34de1:	89 7c 24 04          	mov    %edi,0x4(%esp)
   34de5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   34dec:	00 
   34ded:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   34df4:	00 
   34df5:	89 34 24             	mov    %esi,(%esp)
   34df8:	e8 03 0d 00 00       	call   35b00 <__multadd>
   34dfd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   34e04:	00 
   34e05:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   34e0c:	00 
   34e0d:	89 34 24             	mov    %esi,(%esp)
   34e10:	89 c7                	mov    %eax,%edi
   34e12:	8b 45 ac             	mov    -0x54(%ebp),%eax
   34e15:	39 45 b4             	cmp    %eax,-0x4c(%ebp)
   34e18:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   34e1b:	89 44 24 04          	mov    %eax,0x4(%esp)
   34e1f:	0f 85 d3 fe ff ff    	jne    34cf8 <_dtoa_r+0xde8>
   34e25:	e8 d6 0c 00 00       	call   35b00 <__multadd>
   34e2a:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   34e2d:	89 45 ac             	mov    %eax,-0x54(%ebp)
   34e30:	e9 ed fe ff ff       	jmp    34d22 <_dtoa_r+0xe12>
   34e35:	8d 76 00             	lea    0x0(%esi),%esi
   34e38:	b8 01 00 00 00       	mov    $0x1,%eax
   34e3d:	e9 43 ff ff ff       	jmp    34d85 <_dtoa_r+0xe75>
   34e42:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
   34e49:	e9 d2 f2 ff ff       	jmp    34120 <_dtoa_r+0x210>
   34e4e:	0f 85 87 f6 ff ff    	jne    344db <_dtoa_r+0x5cb>
   34e54:	dd d8                	fstp   %st(0)
   34e56:	dd d8                	fstp   %st(0)
   34e58:	dd d8                	fstp   %st(0)
   34e5a:	89 fb                	mov    %edi,%ebx
   34e5c:	8b 7d c0             	mov    -0x40(%ebp),%edi
   34e5f:	e9 fc f8 ff ff       	jmp    34760 <_dtoa_r+0x850>
   34e64:	89 c2                	mov    %eax,%edx
   34e66:	2b 55 b0             	sub    -0x50(%ebp),%edx
   34e69:	89 45 b0             	mov    %eax,-0x50(%ebp)
   34e6c:	01 55 94             	add    %edx,-0x6c(%ebp)
   34e6f:	31 d2                	xor    %edx,%edx
   34e71:	e9 b8 f9 ff ff       	jmp    3482e <_dtoa_r+0x91e>
   34e76:	8b 45 a8             	mov    -0x58(%ebp),%eax
   34e79:	85 c0                	test   %eax,%eax
   34e7b:	0f 84 f3 f9 ff ff    	je     34874 <_dtoa_r+0x964>
   34e81:	8b 45 90             	mov    -0x70(%ebp),%eax
   34e84:	85 c0                	test   %eax,%eax
   34e86:	0f 8e c4 fb ff ff    	jle    34a50 <_dtoa_r+0xb40>
   34e8c:	d8 0d 1c 90 03 00    	fmuls  0x3901c
   34e92:	83 c1 01             	add    $0x1,%ecx
   34e95:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
   34e98:	8b 5d b8             	mov    -0x48(%ebp),%ebx
   34e9b:	89 c1                	mov    %eax,%ecx
   34e9d:	83 eb 01             	sub    $0x1,%ebx
   34ea0:	db 45 d4             	fildl  -0x2c(%ebp)
   34ea3:	d8 c9                	fmul   %st(1),%st
   34ea5:	89 5d b4             	mov    %ebx,-0x4c(%ebp)
   34ea8:	d8 05 20 90 03 00    	fadds  0x39020
   34eae:	dd 5d c0             	fstpl  -0x40(%ebp)
   34eb1:	81 6d c4 00 00 40 03 	subl   $0x3400000,-0x3c(%ebp)
   34eb8:	e9 53 f4 ff ff       	jmp    34310 <_dtoa_r+0x400>
   34ebd:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   34ec0:	c6 03 30             	movb   $0x30,(%ebx)
   34ec3:	83 c0 01             	add    $0x1,%eax
   34ec6:	89 45 b8             	mov    %eax,-0x48(%ebp)
   34ec9:	b8 31 00 00 00       	mov    $0x31,%eax
   34ece:	88 02                	mov    %al,(%edx)
   34ed0:	e9 8b f8 ff ff       	jmp    34760 <_dtoa_r+0x850>
   34ed5:	d9 c0                	fld    %st(0)
   34ed7:	b9 02 00 00 00       	mov    $0x2,%ecx
   34edc:	e9 f2 f3 ff ff       	jmp    342d3 <_dtoa_r+0x3c3>
   34ee1:	de e2                	fsubp  %st,%st(2)
   34ee3:	d9 c9                	fxch   %st(1)
   34ee5:	df e9                	fucomip %st(1),%st
   34ee7:	dd d8                	fstp   %st(0)
   34ee9:	0f 86 69 fb ff ff    	jbe    34a58 <_dtoa_r+0xb48>
   34eef:	dd d8                	fstp   %st(0)
   34ef1:	eb 07                	jmp    34efa <_dtoa_r+0xfea>
   34ef3:	90                   	nop
   34ef4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34ef8:	89 c2                	mov    %eax,%edx
   34efa:	80 7a ff 30          	cmpb   $0x30,-0x1(%edx)
   34efe:	8d 42 ff             	lea    -0x1(%edx),%eax
   34f01:	74 f5                	je     34ef8 <_dtoa_r+0xfe8>
   34f03:	e9 d9 f4 ff ff       	jmp    343e1 <_dtoa_r+0x4d1>
   34f08:	c6 07 31             	movb   $0x31,(%edi)
   34f0b:	89 fb                	mov    %edi,%ebx
   34f0d:	89 d7                	mov    %edx,%edi
   34f0f:	83 45 b8 01          	addl   $0x1,-0x48(%ebp)
   34f13:	e9 1a f8 ff ff       	jmp    34732 <_dtoa_r+0x822>
   34f18:	8b 55 8c             	mov    -0x74(%ebp),%edx
   34f1b:	85 d2                	test   %edx,%edx
   34f1d:	0f 84 1b 01 00 00    	je     3503e <_dtoa_r+0x112e>
   34f23:	05 33 04 00 00       	add    $0x433,%eax
   34f28:	8b 55 b0             	mov    -0x50(%ebp),%edx
   34f2b:	8b 5d a0             	mov    -0x60(%ebp),%ebx
   34f2e:	e9 0b f9 ff ff       	jmp    3483e <_dtoa_r+0x92e>
   34f33:	85 c0                	test   %eax,%eax
   34f35:	89 7d a4             	mov    %edi,-0x5c(%ebp)
   34f38:	8b 7d 8c             	mov    -0x74(%ebp),%edi
   34f3b:	7e 45                	jle    34f82 <_dtoa_r+0x1072>
   34f3d:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   34f40:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
   34f47:	00 
   34f48:	89 34 24             	mov    %esi,(%esp)
   34f4b:	89 44 24 04          	mov    %eax,0x4(%esp)
   34f4f:	e8 8c 11 00 00       	call   360e0 <__lshift>
   34f54:	8b 5d b0             	mov    -0x50(%ebp),%ebx
   34f57:	89 5c 24 04          	mov    %ebx,0x4(%esp)
   34f5b:	89 04 24             	mov    %eax,(%esp)
   34f5e:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   34f61:	e8 9a 12 00 00       	call   36200 <__mcmp>
   34f66:	83 f8 00             	cmp    $0x0,%eax
   34f69:	0f 8e 5b 01 00 00    	jle    350ca <_dtoa_r+0x11ba>
   34f6f:	83 7d a0 39          	cmpl   $0x39,-0x60(%ebp)
   34f73:	0f 84 0c 01 00 00    	je     35085 <_dtoa_r+0x1175>
   34f79:	8b 45 94             	mov    -0x6c(%ebp),%eax
   34f7c:	83 c0 31             	add    $0x31,%eax
   34f7f:	89 45 a0             	mov    %eax,-0x60(%ebp)
   34f82:	8b 4d 98             	mov    -0x68(%ebp),%ecx
   34f85:	0f b6 45 a0          	movzbl -0x60(%ebp),%eax
   34f89:	89 cb                	mov    %ecx,%ebx
   34f8b:	88 03                	mov    %al,(%ebx)
   34f8d:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   34f90:	89 fb                	mov    %edi,%ebx
   34f92:	8d 79 01             	lea    0x1(%ecx),%edi
   34f95:	89 45 c0             	mov    %eax,-0x40(%ebp)
   34f98:	8b 45 ac             	mov    -0x54(%ebp),%eax
   34f9b:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   34f9e:	e9 8f f7 ff ff       	jmp    34732 <_dtoa_r+0x822>
   34fa3:	dd d8                	fstp   %st(0)
   34fa5:	dd d8                	fstp   %st(0)
   34fa7:	dd d8                	fstp   %st(0)
   34fa9:	eb 0d                	jmp    34fb8 <_dtoa_r+0x10a8>
   34fab:	90                   	nop
   34fac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34fb0:	dd d8                	fstp   %st(0)
   34fb2:	dd d8                	fstp   %st(0)
   34fb4:	dd d8                	fstp   %st(0)
   34fb6:	dd d8                	fstp   %st(0)
   34fb8:	89 fb                	mov    %edi,%ebx
   34fba:	89 d7                	mov    %edx,%edi
   34fbc:	e9 8d f5 ff ff       	jmp    3454e <_dtoa_r+0x63e>
   34fc1:	29 cb                	sub    %ecx,%ebx
   34fc3:	31 c0                	xor    %eax,%eax
   34fc5:	e9 74 f8 ff ff       	jmp    3483e <_dtoa_r+0x92e>
   34fca:	75 0e                	jne    34fda <_dtoa_r+0x10ca>
   34fcc:	f6 45 a0 01          	testb  $0x1,-0x60(%ebp)
   34fd0:	74 08                	je     34fda <_dtoa_r+0x10ca>
   34fd2:	e9 b2 f9 ff ff       	jmp    34989 <_dtoa_r+0xa79>
   34fd7:	90                   	nop
   34fd8:	89 c2                	mov    %eax,%edx
   34fda:	80 7a ff 30          	cmpb   $0x30,-0x1(%edx)
   34fde:	8d 42 ff             	lea    -0x1(%edx),%eax
   34fe1:	74 f5                	je     34fd8 <_dtoa_r+0x10c8>
   34fe3:	89 fb                	mov    %edi,%ebx
   34fe5:	89 d7                	mov    %edx,%edi
   34fe7:	e9 46 f7 ff ff       	jmp    34732 <_dtoa_r+0x822>
   34fec:	8b 40 04             	mov    0x4(%eax),%eax
   34fef:	89 34 24             	mov    %esi,(%esp)
   34ff2:	89 44 24 04          	mov    %eax,0x4(%esp)
   34ff6:	e8 45 0a 00 00       	call   35a40 <_Balloc>
   34ffb:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
   34ffe:	89 c3                	mov    %eax,%ebx
   35000:	8b 41 10             	mov    0x10(%ecx),%eax
   35003:	8d 04 85 08 00 00 00 	lea    0x8(,%eax,4),%eax
   3500a:	89 44 24 08          	mov    %eax,0x8(%esp)
   3500e:	89 c8                	mov    %ecx,%eax
   35010:	83 c0 0c             	add    $0xc,%eax
   35013:	89 44 24 04          	mov    %eax,0x4(%esp)
   35017:	8d 43 0c             	lea    0xc(%ebx),%eax
   3501a:	89 04 24             	mov    %eax,(%esp)
   3501d:	e8 62 cc ff ff       	call   31c84 <memcpy>
   35022:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
   35029:	00 
   3502a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
   3502e:	89 34 24             	mov    %esi,(%esp)
   35031:	e8 aa 10 00 00       	call   360e0 <__lshift>
   35036:	89 45 ac             	mov    %eax,-0x54(%ebp)
   35039:	e9 9d fc ff ff       	jmp    34cdb <_dtoa_r+0xdcb>
   3503e:	b8 36 00 00 00       	mov    $0x36,%eax
   35043:	8b 55 b0             	mov    -0x50(%ebp),%edx
   35046:	2b 45 e0             	sub    -0x20(%ebp),%eax
   35049:	8b 5d a0             	mov    -0x60(%ebp),%ebx
   3504c:	e9 ed f7 ff ff       	jmp    3483e <_dtoa_r+0x92e>
   35051:	83 7d a0 39          	cmpl   $0x39,-0x60(%ebp)
   35055:	89 7d a4             	mov    %edi,-0x5c(%ebp)
   35058:	8b 7d 8c             	mov    -0x74(%ebp),%edi
   3505b:	74 28                	je     35085 <_dtoa_r+0x1175>
   3505d:	0f b6 45 a0          	movzbl -0x60(%ebp),%eax
   35061:	8b 4d 98             	mov    -0x68(%ebp),%ecx
   35064:	83 c0 01             	add    $0x1,%eax
   35067:	89 cb                	mov    %ecx,%ebx
   35069:	e9 1d ff ff ff       	jmp    34f8b <_dtoa_r+0x107b>
   3506e:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   35071:	89 7d a4             	mov    %edi,-0x5c(%ebp)
   35074:	8b 7d 8c             	mov    -0x74(%ebp),%edi
   35077:	89 45 c0             	mov    %eax,-0x40(%ebp)
   3507a:	8b 45 ac             	mov    -0x54(%ebp),%eax
   3507d:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   35080:	e9 cc f8 ff ff       	jmp    34951 <_dtoa_r+0xa41>
   35085:	8b 45 98             	mov    -0x68(%ebp),%eax
   35088:	b9 39 00 00 00       	mov    $0x39,%ecx
   3508d:	8d 50 01             	lea    0x1(%eax),%edx
   35090:	c6 00 39             	movb   $0x39,(%eax)
   35093:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   35096:	89 45 c0             	mov    %eax,-0x40(%ebp)
   35099:	8b 45 ac             	mov    -0x54(%ebp),%eax
   3509c:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   3509f:	e9 fa f8 ff ff       	jmp    3499e <_dtoa_r+0xa8e>
   350a4:	8b 5d a0             	mov    -0x60(%ebp),%ebx
   350a7:	89 7d a4             	mov    %edi,-0x5c(%ebp)
   350aa:	8b 7d 8c             	mov    -0x74(%ebp),%edi
   350ad:	83 fb 39             	cmp    $0x39,%ebx
   350b0:	74 d3                	je     35085 <_dtoa_r+0x1175>
   350b2:	8b 4d c0             	mov    -0x40(%ebp),%ecx
   350b5:	8b 45 94             	mov    -0x6c(%ebp),%eax
   350b8:	83 c0 31             	add    $0x31,%eax
   350bb:	85 c9                	test   %ecx,%ecx
   350bd:	8b 4d 98             	mov    -0x68(%ebp),%ecx
   350c0:	0f 4e c3             	cmovle %ebx,%eax
   350c3:	89 cb                	mov    %ecx,%ebx
   350c5:	e9 c1 fe ff ff       	jmp    34f8b <_dtoa_r+0x107b>
   350ca:	0f 85 b2 fe ff ff    	jne    34f82 <_dtoa_r+0x1072>
   350d0:	f6 45 a0 01          	testb  $0x1,-0x60(%ebp)
   350d4:	0f 84 a8 fe ff ff    	je     34f82 <_dtoa_r+0x1072>
   350da:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   350e0:	e9 8a fe ff ff       	jmp    34f6f <_dtoa_r+0x105f>
   350e5:	0f 85 c7 f3 ff ff    	jne    344b2 <_dtoa_r+0x5a2>
   350eb:	dd d8                	fstp   %st(0)
   350ed:	dd d8                	fstp   %st(0)
   350ef:	90                   	nop
   350f0:	e9 65 fd ff ff       	jmp    34e5a <_dtoa_r+0xf4a>
   350f5:	89 45 a8             	mov    %eax,-0x58(%ebp)
   350f8:	e9 dd f5 ff ff       	jmp    346da <_dtoa_r+0x7ca>
   350fd:	8d 76 00             	lea    0x0(%esi),%esi
   35100:	0f 84 7a f5 ff ff    	je     34680 <_dtoa_r+0x770>
   35106:	b8 3c 00 00 00       	mov    $0x3c,%eax
   3510b:	29 d0                	sub    %edx,%eax
   3510d:	e9 ab f8 ff ff       	jmp    349bd <_dtoa_r+0xaad>
   35112:	b8 01 00 00 00       	mov    $0x1,%eax
   35117:	e9 d9 ef ff ff       	jmp    340f5 <_dtoa_r+0x1e5>
   3511c:	31 d2                	xor    %edx,%edx
   3511e:	e9 36 f1 ff ff       	jmp    34259 <_dtoa_r+0x349>
   35123:	66 90                	xchg   %ax,%ax
   35125:	66 90                	xchg   %ax,%ax
   35127:	66 90                	xchg   %ax,%ax
   35129:	66 90                	xchg   %ax,%ax
   3512b:	66 90                	xchg   %ax,%ax
   3512d:	66 90                	xchg   %ax,%ax
   3512f:	90                   	nop

00035130 <_setlocale_r>:
   35130:	55                   	push   %ebp
   35131:	89 e5                	mov    %esp,%ebp
   35133:	53                   	push   %ebx
   35134:	83 ec 14             	sub    $0x14,%esp
   35137:	8b 5d 10             	mov    0x10(%ebp),%ebx
   3513a:	85 db                	test   %ebx,%ebx
   3513c:	74 14                	je     35152 <_setlocale_r+0x22>
   3513e:	c7 44 24 04 48 90 03 	movl   $0x39048,0x4(%esp)
   35145:	00 
   35146:	89 1c 24             	mov    %ebx,(%esp)
   35149:	e8 82 17 00 00       	call   368d0 <strcmp>
   3514e:	85 c0                	test   %eax,%eax
   35150:	75 0e                	jne    35160 <_setlocale_r+0x30>
   35152:	83 c4 14             	add    $0x14,%esp
   35155:	b8 40 8e 03 00       	mov    $0x38e40,%eax
   3515a:	5b                   	pop    %ebx
   3515b:	5d                   	pop    %ebp
   3515c:	c3                   	ret    
   3515d:	8d 76 00             	lea    0x0(%esi),%esi
   35160:	c7 44 24 04 40 8e 03 	movl   $0x38e40,0x4(%esp)
   35167:	00 
   35168:	89 1c 24             	mov    %ebx,(%esp)
   3516b:	e8 60 17 00 00       	call   368d0 <strcmp>
   35170:	85 c0                	test   %eax,%eax
   35172:	74 de                	je     35152 <_setlocale_r+0x22>
   35174:	89 1c 24             	mov    %ebx,(%esp)
   35177:	c7 44 24 04 7a 8e 03 	movl   $0x38e7a,0x4(%esp)
   3517e:	00 
   3517f:	e8 4c 17 00 00       	call   368d0 <strcmp>
   35184:	89 c2                	mov    %eax,%edx
   35186:	31 c0                	xor    %eax,%eax
   35188:	85 d2                	test   %edx,%edx
   3518a:	ba 40 8e 03 00       	mov    $0x38e40,%edx
   3518f:	0f 44 c2             	cmove  %edx,%eax
   35192:	83 c4 14             	add    $0x14,%esp
   35195:	5b                   	pop    %ebx
   35196:	5d                   	pop    %ebp
   35197:	c3                   	ret    
   35198:	90                   	nop
   35199:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

000351a0 <__locale_charset>:
   351a0:	55                   	push   %ebp
   351a1:	b8 c0 c4 03 00       	mov    $0x3c4c0,%eax
   351a6:	89 e5                	mov    %esp,%ebp
   351a8:	5d                   	pop    %ebp
   351a9:	c3                   	ret    
   351aa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

000351b0 <__locale_mb_cur_max>:
   351b0:	55                   	push   %ebp
   351b1:	a1 18 c5 03 00       	mov    0x3c518,%eax
   351b6:	89 e5                	mov    %esp,%ebp
   351b8:	5d                   	pop    %ebp
   351b9:	c3                   	ret    
   351ba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

000351c0 <__locale_msgcharset>:
   351c0:	55                   	push   %ebp
   351c1:	b8 a0 c4 03 00       	mov    $0x3c4a0,%eax
   351c6:	89 e5                	mov    %esp,%ebp
   351c8:	5d                   	pop    %ebp
   351c9:	c3                   	ret    
   351ca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

000351d0 <__locale_cjk_lang>:
   351d0:	55                   	push   %ebp
   351d1:	31 c0                	xor    %eax,%eax
   351d3:	89 e5                	mov    %esp,%ebp
   351d5:	5d                   	pop    %ebp
   351d6:	c3                   	ret    
   351d7:	89 f6                	mov    %esi,%esi
   351d9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

000351e0 <_localeconv_r>:
   351e0:	55                   	push   %ebp
   351e1:	b8 e0 c4 03 00       	mov    $0x3c4e0,%eax
   351e6:	89 e5                	mov    %esp,%ebp
   351e8:	5d                   	pop    %ebp
   351e9:	c3                   	ret    
   351ea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

000351f0 <setlocale>:
   351f0:	55                   	push   %ebp
   351f1:	89 e5                	mov    %esp,%ebp
   351f3:	83 ec 18             	sub    $0x18,%esp
   351f6:	e8 35 cc ff ff       	call   31e30 <__getreent>
   351fb:	8b 55 0c             	mov    0xc(%ebp),%edx
   351fe:	89 54 24 08          	mov    %edx,0x8(%esp)
   35202:	8b 55 08             	mov    0x8(%ebp),%edx
   35205:	89 04 24             	mov    %eax,(%esp)
   35208:	89 54 24 04          	mov    %edx,0x4(%esp)
   3520c:	e8 1f ff ff ff       	call   35130 <_setlocale_r>
   35211:	c9                   	leave  
   35212:	c3                   	ret    
   35213:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   35219:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00035220 <localeconv>:
   35220:	55                   	push   %ebp
   35221:	89 e5                	mov    %esp,%ebp
   35223:	83 ec 08             	sub    $0x8,%esp
   35226:	e8 05 cc ff ff       	call   31e30 <__getreent>
   3522b:	b8 e0 c4 03 00       	mov    $0x3c4e0,%eax
   35230:	c9                   	leave  
   35231:	c3                   	ret    
   35232:	66 90                	xchg   %ax,%ax
   35234:	66 90                	xchg   %ax,%ax
   35236:	66 90                	xchg   %ax,%ax
   35238:	66 90                	xchg   %ax,%ax
   3523a:	66 90                	xchg   %ax,%ax
   3523c:	66 90                	xchg   %ax,%ax
   3523e:	66 90                	xchg   %ax,%ax

00035240 <_malloc_r>:
   35240:	55                   	push   %ebp
   35241:	89 e5                	mov    %esp,%ebp
   35243:	57                   	push   %edi
   35244:	56                   	push   %esi
   35245:	53                   	push   %ebx
   35246:	83 ec 2c             	sub    $0x2c,%esp
   35249:	8b 45 0c             	mov    0xc(%ebp),%eax
   3524c:	8d 50 0b             	lea    0xb(%eax),%edx
   3524f:	83 fa 16             	cmp    $0x16,%edx
   35252:	76 6c                	jbe    352c0 <_malloc_r+0x80>
   35254:	89 d7                	mov    %edx,%edi
   35256:	83 e7 f8             	and    $0xfffffff8,%edi
   35259:	89 fe                	mov    %edi,%esi
   3525b:	c1 ee 1f             	shr    $0x1f,%esi
   3525e:	39 c7                	cmp    %eax,%edi
   35260:	8b 45 08             	mov    0x8(%ebp),%eax
   35263:	89 f2                	mov    %esi,%edx
   35265:	72 67                	jb     352ce <_malloc_r+0x8e>
   35267:	84 d2                	test   %dl,%dl
   35269:	75 63                	jne    352ce <_malloc_r+0x8e>
   3526b:	89 04 24             	mov    %eax,(%esp)
   3526e:	e8 ad 07 00 00       	call   35a20 <__malloc_lock>
   35273:	81 ff f7 01 00 00    	cmp    $0x1f7,%edi
   35279:	77 65                	ja     352e0 <_malloc_r+0xa0>
   3527b:	89 fa                	mov    %edi,%edx
   3527d:	c1 ea 03             	shr    $0x3,%edx
   35280:	8d 04 d5 40 c5 03 00 	lea    0x3c540(,%edx,8),%eax
   35287:	8b 58 0c             	mov    0xc(%eax),%ebx
   3528a:	39 c3                	cmp    %eax,%ebx
   3528c:	0f 84 3e 05 00 00    	je     357d0 <_malloc_r+0x590>
   35292:	8b 43 04             	mov    0x4(%ebx),%eax
   35295:	83 e0 fc             	and    $0xfffffffc,%eax
   35298:	8b 53 0c             	mov    0xc(%ebx),%edx
   3529b:	8b 4b 08             	mov    0x8(%ebx),%ecx
   3529e:	89 51 0c             	mov    %edx,0xc(%ecx)
   352a1:	89 4a 08             	mov    %ecx,0x8(%edx)
   352a4:	83 4c 03 04 01       	orl    $0x1,0x4(%ebx,%eax,1)
   352a9:	8b 45 08             	mov    0x8(%ebp),%eax
   352ac:	89 04 24             	mov    %eax,(%esp)
   352af:	e8 7c 07 00 00       	call   35a30 <__malloc_unlock>
   352b4:	8d 43 08             	lea    0x8(%ebx),%eax
   352b7:	83 c4 2c             	add    $0x2c,%esp
   352ba:	5b                   	pop    %ebx
   352bb:	5e                   	pop    %esi
   352bc:	5f                   	pop    %edi
   352bd:	5d                   	pop    %ebp
   352be:	c3                   	ret    
   352bf:	90                   	nop
   352c0:	bf 10 00 00 00       	mov    $0x10,%edi
   352c5:	31 d2                	xor    %edx,%edx
   352c7:	39 c7                	cmp    %eax,%edi
   352c9:	8b 45 08             	mov    0x8(%ebp),%eax
   352cc:	73 99                	jae    35267 <_malloc_r+0x27>
   352ce:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
   352d4:	83 c4 2c             	add    $0x2c,%esp
   352d7:	31 c0                	xor    %eax,%eax
   352d9:	5b                   	pop    %ebx
   352da:	5e                   	pop    %esi
   352db:	5f                   	pop    %edi
   352dc:	5d                   	pop    %ebp
   352dd:	c3                   	ret    
   352de:	66 90                	xchg   %ax,%ax
   352e0:	89 fe                	mov    %edi,%esi
   352e2:	c1 ee 09             	shr    $0x9,%esi
   352e5:	85 f6                	test   %esi,%esi
   352e7:	0f 84 ab 01 00 00    	je     35498 <_malloc_r+0x258>
   352ed:	83 fe 04             	cmp    $0x4,%esi
   352f0:	0f 87 8a 03 00 00    	ja     35680 <_malloc_r+0x440>
   352f6:	89 fe                	mov    %edi,%esi
   352f8:	c1 ee 06             	shr    $0x6,%esi
   352fb:	83 c6 38             	add    $0x38,%esi
   352fe:	8d 04 36             	lea    (%esi,%esi,1),%eax
   35301:	8d 0c 85 40 c5 03 00 	lea    0x3c540(,%eax,4),%ecx
   35308:	8b 59 0c             	mov    0xc(%ecx),%ebx
   3530b:	39 d9                	cmp    %ebx,%ecx
   3530d:	75 18                	jne    35327 <_malloc_r+0xe7>
   3530f:	eb 28                	jmp    35339 <_malloc_r+0xf9>
   35311:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   35318:	85 d2                	test   %edx,%edx
   3531a:	0f 89 78 ff ff ff    	jns    35298 <_malloc_r+0x58>
   35320:	8b 5b 0c             	mov    0xc(%ebx),%ebx
   35323:	39 d9                	cmp    %ebx,%ecx
   35325:	74 12                	je     35339 <_malloc_r+0xf9>
   35327:	8b 43 04             	mov    0x4(%ebx),%eax
   3532a:	83 e0 fc             	and    $0xfffffffc,%eax
   3532d:	89 c2                	mov    %eax,%edx
   3532f:	29 fa                	sub    %edi,%edx
   35331:	83 fa 0f             	cmp    $0xf,%edx
   35334:	7e e2                	jle    35318 <_malloc_r+0xd8>
   35336:	83 ee 01             	sub    $0x1,%esi
   35339:	8d 46 01             	lea    0x1(%esi),%eax
   3533c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   3533f:	8b 1d 50 c5 03 00    	mov    0x3c550,%ebx
   35345:	a1 44 c5 03 00       	mov    0x3c544,%eax
   3534a:	81 fb 48 c5 03 00    	cmp    $0x3c548,%ebx
   35350:	74 6b                	je     353bd <_malloc_r+0x17d>
   35352:	8b 73 04             	mov    0x4(%ebx),%esi
   35355:	83 e6 fc             	and    $0xfffffffc,%esi
   35358:	89 f0                	mov    %esi,%eax
   3535a:	29 f8                	sub    %edi,%eax
   3535c:	83 f8 0f             	cmp    $0xf,%eax
   3535f:	0f 8f a3 03 00 00    	jg     35708 <_malloc_r+0x4c8>
   35365:	85 c0                	test   %eax,%eax
   35367:	c7 05 54 c5 03 00 48 	movl   $0x3c548,0x3c554
   3536e:	c5 03 00 
   35371:	c7 05 50 c5 03 00 48 	movl   $0x3c548,0x3c550
   35378:	c5 03 00 
   3537b:	0f 89 27 01 00 00    	jns    354a8 <_malloc_r+0x268>
   35381:	81 fe ff 01 00 00    	cmp    $0x1ff,%esi
   35387:	0f 87 1b 03 00 00    	ja     356a8 <_malloc_r+0x468>
   3538d:	c1 ee 03             	shr    $0x3,%esi
   35390:	b8 01 00 00 00       	mov    $0x1,%eax
   35395:	89 f1                	mov    %esi,%ecx
   35397:	8d 14 f5 40 c5 03 00 	lea    0x3c540(,%esi,8),%edx
   3539e:	c1 f9 02             	sar    $0x2,%ecx
   353a1:	d3 e0                	shl    %cl,%eax
   353a3:	8b 4a 08             	mov    0x8(%edx),%ecx
   353a6:	0b 05 44 c5 03 00    	or     0x3c544,%eax
   353ac:	89 53 0c             	mov    %edx,0xc(%ebx)
   353af:	89 4b 08             	mov    %ecx,0x8(%ebx)
   353b2:	a3 44 c5 03 00       	mov    %eax,0x3c544
   353b7:	89 5a 08             	mov    %ebx,0x8(%edx)
   353ba:	89 59 0c             	mov    %ebx,0xc(%ecx)
   353bd:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   353c0:	be 01 00 00 00       	mov    $0x1,%esi
   353c5:	c1 f9 02             	sar    $0x2,%ecx
   353c8:	d3 e6                	shl    %cl,%esi
   353ca:	39 c6                	cmp    %eax,%esi
   353cc:	0f 87 f6 00 00 00    	ja     354c8 <_malloc_r+0x288>
   353d2:	85 f0                	test   %esi,%eax
   353d4:	0f 85 76 03 00 00    	jne    35750 <_malloc_r+0x510>
   353da:	8b 55 e4             	mov    -0x1c(%ebp),%edx
   353dd:	01 f6                	add    %esi,%esi
   353df:	83 e2 fc             	and    $0xfffffffc,%edx
   353e2:	85 f0                	test   %esi,%eax
   353e4:	8d 4a 04             	lea    0x4(%edx),%ecx
   353e7:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   353ea:	0f 85 60 03 00 00    	jne    35750 <_malloc_r+0x510>
   353f0:	89 ca                	mov    %ecx,%edx
   353f2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   353f8:	01 f6                	add    %esi,%esi
   353fa:	83 c2 04             	add    $0x4,%edx
   353fd:	85 f0                	test   %esi,%eax
   353ff:	74 f7                	je     353f8 <_malloc_r+0x1b8>
   35401:	89 55 e4             	mov    %edx,-0x1c(%ebp)
   35404:	89 75 dc             	mov    %esi,-0x24(%ebp)
   35407:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   3540a:	8d 34 c5 40 c5 03 00 	lea    0x3c540(,%eax,8),%esi
   35411:	89 f1                	mov    %esi,%ecx
   35413:	89 45 e0             	mov    %eax,-0x20(%ebp)
   35416:	8b 59 0c             	mov    0xc(%ecx),%ebx
   35419:	39 d9                	cmp    %ebx,%ecx
   3541b:	75 1e                	jne    3543b <_malloc_r+0x1fb>
   3541d:	e9 36 03 00 00       	jmp    35758 <_malloc_r+0x518>
   35422:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   35428:	85 d2                	test   %edx,%edx
   3542a:	0f 89 c0 03 00 00    	jns    357f0 <_malloc_r+0x5b0>
   35430:	8b 5b 0c             	mov    0xc(%ebx),%ebx
   35433:	39 d9                	cmp    %ebx,%ecx
   35435:	0f 84 1d 03 00 00    	je     35758 <_malloc_r+0x518>
   3543b:	8b 43 04             	mov    0x4(%ebx),%eax
   3543e:	83 e0 fc             	and    $0xfffffffc,%eax
   35441:	89 c2                	mov    %eax,%edx
   35443:	29 fa                	sub    %edi,%edx
   35445:	83 fa 0f             	cmp    $0xf,%edx
   35448:	7e de                	jle    35428 <_malloc_r+0x1e8>
   3544a:	8b 4b 0c             	mov    0xc(%ebx),%ecx
   3544d:	8d 04 3b             	lea    (%ebx,%edi,1),%eax
   35450:	83 cf 01             	or     $0x1,%edi
   35453:	8b 73 08             	mov    0x8(%ebx),%esi
   35456:	89 7b 04             	mov    %edi,0x4(%ebx)
   35459:	89 4e 0c             	mov    %ecx,0xc(%esi)
   3545c:	89 71 08             	mov    %esi,0x8(%ecx)
   3545f:	89 d1                	mov    %edx,%ecx
   35461:	83 c9 01             	or     $0x1,%ecx
   35464:	a3 54 c5 03 00       	mov    %eax,0x3c554
   35469:	a3 50 c5 03 00       	mov    %eax,0x3c550
   3546e:	c7 40 0c 48 c5 03 00 	movl   $0x3c548,0xc(%eax)
   35475:	c7 40 08 48 c5 03 00 	movl   $0x3c548,0x8(%eax)
   3547c:	89 48 04             	mov    %ecx,0x4(%eax)
   3547f:	89 14 10             	mov    %edx,(%eax,%edx,1)
   35482:	8b 45 08             	mov    0x8(%ebp),%eax
   35485:	89 04 24             	mov    %eax,(%esp)
   35488:	e8 a3 05 00 00       	call   35a30 <__malloc_unlock>
   3548d:	8d 43 08             	lea    0x8(%ebx),%eax
   35490:	e9 22 fe ff ff       	jmp    352b7 <_malloc_r+0x77>
   35495:	8d 76 00             	lea    0x0(%esi),%esi
   35498:	b8 7e 00 00 00       	mov    $0x7e,%eax
   3549d:	be 3f 00 00 00       	mov    $0x3f,%esi
   354a2:	e9 5a fe ff ff       	jmp    35301 <_malloc_r+0xc1>
   354a7:	90                   	nop
   354a8:	8b 45 08             	mov    0x8(%ebp),%eax
   354ab:	83 4c 33 04 01       	orl    $0x1,0x4(%ebx,%esi,1)
   354b0:	89 04 24             	mov    %eax,(%esp)
   354b3:	e8 78 05 00 00       	call   35a30 <__malloc_unlock>
   354b8:	83 c4 2c             	add    $0x2c,%esp
   354bb:	8d 43 08             	lea    0x8(%ebx),%eax
   354be:	5b                   	pop    %ebx
   354bf:	5e                   	pop    %esi
   354c0:	5f                   	pop    %edi
   354c1:	5d                   	pop    %ebp
   354c2:	c3                   	ret    
   354c3:	90                   	nop
   354c4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   354c8:	8b 1d 48 c5 03 00    	mov    0x3c548,%ebx
   354ce:	8b 73 04             	mov    0x4(%ebx),%esi
   354d1:	83 e6 fc             	and    $0xfffffffc,%esi
   354d4:	39 f7                	cmp    %esi,%edi
   354d6:	77 0d                	ja     354e5 <_malloc_r+0x2a5>
   354d8:	89 f0                	mov    %esi,%eax
   354da:	29 f8                	sub    %edi,%eax
   354dc:	83 f8 0f             	cmp    $0xf,%eax
   354df:	0f 8f 6b 01 00 00    	jg     35650 <_malloc_r+0x410>
   354e5:	8b 0d 50 f0 06 00    	mov    0x6f050,%ecx
   354eb:	8d 04 33             	lea    (%ebx,%esi,1),%eax
   354ee:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   354f1:	01 f9                	add    %edi,%ecx
   354f3:	8d 81 0f 10 00 00    	lea    0x100f(%ecx),%eax
   354f9:	83 c1 10             	add    $0x10,%ecx
   354fc:	25 00 f0 ff ff       	and    $0xfffff000,%eax
   35501:	83 3d 20 c5 03 00 ff 	cmpl   $0xffffffff,0x3c520
   35508:	0f 44 c1             	cmove  %ecx,%eax
   3550b:	89 45 e0             	mov    %eax,-0x20(%ebp)
   3550e:	89 44 24 04          	mov    %eax,0x4(%esp)
   35512:	8b 45 08             	mov    0x8(%ebp),%eax
   35515:	89 04 24             	mov    %eax,(%esp)
   35518:	e8 03 13 00 00       	call   36820 <_sbrk_r>
   3551d:	83 f8 ff             	cmp    $0xffffffff,%eax
   35520:	89 c1                	mov    %eax,%ecx
   35522:	0f 84 17 03 00 00    	je     3583f <_malloc_r+0x5ff>
   35528:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
   3552b:	0f 87 02 03 00 00    	ja     35833 <_malloc_r+0x5f3>
   35531:	8b 55 e0             	mov    -0x20(%ebp),%edx
   35534:	03 15 20 f0 06 00    	add    0x6f020,%edx
   3553a:	39 4d e4             	cmp    %ecx,-0x1c(%ebp)
   3553d:	89 15 20 f0 06 00    	mov    %edx,0x6f020
   35543:	0f 84 a9 03 00 00    	je     358f2 <_malloc_r+0x6b2>
   35549:	83 3d 20 c5 03 00 ff 	cmpl   $0xffffffff,0x3c520
   35550:	0f 84 ca 03 00 00    	je     35920 <_malloc_r+0x6e0>
   35556:	89 c8                	mov    %ecx,%eax
   35558:	2b 45 e4             	sub    -0x1c(%ebp),%eax
   3555b:	01 d0                	add    %edx,%eax
   3555d:	a3 20 f0 06 00       	mov    %eax,0x6f020
   35562:	89 c8                	mov    %ecx,%eax
   35564:	ba 00 10 00 00       	mov    $0x1000,%edx
   35569:	83 e0 07             	and    $0x7,%eax
   3556c:	74 0c                	je     3557a <_malloc_r+0x33a>
   3556e:	29 c1                	sub    %eax,%ecx
   35570:	ba 08 10 00 00       	mov    $0x1008,%edx
   35575:	8d 49 08             	lea    0x8(%ecx),%ecx
   35578:	29 c2                	sub    %eax,%edx
   3557a:	8b 45 e0             	mov    -0x20(%ebp),%eax
   3557d:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   35580:	01 c8                	add    %ecx,%eax
   35582:	25 ff 0f 00 00       	and    $0xfff,%eax
   35587:	29 c2                	sub    %eax,%edx
   35589:	8b 45 08             	mov    0x8(%ebp),%eax
   3558c:	89 54 24 04          	mov    %edx,0x4(%esp)
   35590:	89 55 e0             	mov    %edx,-0x20(%ebp)
   35593:	89 04 24             	mov    %eax,(%esp)
   35596:	e8 85 12 00 00       	call   36820 <_sbrk_r>
   3559b:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   3559e:	83 f8 ff             	cmp    $0xffffffff,%eax
   355a1:	0f 84 6d 03 00 00    	je     35914 <_malloc_r+0x6d4>
   355a7:	8b 55 e0             	mov    -0x20(%ebp),%edx
   355aa:	29 c8                	sub    %ecx,%eax
   355ac:	01 d0                	add    %edx,%eax
   355ae:	83 c8 01             	or     $0x1,%eax
   355b1:	03 15 20 f0 06 00    	add    0x6f020,%edx
   355b7:	81 fb 40 c5 03 00    	cmp    $0x3c540,%ebx
   355bd:	89 0d 48 c5 03 00    	mov    %ecx,0x3c548
   355c3:	89 41 04             	mov    %eax,0x4(%ecx)
   355c6:	89 15 20 f0 06 00    	mov    %edx,0x6f020
   355cc:	0f 84 f2 02 00 00    	je     358c4 <_malloc_r+0x684>
   355d2:	83 fe 0f             	cmp    $0xf,%esi
   355d5:	0f 86 8d 02 00 00    	jbe    35868 <_malloc_r+0x628>
   355db:	8b 43 04             	mov    0x4(%ebx),%eax
   355de:	83 ee 0c             	sub    $0xc,%esi
   355e1:	83 e6 f8             	and    $0xfffffff8,%esi
   355e4:	83 e0 01             	and    $0x1,%eax
   355e7:	09 f0                	or     %esi,%eax
   355e9:	83 fe 0f             	cmp    $0xf,%esi
   355ec:	89 43 04             	mov    %eax,0x4(%ebx)
   355ef:	a1 48 c5 03 00       	mov    0x3c548,%eax
   355f4:	c7 44 33 04 05 00 00 	movl   $0x5,0x4(%ebx,%esi,1)
   355fb:	00 
   355fc:	c7 44 33 08 05 00 00 	movl   $0x5,0x8(%ebx,%esi,1)
   35603:	00 
   35604:	0f 87 a2 02 00 00    	ja     358ac <_malloc_r+0x66c>
   3560a:	3b 15 4c f0 06 00    	cmp    0x6f04c,%edx
   35610:	76 06                	jbe    35618 <_malloc_r+0x3d8>
   35612:	89 15 4c f0 06 00    	mov    %edx,0x6f04c
   35618:	3b 15 48 f0 06 00    	cmp    0x6f048,%edx
   3561e:	76 06                	jbe    35626 <_malloc_r+0x3e6>
   35620:	89 15 48 f0 06 00    	mov    %edx,0x6f048
   35626:	8b 50 04             	mov    0x4(%eax),%edx
   35629:	89 c3                	mov    %eax,%ebx
   3562b:	83 e2 fc             	and    $0xfffffffc,%edx
   3562e:	89 d0                	mov    %edx,%eax
   35630:	29 f8                	sub    %edi,%eax
   35632:	39 d7                	cmp    %edx,%edi
   35634:	77 05                	ja     3563b <_malloc_r+0x3fb>
   35636:	83 f8 0f             	cmp    $0xf,%eax
   35639:	7f 15                	jg     35650 <_malloc_r+0x410>
   3563b:	8b 45 08             	mov    0x8(%ebp),%eax
   3563e:	89 04 24             	mov    %eax,(%esp)
   35641:	e8 ea 03 00 00       	call   35a30 <__malloc_unlock>
   35646:	31 c0                	xor    %eax,%eax
   35648:	e9 6a fc ff ff       	jmp    352b7 <_malloc_r+0x77>
   3564d:	8d 76 00             	lea    0x0(%esi),%esi
   35650:	89 fa                	mov    %edi,%edx
   35652:	83 c8 01             	or     $0x1,%eax
   35655:	83 ca 01             	or     $0x1,%edx
   35658:	89 53 04             	mov    %edx,0x4(%ebx)
   3565b:	8d 14 3b             	lea    (%ebx,%edi,1),%edx
   3565e:	89 15 48 c5 03 00    	mov    %edx,0x3c548
   35664:	89 42 04             	mov    %eax,0x4(%edx)
   35667:	8b 45 08             	mov    0x8(%ebp),%eax
   3566a:	89 04 24             	mov    %eax,(%esp)
   3566d:	e8 be 03 00 00       	call   35a30 <__malloc_unlock>
   35672:	83 c4 2c             	add    $0x2c,%esp
   35675:	8d 43 08             	lea    0x8(%ebx),%eax
   35678:	5b                   	pop    %ebx
   35679:	5e                   	pop    %esi
   3567a:	5f                   	pop    %edi
   3567b:	5d                   	pop    %ebp
   3567c:	c3                   	ret    
   3567d:	8d 76 00             	lea    0x0(%esi),%esi
   35680:	83 fe 14             	cmp    $0x14,%esi
   35683:	0f 86 8f 01 00 00    	jbe    35818 <_malloc_r+0x5d8>
   35689:	83 fe 54             	cmp    $0x54,%esi
   3568c:	0f 87 be 01 00 00    	ja     35850 <_malloc_r+0x610>
   35692:	89 fe                	mov    %edi,%esi
   35694:	c1 ee 0c             	shr    $0xc,%esi
   35697:	83 c6 6e             	add    $0x6e,%esi
   3569a:	8d 04 36             	lea    (%esi,%esi,1),%eax
   3569d:	e9 5f fc ff ff       	jmp    35301 <_malloc_r+0xc1>
   356a2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   356a8:	89 f1                	mov    %esi,%ecx
   356aa:	c1 e9 09             	shr    $0x9,%ecx
   356ad:	83 f9 04             	cmp    $0x4,%ecx
   356b0:	0f 86 6d 01 00 00    	jbe    35823 <_malloc_r+0x5e3>
   356b6:	83 f9 14             	cmp    $0x14,%ecx
   356b9:	0f 87 0f 02 00 00    	ja     358ce <_malloc_r+0x68e>
   356bf:	83 c1 5b             	add    $0x5b,%ecx
   356c2:	8d 04 09             	lea    (%ecx,%ecx,1),%eax
   356c5:	8d 04 85 40 c5 03 00 	lea    0x3c540(,%eax,4),%eax
   356cc:	8b 50 08             	mov    0x8(%eax),%edx
   356cf:	39 c2                	cmp    %eax,%edx
   356d1:	0f 84 a1 01 00 00    	je     35878 <_malloc_r+0x638>
   356d7:	90                   	nop
   356d8:	8b 4a 04             	mov    0x4(%edx),%ecx
   356db:	83 e1 fc             	and    $0xfffffffc,%ecx
   356de:	39 ce                	cmp    %ecx,%esi
   356e0:	73 07                	jae    356e9 <_malloc_r+0x4a9>
   356e2:	8b 52 08             	mov    0x8(%edx),%edx
   356e5:	39 d0                	cmp    %edx,%eax
   356e7:	75 ef                	jne    356d8 <_malloc_r+0x498>
   356e9:	8b 4a 0c             	mov    0xc(%edx),%ecx
   356ec:	a1 44 c5 03 00       	mov    0x3c544,%eax
   356f1:	89 4b 0c             	mov    %ecx,0xc(%ebx)
   356f4:	89 53 08             	mov    %edx,0x8(%ebx)
   356f7:	89 59 08             	mov    %ebx,0x8(%ecx)
   356fa:	89 5a 0c             	mov    %ebx,0xc(%edx)
   356fd:	e9 bb fc ff ff       	jmp    353bd <_malloc_r+0x17d>
   35702:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   35708:	89 c1                	mov    %eax,%ecx
   3570a:	8d 14 3b             	lea    (%ebx,%edi,1),%edx
   3570d:	83 c9 01             	or     $0x1,%ecx
   35710:	83 cf 01             	or     $0x1,%edi
   35713:	89 7b 04             	mov    %edi,0x4(%ebx)
   35716:	89 15 54 c5 03 00    	mov    %edx,0x3c554
   3571c:	89 15 50 c5 03 00    	mov    %edx,0x3c550
   35722:	c7 42 0c 48 c5 03 00 	movl   $0x3c548,0xc(%edx)
   35729:	c7 42 08 48 c5 03 00 	movl   $0x3c548,0x8(%edx)
   35730:	89 4a 04             	mov    %ecx,0x4(%edx)
   35733:	89 04 02             	mov    %eax,(%edx,%eax,1)
   35736:	8b 45 08             	mov    0x8(%ebp),%eax
   35739:	89 04 24             	mov    %eax,(%esp)
   3573c:	e8 ef 02 00 00       	call   35a30 <__malloc_unlock>
   35741:	8d 43 08             	lea    0x8(%ebx),%eax
   35744:	e9 6e fb ff ff       	jmp    352b7 <_malloc_r+0x77>
   35749:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   35750:	89 75 dc             	mov    %esi,-0x24(%ebp)
   35753:	e9 af fc ff ff       	jmp    35407 <_malloc_r+0x1c7>
   35758:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
   3575c:	83 c1 08             	add    $0x8,%ecx
   3575f:	f6 45 e0 03          	testb  $0x3,-0x20(%ebp)
   35763:	0f 85 ad fc ff ff    	jne    35416 <_malloc_r+0x1d6>
   35769:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   3576c:	eb 12                	jmp    35780 <_malloc_r+0x540>
   3576e:	66 90                	xchg   %ax,%ax
   35770:	8d 56 f8             	lea    -0x8(%esi),%edx
   35773:	8b 36                	mov    (%esi),%esi
   35775:	83 e8 01             	sub    $0x1,%eax
   35778:	39 d6                	cmp    %edx,%esi
   3577a:	0f 85 ea 01 00 00    	jne    3596a <_malloc_r+0x72a>
   35780:	a8 03                	test   $0x3,%al
   35782:	75 ec                	jne    35770 <_malloc_r+0x530>
   35784:	8b 45 dc             	mov    -0x24(%ebp),%eax
   35787:	f7 d0                	not    %eax
   35789:	23 05 44 c5 03 00    	and    0x3c544,%eax
   3578f:	a3 44 c5 03 00       	mov    %eax,0x3c544
   35794:	d1 65 dc             	shll   -0x24(%ebp)
   35797:	8b 55 dc             	mov    -0x24(%ebp),%edx
   3579a:	39 c2                	cmp    %eax,%edx
   3579c:	0f 87 26 fd ff ff    	ja     354c8 <_malloc_r+0x288>
   357a2:	85 d2                	test   %edx,%edx
   357a4:	0f 84 1e fd ff ff    	je     354c8 <_malloc_r+0x288>
   357aa:	85 c2                	test   %eax,%edx
   357ac:	0f 85 c2 01 00 00    	jne    35974 <_malloc_r+0x734>
   357b2:	8b 75 e0             	mov    -0x20(%ebp),%esi
   357b5:	89 f1                	mov    %esi,%ecx
   357b7:	01 d2                	add    %edx,%edx
   357b9:	83 c1 04             	add    $0x4,%ecx
   357bc:	85 d0                	test   %edx,%eax
   357be:	74 f7                	je     357b7 <_malloc_r+0x577>
   357c0:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   357c3:	89 55 dc             	mov    %edx,-0x24(%ebp)
   357c6:	e9 3c fc ff ff       	jmp    35407 <_malloc_r+0x1c7>
   357cb:	90                   	nop
   357cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   357d0:	8d 43 08             	lea    0x8(%ebx),%eax
   357d3:	8b 5b 14             	mov    0x14(%ebx),%ebx
   357d6:	39 d8                	cmp    %ebx,%eax
   357d8:	0f 85 b4 fa ff ff    	jne    35292 <_malloc_r+0x52>
   357de:	8d 42 02             	lea    0x2(%edx),%eax
   357e1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   357e4:	e9 56 fb ff ff       	jmp    3533f <_malloc_r+0xff>
   357e9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   357f0:	83 4c 03 04 01       	orl    $0x1,0x4(%ebx,%eax,1)
   357f5:	8b 53 08             	mov    0x8(%ebx),%edx
   357f8:	8b 43 0c             	mov    0xc(%ebx),%eax
   357fb:	89 42 0c             	mov    %eax,0xc(%edx)
   357fe:	89 50 08             	mov    %edx,0x8(%eax)
   35801:	8b 45 08             	mov    0x8(%ebp),%eax
   35804:	89 04 24             	mov    %eax,(%esp)
   35807:	e8 24 02 00 00       	call   35a30 <__malloc_unlock>
   3580c:	8d 43 08             	lea    0x8(%ebx),%eax
   3580f:	e9 a3 fa ff ff       	jmp    352b7 <_malloc_r+0x77>
   35814:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   35818:	83 c6 5b             	add    $0x5b,%esi
   3581b:	8d 04 36             	lea    (%esi,%esi,1),%eax
   3581e:	e9 de fa ff ff       	jmp    35301 <_malloc_r+0xc1>
   35823:	89 f1                	mov    %esi,%ecx
   35825:	c1 e9 06             	shr    $0x6,%ecx
   35828:	83 c1 38             	add    $0x38,%ecx
   3582b:	8d 04 09             	lea    (%ecx,%ecx,1),%eax
   3582e:	e9 92 fe ff ff       	jmp    356c5 <_malloc_r+0x485>
   35833:	81 fb 40 c5 03 00    	cmp    $0x3c540,%ebx
   35839:	0f 84 f2 fc ff ff    	je     35531 <_malloc_r+0x2f1>
   3583f:	8b 1d 48 c5 03 00    	mov    0x3c548,%ebx
   35845:	8b 53 04             	mov    0x4(%ebx),%edx
   35848:	83 e2 fc             	and    $0xfffffffc,%edx
   3584b:	e9 de fd ff ff       	jmp    3562e <_malloc_r+0x3ee>
   35850:	81 fe 54 01 00 00    	cmp    $0x154,%esi
   35856:	77 3c                	ja     35894 <_malloc_r+0x654>
   35858:	89 fe                	mov    %edi,%esi
   3585a:	c1 ee 0f             	shr    $0xf,%esi
   3585d:	83 c6 77             	add    $0x77,%esi
   35860:	8d 04 36             	lea    (%esi,%esi,1),%eax
   35863:	e9 99 fa ff ff       	jmp    35301 <_malloc_r+0xc1>
   35868:	c7 41 04 01 00 00 00 	movl   $0x1,0x4(%ecx)
   3586f:	89 cb                	mov    %ecx,%ebx
   35871:	31 d2                	xor    %edx,%edx
   35873:	e9 b6 fd ff ff       	jmp    3562e <_malloc_r+0x3ee>
   35878:	c1 f9 02             	sar    $0x2,%ecx
   3587b:	b8 01 00 00 00       	mov    $0x1,%eax
   35880:	d3 e0                	shl    %cl,%eax
   35882:	89 d1                	mov    %edx,%ecx
   35884:	0b 05 44 c5 03 00    	or     0x3c544,%eax
   3588a:	a3 44 c5 03 00       	mov    %eax,0x3c544
   3588f:	e9 5d fe ff ff       	jmp    356f1 <_malloc_r+0x4b1>
   35894:	81 fe 54 05 00 00    	cmp    $0x554,%esi
   3589a:	77 47                	ja     358e3 <_malloc_r+0x6a3>
   3589c:	89 fe                	mov    %edi,%esi
   3589e:	c1 ee 12             	shr    $0x12,%esi
   358a1:	83 c6 7c             	add    $0x7c,%esi
   358a4:	8d 04 36             	lea    (%esi,%esi,1),%eax
   358a7:	e9 55 fa ff ff       	jmp    35301 <_malloc_r+0xc1>
   358ac:	8b 45 08             	mov    0x8(%ebp),%eax
   358af:	83 c3 08             	add    $0x8,%ebx
   358b2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
   358b6:	89 04 24             	mov    %eax,(%esp)
   358b9:	e8 c2 22 00 00       	call   37b80 <_free_r>
   358be:	8b 15 20 f0 06 00    	mov    0x6f020,%edx
   358c4:	a1 48 c5 03 00       	mov    0x3c548,%eax
   358c9:	e9 3c fd ff ff       	jmp    3560a <_malloc_r+0x3ca>
   358ce:	83 f9 54             	cmp    $0x54,%ecx
   358d1:	77 58                	ja     3592b <_malloc_r+0x6eb>
   358d3:	89 f1                	mov    %esi,%ecx
   358d5:	c1 e9 0c             	shr    $0xc,%ecx
   358d8:	83 c1 6e             	add    $0x6e,%ecx
   358db:	8d 04 09             	lea    (%ecx,%ecx,1),%eax
   358de:	e9 e2 fd ff ff       	jmp    356c5 <_malloc_r+0x485>
   358e3:	b8 fc 00 00 00       	mov    $0xfc,%eax
   358e8:	be 7e 00 00 00       	mov    $0x7e,%esi
   358ed:	e9 0f fa ff ff       	jmp    35301 <_malloc_r+0xc1>
   358f2:	f7 45 e4 ff 0f 00 00 	testl  $0xfff,-0x1c(%ebp)
   358f9:	0f 85 4a fc ff ff    	jne    35549 <_malloc_r+0x309>
   358ff:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   35902:	a1 48 c5 03 00       	mov    0x3c548,%eax
   35907:	01 f1                	add    %esi,%ecx
   35909:	83 c9 01             	or     $0x1,%ecx
   3590c:	89 48 04             	mov    %ecx,0x4(%eax)
   3590f:	e9 f6 fc ff ff       	jmp    3560a <_malloc_r+0x3ca>
   35914:	b8 01 00 00 00       	mov    $0x1,%eax
   35919:	31 d2                	xor    %edx,%edx
   3591b:	e9 91 fc ff ff       	jmp    355b1 <_malloc_r+0x371>
   35920:	89 0d 20 c5 03 00    	mov    %ecx,0x3c520
   35926:	e9 37 fc ff ff       	jmp    35562 <_malloc_r+0x322>
   3592b:	81 f9 54 01 00 00    	cmp    $0x154,%ecx
   35931:	77 10                	ja     35943 <_malloc_r+0x703>
   35933:	89 f1                	mov    %esi,%ecx
   35935:	c1 e9 0f             	shr    $0xf,%ecx
   35938:	83 c1 77             	add    $0x77,%ecx
   3593b:	8d 04 09             	lea    (%ecx,%ecx,1),%eax
   3593e:	e9 82 fd ff ff       	jmp    356c5 <_malloc_r+0x485>
   35943:	81 f9 54 05 00 00    	cmp    $0x554,%ecx
   35949:	77 10                	ja     3595b <_malloc_r+0x71b>
   3594b:	89 f1                	mov    %esi,%ecx
   3594d:	c1 e9 12             	shr    $0x12,%ecx
   35950:	83 c1 7c             	add    $0x7c,%ecx
   35953:	8d 04 09             	lea    (%ecx,%ecx,1),%eax
   35956:	e9 6a fd ff ff       	jmp    356c5 <_malloc_r+0x485>
   3595b:	b8 fc 00 00 00       	mov    $0xfc,%eax
   35960:	b9 7e 00 00 00       	mov    $0x7e,%ecx
   35965:	e9 5b fd ff ff       	jmp    356c5 <_malloc_r+0x485>
   3596a:	a1 44 c5 03 00       	mov    0x3c544,%eax
   3596f:	e9 20 fe ff ff       	jmp    35794 <_malloc_r+0x554>
   35974:	8b 45 e0             	mov    -0x20(%ebp),%eax
   35977:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   3597a:	e9 88 fa ff ff       	jmp    35407 <_malloc_r+0x1c7>
   3597f:	90                   	nop

00035980 <memchr>:
   35980:	55                   	push   %ebp
   35981:	89 e5                	mov    %esp,%ebp
   35983:	57                   	push   %edi
   35984:	0f b6 45 0c          	movzbl 0xc(%ebp),%eax
   35988:	8b 4d 10             	mov    0x10(%ebp),%ecx
   3598b:	8b 7d 08             	mov    0x8(%ebp),%edi
   3598e:	31 d2                	xor    %edx,%edx
   35990:	85 c9                	test   %ecx,%ecx
   35992:	74 79                	je     35a0d <L20>
   35994:	f7 c7 03 00 00 00    	test   $0x3,%edi
   3599a:	74 28                	je     359c4 <L5>
   3599c:	3a 07                	cmp    (%edi),%al
   3599e:	74 6a                	je     35a0a <L15>
   359a0:	47                   	inc    %edi
   359a1:	49                   	dec    %ecx
   359a2:	74 69                	je     35a0d <L20>
   359a4:	f7 c7 03 00 00 00    	test   $0x3,%edi
   359aa:	74 18                	je     359c4 <L5>
   359ac:	3a 07                	cmp    (%edi),%al
   359ae:	74 5a                	je     35a0a <L15>
   359b0:	47                   	inc    %edi
   359b1:	49                   	dec    %ecx
   359b2:	74 59                	je     35a0d <L20>
   359b4:	f7 c7 03 00 00 00    	test   $0x3,%edi
   359ba:	74 08                	je     359c4 <L5>
   359bc:	3a 07                	cmp    (%edi),%al
   359be:	74 4a                	je     35a0a <L15>
   359c0:	47                   	inc    %edi
   359c1:	49                   	dec    %ecx
   359c2:	74 49                	je     35a0d <L20>

000359c4 <L5>:
   359c4:	88 c4                	mov    %al,%ah
   359c6:	89 c2                	mov    %eax,%edx
   359c8:	c1 e2 10             	shl    $0x10,%edx
   359cb:	09 d0                	or     %edx,%eax
   359cd:	53                   	push   %ebx
   359ce:	66 90                	xchg   %ax,%ax

000359d0 <L8>:
   359d0:	83 e9 04             	sub    $0x4,%ecx
   359d3:	72 1c                	jb     359f1 <L9>
   359d5:	8b 17                	mov    (%edi),%edx
   359d7:	83 c7 04             	add    $0x4,%edi
   359da:	31 c2                	xor    %eax,%edx
   359dc:	8d 9a ff fe fe fe    	lea    -0x1010101(%edx),%ebx
   359e2:	f7 d2                	not    %edx
   359e4:	21 d3                	and    %edx,%ebx
   359e6:	f7 c3 80 80 80 80    	test   $0x80808080,%ebx
   359ec:	74 e2                	je     359d0 <L8>
   359ee:	83 ef 04             	sub    $0x4,%edi

000359f1 <L9>:
   359f1:	5b                   	pop    %ebx
   359f2:	31 d2                	xor    %edx,%edx
   359f4:	83 c1 04             	add    $0x4,%ecx
   359f7:	74 14                	je     35a0d <L20>
   359f9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

00035a00 <L10>:
   35a00:	3a 07                	cmp    (%edi),%al
   35a02:	74 06                	je     35a0a <L15>
   35a04:	47                   	inc    %edi
   35a05:	49                   	dec    %ecx
   35a06:	75 f8                	jne    35a00 <L10>
   35a08:	31 ff                	xor    %edi,%edi

00035a0a <L15>:
   35a0a:	4a                   	dec    %edx
   35a0b:	21 fa                	and    %edi,%edx

00035a0d <L20>:
   35a0d:	89 d0                	mov    %edx,%eax
   35a0f:	8d 65 fc             	lea    -0x4(%ebp),%esp
   35a12:	5f                   	pop    %edi
   35a13:	c9                   	leave  
   35a14:	c3                   	ret    
   35a15:	66 90                	xchg   %ax,%ax
   35a17:	66 90                	xchg   %ax,%ax
   35a19:	66 90                	xchg   %ax,%ax
   35a1b:	66 90                	xchg   %ax,%ax
   35a1d:	66 90                	xchg   %ax,%ax
   35a1f:	90                   	nop

00035a20 <__malloc_lock>:
   35a20:	55                   	push   %ebp
   35a21:	89 e5                	mov    %esp,%ebp
   35a23:	5d                   	pop    %ebp
   35a24:	c3                   	ret    
   35a25:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   35a29:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00035a30 <__malloc_unlock>:
   35a30:	55                   	push   %ebp
   35a31:	89 e5                	mov    %esp,%ebp
   35a33:	5d                   	pop    %ebp
   35a34:	c3                   	ret    
   35a35:	66 90                	xchg   %ax,%ax
   35a37:	66 90                	xchg   %ax,%ax
   35a39:	66 90                	xchg   %ax,%ax
   35a3b:	66 90                	xchg   %ax,%ax
   35a3d:	66 90                	xchg   %ax,%ax
   35a3f:	90                   	nop

00035a40 <_Balloc>:
   35a40:	55                   	push   %ebp
   35a41:	89 e5                	mov    %esp,%ebp
   35a43:	57                   	push   %edi
   35a44:	56                   	push   %esi
   35a45:	53                   	push   %ebx
   35a46:	83 ec 1c             	sub    $0x1c,%esp
   35a49:	8b 75 08             	mov    0x8(%ebp),%esi
   35a4c:	8b 5d 0c             	mov    0xc(%ebp),%ebx
   35a4f:	8b 46 4c             	mov    0x4c(%esi),%eax
   35a52:	85 c0                	test   %eax,%eax
   35a54:	74 2a                	je     35a80 <_Balloc+0x40>
   35a56:	8d 14 98             	lea    (%eax,%ebx,4),%edx
   35a59:	8b 02                	mov    (%edx),%eax
   35a5b:	85 c0                	test   %eax,%eax
   35a5d:	74 49                	je     35aa8 <_Balloc+0x68>
   35a5f:	8b 08                	mov    (%eax),%ecx
   35a61:	89 0a                	mov    %ecx,(%edx)
   35a63:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
   35a6a:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
   35a71:	83 c4 1c             	add    $0x1c,%esp
   35a74:	5b                   	pop    %ebx
   35a75:	5e                   	pop    %esi
   35a76:	5f                   	pop    %edi
   35a77:	5d                   	pop    %ebp
   35a78:	c3                   	ret    
   35a79:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   35a80:	c7 44 24 08 21 00 00 	movl   $0x21,0x8(%esp)
   35a87:	00 
   35a88:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
   35a8f:	00 
   35a90:	89 34 24             	mov    %esi,(%esp)
   35a93:	e8 38 1f 00 00       	call   379d0 <_calloc_r>
   35a98:	85 c0                	test   %eax,%eax
   35a9a:	89 46 4c             	mov    %eax,0x4c(%esi)
   35a9d:	75 b7                	jne    35a56 <_Balloc+0x16>
   35a9f:	31 c0                	xor    %eax,%eax
   35aa1:	eb ce                	jmp    35a71 <_Balloc+0x31>
   35aa3:	90                   	nop
   35aa4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   35aa8:	89 d9                	mov    %ebx,%ecx
   35aaa:	bf 01 00 00 00       	mov    $0x1,%edi
   35aaf:	d3 e7                	shl    %cl,%edi
   35ab1:	8d 04 bd 14 00 00 00 	lea    0x14(,%edi,4),%eax
   35ab8:	89 44 24 08          	mov    %eax,0x8(%esp)
   35abc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
   35ac3:	00 
   35ac4:	89 34 24             	mov    %esi,(%esp)
   35ac7:	e8 04 1f 00 00       	call   379d0 <_calloc_r>
   35acc:	85 c0                	test   %eax,%eax
   35ace:	74 cf                	je     35a9f <_Balloc+0x5f>
   35ad0:	89 58 04             	mov    %ebx,0x4(%eax)
   35ad3:	89 78 08             	mov    %edi,0x8(%eax)
   35ad6:	eb 8b                	jmp    35a63 <_Balloc+0x23>
   35ad8:	90                   	nop
   35ad9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

00035ae0 <_Bfree>:
   35ae0:	55                   	push   %ebp
   35ae1:	89 e5                	mov    %esp,%ebp
   35ae3:	8b 45 0c             	mov    0xc(%ebp),%eax
   35ae6:	85 c0                	test   %eax,%eax
   35ae8:	74 12                	je     35afc <_Bfree+0x1c>
   35aea:	8b 55 08             	mov    0x8(%ebp),%edx
   35aed:	8b 48 04             	mov    0x4(%eax),%ecx
   35af0:	8b 52 4c             	mov    0x4c(%edx),%edx
   35af3:	8d 14 8a             	lea    (%edx,%ecx,4),%edx
   35af6:	8b 0a                	mov    (%edx),%ecx
   35af8:	89 08                	mov    %ecx,(%eax)
   35afa:	89 02                	mov    %eax,(%edx)
   35afc:	5d                   	pop    %ebp
   35afd:	c3                   	ret    
   35afe:	66 90                	xchg   %ax,%ax

00035b00 <__multadd>:
   35b00:	55                   	push   %ebp
   35b01:	89 e5                	mov    %esp,%ebp
   35b03:	57                   	push   %edi
   35b04:	56                   	push   %esi
   35b05:	53                   	push   %ebx
   35b06:	83 ec 2c             	sub    $0x2c,%esp
   35b09:	8b 45 0c             	mov    0xc(%ebp),%eax
   35b0c:	8b 5d 14             	mov    0x14(%ebp),%ebx
   35b0f:	8b 40 10             	mov    0x10(%eax),%eax
   35b12:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   35b15:	8b 45 0c             	mov    0xc(%ebp),%eax
   35b18:	8d 78 14             	lea    0x14(%eax),%edi
   35b1b:	31 c0                	xor    %eax,%eax
   35b1d:	8d 76 00             	lea    0x0(%esi),%esi
   35b20:	8b 0c 87             	mov    (%edi,%eax,4),%ecx
   35b23:	0f b7 d1             	movzwl %cx,%edx
   35b26:	0f af 55 10          	imul   0x10(%ebp),%edx
   35b2a:	c1 e9 10             	shr    $0x10,%ecx
   35b2d:	0f af 4d 10          	imul   0x10(%ebp),%ecx
   35b31:	01 da                	add    %ebx,%edx
   35b33:	89 d3                	mov    %edx,%ebx
   35b35:	0f b7 d2             	movzwl %dx,%edx
   35b38:	c1 eb 10             	shr    $0x10,%ebx
   35b3b:	01 d9                	add    %ebx,%ecx
   35b3d:	89 ce                	mov    %ecx,%esi
   35b3f:	c1 e1 10             	shl    $0x10,%ecx
   35b42:	01 d1                	add    %edx,%ecx
   35b44:	c1 ee 10             	shr    $0x10,%esi
   35b47:	89 0c 87             	mov    %ecx,(%edi,%eax,4)
   35b4a:	83 c0 01             	add    $0x1,%eax
   35b4d:	89 f3                	mov    %esi,%ebx
   35b4f:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
   35b52:	7f cc                	jg     35b20 <__multadd+0x20>
   35b54:	85 f6                	test   %esi,%esi
   35b56:	74 1b                	je     35b73 <__multadd+0x73>
   35b58:	8b 45 0c             	mov    0xc(%ebp),%eax
   35b5b:	8b 7d e4             	mov    -0x1c(%ebp),%edi
   35b5e:	3b 78 08             	cmp    0x8(%eax),%edi
   35b61:	7d 1d                	jge    35b80 <__multadd+0x80>
   35b63:	8b 7d 0c             	mov    0xc(%ebp),%edi
   35b66:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   35b69:	89 74 87 14          	mov    %esi,0x14(%edi,%eax,4)
   35b6d:	83 c0 01             	add    $0x1,%eax
   35b70:	89 47 10             	mov    %eax,0x10(%edi)
   35b73:	8b 45 0c             	mov    0xc(%ebp),%eax
   35b76:	83 c4 2c             	add    $0x2c,%esp
   35b79:	5b                   	pop    %ebx
   35b7a:	5e                   	pop    %esi
   35b7b:	5f                   	pop    %edi
   35b7c:	5d                   	pop    %ebp
   35b7d:	c3                   	ret    
   35b7e:	66 90                	xchg   %ax,%ax
   35b80:	8b 40 04             	mov    0x4(%eax),%eax
   35b83:	89 45 e0             	mov    %eax,-0x20(%ebp)
   35b86:	83 c0 01             	add    $0x1,%eax
   35b89:	89 44 24 04          	mov    %eax,0x4(%esp)
   35b8d:	8b 45 08             	mov    0x8(%ebp),%eax
   35b90:	89 04 24             	mov    %eax,(%esp)
   35b93:	e8 a8 fe ff ff       	call   35a40 <_Balloc>
   35b98:	89 c3                	mov    %eax,%ebx
   35b9a:	8b 45 0c             	mov    0xc(%ebp),%eax
   35b9d:	8b 40 10             	mov    0x10(%eax),%eax
   35ba0:	8d 04 85 08 00 00 00 	lea    0x8(,%eax,4),%eax
   35ba7:	89 44 24 08          	mov    %eax,0x8(%esp)
   35bab:	8b 45 0c             	mov    0xc(%ebp),%eax
   35bae:	83 c0 0c             	add    $0xc,%eax
   35bb1:	89 44 24 04          	mov    %eax,0x4(%esp)
   35bb5:	8d 43 0c             	lea    0xc(%ebx),%eax
   35bb8:	89 04 24             	mov    %eax,(%esp)
   35bbb:	e8 c4 c0 ff ff       	call   31c84 <memcpy>
   35bc0:	8b 45 0c             	mov    0xc(%ebp),%eax
   35bc3:	8b 7d 0c             	mov    0xc(%ebp),%edi
   35bc6:	89 5d 0c             	mov    %ebx,0xc(%ebp)
   35bc9:	8b 50 04             	mov    0x4(%eax),%edx
   35bcc:	8b 45 08             	mov    0x8(%ebp),%eax
   35bcf:	8b 40 4c             	mov    0x4c(%eax),%eax
   35bd2:	8d 04 90             	lea    (%eax,%edx,4),%eax
   35bd5:	8b 10                	mov    (%eax),%edx
   35bd7:	89 17                	mov    %edx,(%edi)
   35bd9:	89 38                	mov    %edi,(%eax)
   35bdb:	eb 86                	jmp    35b63 <__multadd+0x63>
   35bdd:	8d 76 00             	lea    0x0(%esi),%esi

00035be0 <__s2b>:
   35be0:	55                   	push   %ebp
   35be1:	ba 39 8e e3 38       	mov    $0x38e38e39,%edx
   35be6:	89 e5                	mov    %esp,%ebp
   35be8:	57                   	push   %edi
   35be9:	56                   	push   %esi
   35bea:	53                   	push   %ebx
   35beb:	83 ec 2c             	sub    $0x2c,%esp
   35bee:	8b 45 14             	mov    0x14(%ebp),%eax
   35bf1:	8b 5d 08             	mov    0x8(%ebp),%ebx
   35bf4:	8b 75 0c             	mov    0xc(%ebp),%esi
   35bf7:	8d 48 08             	lea    0x8(%eax),%ecx
   35bfa:	89 c8                	mov    %ecx,%eax
   35bfc:	f7 ea                	imul   %edx
   35bfe:	c1 f9 1f             	sar    $0x1f,%ecx
   35c01:	d1 fa                	sar    %edx
   35c03:	29 ca                	sub    %ecx,%edx
   35c05:	83 fa 01             	cmp    $0x1,%edx
   35c08:	0f 8e be 00 00 00    	jle    35ccc <__s2b+0xec>
   35c0e:	b8 01 00 00 00       	mov    $0x1,%eax
   35c13:	31 c9                	xor    %ecx,%ecx
   35c15:	8d 76 00             	lea    0x0(%esi),%esi
   35c18:	01 c0                	add    %eax,%eax
   35c1a:	83 c1 01             	add    $0x1,%ecx
   35c1d:	39 c2                	cmp    %eax,%edx
   35c1f:	7f f7                	jg     35c18 <__s2b+0x38>
   35c21:	89 4c 24 04          	mov    %ecx,0x4(%esp)
   35c25:	89 1c 24             	mov    %ebx,(%esp)
   35c28:	e8 13 fe ff ff       	call   35a40 <_Balloc>
   35c2d:	8b 55 18             	mov    0x18(%ebp),%edx
   35c30:	83 7d 10 09          	cmpl   $0x9,0x10(%ebp)
   35c34:	89 50 14             	mov    %edx,0x14(%eax)
   35c37:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
   35c3e:	0f 8e 7c 00 00 00    	jle    35cc0 <__s2b+0xe0>
   35c44:	8d 4e 09             	lea    0x9(%esi),%ecx
   35c47:	03 75 10             	add    0x10(%ebp),%esi
   35c4a:	89 cf                	mov    %ecx,%edi
   35c4c:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   35c4f:	90                   	nop
   35c50:	83 c7 01             	add    $0x1,%edi
   35c53:	0f be 57 ff          	movsbl -0x1(%edi),%edx
   35c57:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   35c5e:	00 
   35c5f:	89 44 24 04          	mov    %eax,0x4(%esp)
   35c63:	89 1c 24             	mov    %ebx,(%esp)
   35c66:	83 ea 30             	sub    $0x30,%edx
   35c69:	89 54 24 0c          	mov    %edx,0xc(%esp)
   35c6d:	e8 8e fe ff ff       	call   35b00 <__multadd>
   35c72:	39 f7                	cmp    %esi,%edi
   35c74:	75 da                	jne    35c50 <__s2b+0x70>
   35c76:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   35c79:	8b 7d 10             	mov    0x10(%ebp),%edi
   35c7c:	8d 74 39 f8          	lea    -0x8(%ecx,%edi,1),%esi
   35c80:	8b 4d 10             	mov    0x10(%ebp),%ecx
   35c83:	39 4d 14             	cmp    %ecx,0x14(%ebp)
   35c86:	7e 2e                	jle    35cb6 <__s2b+0xd6>
   35c88:	8b 7d 14             	mov    0x14(%ebp),%edi
   35c8b:	29 cf                	sub    %ecx,%edi
   35c8d:	01 f7                	add    %esi,%edi
   35c8f:	90                   	nop
   35c90:	83 c6 01             	add    $0x1,%esi
   35c93:	0f be 56 ff          	movsbl -0x1(%esi),%edx
   35c97:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   35c9e:	00 
   35c9f:	89 44 24 04          	mov    %eax,0x4(%esp)
   35ca3:	89 1c 24             	mov    %ebx,(%esp)
   35ca6:	83 ea 30             	sub    $0x30,%edx
   35ca9:	89 54 24 0c          	mov    %edx,0xc(%esp)
   35cad:	e8 4e fe ff ff       	call   35b00 <__multadd>
   35cb2:	39 fe                	cmp    %edi,%esi
   35cb4:	75 da                	jne    35c90 <__s2b+0xb0>
   35cb6:	83 c4 2c             	add    $0x2c,%esp
   35cb9:	5b                   	pop    %ebx
   35cba:	5e                   	pop    %esi
   35cbb:	5f                   	pop    %edi
   35cbc:	5d                   	pop    %ebp
   35cbd:	c3                   	ret    
   35cbe:	66 90                	xchg   %ax,%ax
   35cc0:	83 c6 0a             	add    $0xa,%esi
   35cc3:	c7 45 10 09 00 00 00 	movl   $0x9,0x10(%ebp)
   35cca:	eb b4                	jmp    35c80 <__s2b+0xa0>
   35ccc:	31 c9                	xor    %ecx,%ecx
   35cce:	e9 4e ff ff ff       	jmp    35c21 <__s2b+0x41>
   35cd3:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   35cd9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00035ce0 <__hi0bits>:
   35ce0:	55                   	push   %ebp
   35ce1:	31 c9                	xor    %ecx,%ecx
   35ce3:	89 e5                	mov    %esp,%ebp
   35ce5:	8b 55 08             	mov    0x8(%ebp),%edx
   35ce8:	f7 c2 00 00 ff ff    	test   $0xffff0000,%edx
   35cee:	75 05                	jne    35cf5 <__hi0bits+0x15>
   35cf0:	c1 e2 10             	shl    $0x10,%edx
   35cf3:	b1 10                	mov    $0x10,%cl
   35cf5:	f7 c2 00 00 00 ff    	test   $0xff000000,%edx
   35cfb:	75 06                	jne    35d03 <__hi0bits+0x23>
   35cfd:	83 c1 08             	add    $0x8,%ecx
   35d00:	c1 e2 08             	shl    $0x8,%edx
   35d03:	f7 c2 00 00 00 f0    	test   $0xf0000000,%edx
   35d09:	75 06                	jne    35d11 <__hi0bits+0x31>
   35d0b:	83 c1 04             	add    $0x4,%ecx
   35d0e:	c1 e2 04             	shl    $0x4,%edx
   35d11:	f7 c2 00 00 00 c0    	test   $0xc0000000,%edx
   35d17:	75 06                	jne    35d1f <__hi0bits+0x3f>
   35d19:	83 c1 02             	add    $0x2,%ecx
   35d1c:	c1 e2 02             	shl    $0x2,%edx
   35d1f:	85 d2                	test   %edx,%edx
   35d21:	89 c8                	mov    %ecx,%eax
   35d23:	78 0d                	js     35d32 <__hi0bits+0x52>
   35d25:	81 e2 00 00 00 40    	and    $0x40000000,%edx
   35d2b:	b8 20 00 00 00       	mov    $0x20,%eax
   35d30:	75 06                	jne    35d38 <__hi0bits+0x58>
   35d32:	5d                   	pop    %ebp
   35d33:	c3                   	ret    
   35d34:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   35d38:	8d 41 01             	lea    0x1(%ecx),%eax
   35d3b:	5d                   	pop    %ebp
   35d3c:	c3                   	ret    
   35d3d:	8d 76 00             	lea    0x0(%esi),%esi

00035d40 <__lo0bits>:
   35d40:	55                   	push   %ebp
   35d41:	89 e5                	mov    %esp,%ebp
   35d43:	53                   	push   %ebx
   35d44:	8b 5d 08             	mov    0x8(%ebp),%ebx
   35d47:	8b 13                	mov    (%ebx),%edx
   35d49:	f6 c2 07             	test   $0x7,%dl
   35d4c:	74 1a                	je     35d68 <__lo0bits+0x28>
   35d4e:	31 c0                	xor    %eax,%eax
   35d50:	f6 c2 01             	test   $0x1,%dl
   35d53:	75 0f                	jne    35d64 <__lo0bits+0x24>
   35d55:	f6 c2 02             	test   $0x2,%dl
   35d58:	75 56                	jne    35db0 <__lo0bits+0x70>
   35d5a:	c1 ea 02             	shr    $0x2,%edx
   35d5d:	b8 02 00 00 00       	mov    $0x2,%eax
   35d62:	89 13                	mov    %edx,(%ebx)
   35d64:	5b                   	pop    %ebx
   35d65:	5d                   	pop    %ebp
   35d66:	c3                   	ret    
   35d67:	90                   	nop
   35d68:	31 c9                	xor    %ecx,%ecx
   35d6a:	66 85 d2             	test   %dx,%dx
   35d6d:	75 05                	jne    35d74 <__lo0bits+0x34>
   35d6f:	c1 ea 10             	shr    $0x10,%edx
   35d72:	b1 10                	mov    $0x10,%cl
   35d74:	84 d2                	test   %dl,%dl
   35d76:	75 06                	jne    35d7e <__lo0bits+0x3e>
   35d78:	83 c1 08             	add    $0x8,%ecx
   35d7b:	c1 ea 08             	shr    $0x8,%edx
   35d7e:	f6 c2 0f             	test   $0xf,%dl
   35d81:	75 06                	jne    35d89 <__lo0bits+0x49>
   35d83:	83 c1 04             	add    $0x4,%ecx
   35d86:	c1 ea 04             	shr    $0x4,%edx
   35d89:	f6 c2 03             	test   $0x3,%dl
   35d8c:	75 06                	jne    35d94 <__lo0bits+0x54>
   35d8e:	83 c1 02             	add    $0x2,%ecx
   35d91:	c1 ea 02             	shr    $0x2,%edx
   35d94:	f6 c2 01             	test   $0x1,%dl
   35d97:	75 0c                	jne    35da5 <__lo0bits+0x65>
   35d99:	d1 ea                	shr    %edx
   35d9b:	b8 20 00 00 00       	mov    $0x20,%eax
   35da0:	74 c2                	je     35d64 <__lo0bits+0x24>
   35da2:	83 c1 01             	add    $0x1,%ecx
   35da5:	89 13                	mov    %edx,(%ebx)
   35da7:	89 c8                	mov    %ecx,%eax
   35da9:	5b                   	pop    %ebx
   35daa:	5d                   	pop    %ebp
   35dab:	c3                   	ret    
   35dac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   35db0:	d1 ea                	shr    %edx
   35db2:	b0 01                	mov    $0x1,%al
   35db4:	89 13                	mov    %edx,(%ebx)
   35db6:	5b                   	pop    %ebx
   35db7:	5d                   	pop    %ebp
   35db8:	c3                   	ret    
   35db9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

00035dc0 <__i2b>:
   35dc0:	55                   	push   %ebp
   35dc1:	89 e5                	mov    %esp,%ebp
   35dc3:	83 ec 18             	sub    $0x18,%esp
   35dc6:	8b 45 08             	mov    0x8(%ebp),%eax
   35dc9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
   35dd0:	00 
   35dd1:	89 04 24             	mov    %eax,(%esp)
   35dd4:	e8 67 fc ff ff       	call   35a40 <_Balloc>
   35dd9:	8b 55 0c             	mov    0xc(%ebp),%edx
   35ddc:	89 50 14             	mov    %edx,0x14(%eax)
   35ddf:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
   35de6:	c9                   	leave  
   35de7:	c3                   	ret    
   35de8:	90                   	nop
   35de9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

00035df0 <__multiply>:
   35df0:	55                   	push   %ebp
   35df1:	89 e5                	mov    %esp,%ebp
   35df3:	57                   	push   %edi
   35df4:	56                   	push   %esi
   35df5:	53                   	push   %ebx
   35df6:	83 ec 3c             	sub    $0x3c,%esp
   35df9:	8b 75 0c             	mov    0xc(%ebp),%esi
   35dfc:	8b 45 10             	mov    0x10(%ebp),%eax
   35dff:	8b 7e 10             	mov    0x10(%esi),%edi
   35e02:	8b 58 10             	mov    0x10(%eax),%ebx
   35e05:	39 df                	cmp    %ebx,%edi
   35e07:	7d 0e                	jge    35e17 <__multiply+0x27>
   35e09:	89 f8                	mov    %edi,%eax
   35e0b:	89 df                	mov    %ebx,%edi
   35e0d:	89 c3                	mov    %eax,%ebx
   35e0f:	89 f0                	mov    %esi,%eax
   35e11:	8b 75 10             	mov    0x10(%ebp),%esi
   35e14:	89 45 10             	mov    %eax,0x10(%ebp)
   35e17:	8d 04 1f             	lea    (%edi,%ebx,1),%eax
   35e1a:	3b 46 08             	cmp    0x8(%esi),%eax
   35e1d:	89 45 c8             	mov    %eax,-0x38(%ebp)
   35e20:	0f 9f c0             	setg   %al
   35e23:	0f b6 c0             	movzbl %al,%eax
   35e26:	03 46 04             	add    0x4(%esi),%eax
   35e29:	89 44 24 04          	mov    %eax,0x4(%esp)
   35e2d:	8b 45 08             	mov    0x8(%ebp),%eax
   35e30:	89 04 24             	mov    %eax,(%esp)
   35e33:	e8 08 fc ff ff       	call   35a40 <_Balloc>
   35e38:	8b 55 c8             	mov    -0x38(%ebp),%edx
   35e3b:	89 45 c0             	mov    %eax,-0x40(%ebp)
   35e3e:	8d 40 14             	lea    0x14(%eax),%eax
   35e41:	8d 14 90             	lea    (%eax,%edx,4),%edx
   35e44:	89 d1                	mov    %edx,%ecx
   35e46:	39 c8                	cmp    %ecx,%eax
   35e48:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   35e4b:	89 55 c4             	mov    %edx,-0x3c(%ebp)
   35e4e:	73 15                	jae    35e65 <__multiply+0x75>
   35e50:	8b 55 c4             	mov    -0x3c(%ebp),%edx
   35e53:	90                   	nop
   35e54:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   35e58:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
   35e5e:	83 c0 04             	add    $0x4,%eax
   35e61:	39 c2                	cmp    %eax,%edx
   35e63:	77 f3                	ja     35e58 <__multiply+0x68>
   35e65:	8d 46 14             	lea    0x14(%esi),%eax
   35e68:	89 45 d0             	mov    %eax,-0x30(%ebp)
   35e6b:	8d 04 b8             	lea    (%eax,%edi,4),%eax
   35e6e:	89 45 dc             	mov    %eax,-0x24(%ebp)
   35e71:	8b 45 10             	mov    0x10(%ebp),%eax
   35e74:	83 c0 14             	add    $0x14,%eax
   35e77:	8d 3c 98             	lea    (%eax,%ebx,4),%edi
   35e7a:	39 f8                	cmp    %edi,%eax
   35e7c:	89 45 d8             	mov    %eax,-0x28(%ebp)
   35e7f:	89 7d cc             	mov    %edi,-0x34(%ebp)
   35e82:	0f 83 e8 00 00 00    	jae    35f70 <__multiply+0x180>
   35e88:	8b 45 d8             	mov    -0x28(%ebp),%eax
   35e8b:	8b 00                	mov    (%eax),%eax
   35e8d:	0f b7 f8             	movzwl %ax,%edi
   35e90:	85 ff                	test   %edi,%edi
   35e92:	89 7d e4             	mov    %edi,-0x1c(%ebp)
   35e95:	74 5a                	je     35ef1 <__multiply+0x101>
   35e97:	8b 55 d4             	mov    -0x2c(%ebp),%edx
   35e9a:	31 db                	xor    %ebx,%ebx
   35e9c:	8b 75 d0             	mov    -0x30(%ebp),%esi
   35e9f:	eb 09                	jmp    35eaa <__multiply+0xba>
   35ea1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   35ea8:	89 fa                	mov    %edi,%edx
   35eaa:	8b 0e                	mov    (%esi),%ecx
   35eac:	83 c6 04             	add    $0x4,%esi
   35eaf:	0f b7 3a             	movzwl (%edx),%edi
   35eb2:	0f b7 c1             	movzwl %cx,%eax
   35eb5:	0f af 45 e4          	imul   -0x1c(%ebp),%eax
   35eb9:	c1 e9 10             	shr    $0x10,%ecx
   35ebc:	0f af 4d e4          	imul   -0x1c(%ebp),%ecx
   35ec0:	01 f8                	add    %edi,%eax
   35ec2:	01 d8                	add    %ebx,%eax
   35ec4:	8b 1a                	mov    (%edx),%ebx
   35ec6:	8d 7a 04             	lea    0x4(%edx),%edi
   35ec9:	c1 eb 10             	shr    $0x10,%ebx
   35ecc:	01 d9                	add    %ebx,%ecx
   35ece:	89 c3                	mov    %eax,%ebx
   35ed0:	c1 eb 10             	shr    $0x10,%ebx
   35ed3:	0f b7 c0             	movzwl %ax,%eax
   35ed6:	01 d9                	add    %ebx,%ecx
   35ed8:	89 cb                	mov    %ecx,%ebx
   35eda:	c1 e1 10             	shl    $0x10,%ecx
   35edd:	09 c1                	or     %eax,%ecx
   35edf:	c1 eb 10             	shr    $0x10,%ebx
   35ee2:	39 75 dc             	cmp    %esi,-0x24(%ebp)
   35ee5:	89 0a                	mov    %ecx,(%edx)
   35ee7:	77 bf                	ja     35ea8 <__multiply+0xb8>
   35ee9:	8b 45 d8             	mov    -0x28(%ebp),%eax
   35eec:	89 5a 04             	mov    %ebx,0x4(%edx)
   35eef:	8b 00                	mov    (%eax),%eax
   35ef1:	c1 e8 10             	shr    $0x10,%eax
   35ef4:	85 c0                	test   %eax,%eax
   35ef6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   35ef9:	74 61                	je     35f5c <__multiply+0x16c>
   35efb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
   35efe:	31 ff                	xor    %edi,%edi
   35f00:	89 fe                	mov    %edi,%esi
   35f02:	8b 10                	mov    (%eax),%edx
   35f04:	89 45 e0             	mov    %eax,-0x20(%ebp)
   35f07:	8b 45 d0             	mov    -0x30(%ebp),%eax
   35f0a:	89 d3                	mov    %edx,%ebx
   35f0c:	eb 05                	jmp    35f13 <__multiply+0x123>
   35f0e:	66 90                	xchg   %ax,%ax
   35f10:	89 4d e0             	mov    %ecx,-0x20(%ebp)
   35f13:	0f b7 08             	movzwl (%eax),%ecx
   35f16:	c1 eb 10             	shr    $0x10,%ebx
   35f19:	0f b7 d2             	movzwl %dx,%edx
   35f1c:	0f af 4d e4          	imul   -0x1c(%ebp),%ecx
   35f20:	83 c0 04             	add    $0x4,%eax
   35f23:	8d 3c 19             	lea    (%ecx,%ebx,1),%edi
   35f26:	01 f7                	add    %esi,%edi
   35f28:	8b 75 e0             	mov    -0x20(%ebp),%esi
   35f2b:	89 fb                	mov    %edi,%ebx
   35f2d:	c1 e3 10             	shl    $0x10,%ebx
   35f30:	09 d3                	or     %edx,%ebx
   35f32:	89 1e                	mov    %ebx,(%esi)
   35f34:	8b 5e 04             	mov    0x4(%esi),%ebx
   35f37:	8d 4e 04             	lea    0x4(%esi),%ecx
   35f3a:	0f b7 50 fe          	movzwl -0x2(%eax),%edx
   35f3e:	c1 ef 10             	shr    $0x10,%edi
   35f41:	0f af 55 e4          	imul   -0x1c(%ebp),%edx
   35f45:	0f b7 f3             	movzwl %bx,%esi
   35f48:	01 f2                	add    %esi,%edx
   35f4a:	01 fa                	add    %edi,%edx
   35f4c:	89 d6                	mov    %edx,%esi
   35f4e:	c1 ee 10             	shr    $0x10,%esi
   35f51:	39 45 dc             	cmp    %eax,-0x24(%ebp)
   35f54:	77 ba                	ja     35f10 <__multiply+0x120>
   35f56:	8b 45 e0             	mov    -0x20(%ebp),%eax
   35f59:	89 50 04             	mov    %edx,0x4(%eax)
   35f5c:	83 45 d8 04          	addl   $0x4,-0x28(%ebp)
   35f60:	8b 45 d8             	mov    -0x28(%ebp),%eax
   35f63:	83 45 d4 04          	addl   $0x4,-0x2c(%ebp)
   35f67:	39 45 cc             	cmp    %eax,-0x34(%ebp)
   35f6a:	0f 87 18 ff ff ff    	ja     35e88 <__multiply+0x98>
   35f70:	8b 75 c8             	mov    -0x38(%ebp),%esi
   35f73:	85 f6                	test   %esi,%esi
   35f75:	7e 29                	jle    35fa0 <__multiply+0x1b0>
   35f77:	8b 7d c4             	mov    -0x3c(%ebp),%edi
   35f7a:	8b 5f fc             	mov    -0x4(%edi),%ebx
   35f7d:	85 db                	test   %ebx,%ebx
   35f7f:	75 1f                	jne    35fa0 <__multiply+0x1b0>
   35f81:	8b 55 c8             	mov    -0x38(%ebp),%edx
   35f84:	89 d0                	mov    %edx,%eax
   35f86:	c1 e0 02             	shl    $0x2,%eax
   35f89:	29 c7                	sub    %eax,%edi
   35f8b:	89 f8                	mov    %edi,%eax
   35f8d:	eb 09                	jmp    35f98 <__multiply+0x1a8>
   35f8f:	90                   	nop
   35f90:	8b 4c 90 fc          	mov    -0x4(%eax,%edx,4),%ecx
   35f94:	85 c9                	test   %ecx,%ecx
   35f96:	75 05                	jne    35f9d <__multiply+0x1ad>
   35f98:	83 ea 01             	sub    $0x1,%edx
   35f9b:	75 f3                	jne    35f90 <__multiply+0x1a0>
   35f9d:	89 55 c8             	mov    %edx,-0x38(%ebp)
   35fa0:	8b 45 c0             	mov    -0x40(%ebp),%eax
   35fa3:	8b 7d c8             	mov    -0x38(%ebp),%edi
   35fa6:	89 78 10             	mov    %edi,0x10(%eax)
   35fa9:	83 c4 3c             	add    $0x3c,%esp
   35fac:	5b                   	pop    %ebx
   35fad:	5e                   	pop    %esi
   35fae:	5f                   	pop    %edi
   35faf:	5d                   	pop    %ebp
   35fb0:	c3                   	ret    
   35fb1:	eb 0d                	jmp    35fc0 <__pow5mult>
   35fb3:	90                   	nop
   35fb4:	90                   	nop
   35fb5:	90                   	nop
   35fb6:	90                   	nop
   35fb7:	90                   	nop
   35fb8:	90                   	nop
   35fb9:	90                   	nop
   35fba:	90                   	nop
   35fbb:	90                   	nop
   35fbc:	90                   	nop
   35fbd:	90                   	nop
   35fbe:	90                   	nop
   35fbf:	90                   	nop

00035fc0 <__pow5mult>:
   35fc0:	55                   	push   %ebp
   35fc1:	89 e5                	mov    %esp,%ebp
   35fc3:	57                   	push   %edi
   35fc4:	56                   	push   %esi
   35fc5:	53                   	push   %ebx
   35fc6:	83 ec 2c             	sub    $0x2c,%esp
   35fc9:	8b 5d 10             	mov    0x10(%ebp),%ebx
   35fcc:	8b 4d 08             	mov    0x8(%ebp),%ecx
   35fcf:	8b 7d 0c             	mov    0xc(%ebp),%edi
   35fd2:	89 d8                	mov    %ebx,%eax
   35fd4:	83 e0 03             	and    $0x3,%eax
   35fd7:	0f 85 a3 00 00 00    	jne    36080 <__pow5mult+0xc0>
   35fdd:	c1 fb 02             	sar    $0x2,%ebx
   35fe0:	85 db                	test   %ebx,%ebx
   35fe2:	74 5c                	je     36040 <__pow5mult+0x80>
   35fe4:	8b 71 48             	mov    0x48(%ecx),%esi
   35fe7:	85 f6                	test   %esi,%esi
   35fe9:	0f 84 bd 00 00 00    	je     360ac <__pow5mult+0xec>
   35fef:	f6 c3 01             	test   $0x1,%bl
   35ff2:	75 15                	jne    36009 <__pow5mult+0x49>
   35ff4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   35ff8:	d1 fb                	sar    %ebx
   35ffa:	74 44                	je     36040 <__pow5mult+0x80>
   35ffc:	8b 06                	mov    (%esi),%eax
   35ffe:	85 c0                	test   %eax,%eax
   36000:	74 4e                	je     36050 <__pow5mult+0x90>
   36002:	89 c6                	mov    %eax,%esi
   36004:	f6 c3 01             	test   $0x1,%bl
   36007:	74 ef                	je     35ff8 <__pow5mult+0x38>
   36009:	89 0c 24             	mov    %ecx,(%esp)
   3600c:	89 74 24 08          	mov    %esi,0x8(%esp)
   36010:	89 7c 24 04          	mov    %edi,0x4(%esp)
   36014:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   36017:	e8 d4 fd ff ff       	call   35df0 <__multiply>
   3601c:	85 ff                	test   %edi,%edi
   3601e:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   36021:	89 45 e0             	mov    %eax,-0x20(%ebp)
   36024:	74 52                	je     36078 <__pow5mult+0xb8>
   36026:	8b 57 04             	mov    0x4(%edi),%edx
   36029:	d1 fb                	sar    %ebx
   3602b:	8b 41 4c             	mov    0x4c(%ecx),%eax
   3602e:	8d 04 90             	lea    (%eax,%edx,4),%eax
   36031:	8b 10                	mov    (%eax),%edx
   36033:	89 17                	mov    %edx,(%edi)
   36035:	89 38                	mov    %edi,(%eax)
   36037:	8b 7d e0             	mov    -0x20(%ebp),%edi
   3603a:	75 c0                	jne    35ffc <__pow5mult+0x3c>
   3603c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   36040:	83 c4 2c             	add    $0x2c,%esp
   36043:	89 f8                	mov    %edi,%eax
   36045:	5b                   	pop    %ebx
   36046:	5e                   	pop    %esi
   36047:	5f                   	pop    %edi
   36048:	5d                   	pop    %ebp
   36049:	c3                   	ret    
   3604a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   36050:	89 74 24 08          	mov    %esi,0x8(%esp)
   36054:	89 74 24 04          	mov    %esi,0x4(%esp)
   36058:	89 0c 24             	mov    %ecx,(%esp)
   3605b:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   3605e:	e8 8d fd ff ff       	call   35df0 <__multiply>
   36063:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   36066:	89 06                	mov    %eax,(%esi)
   36068:	89 c6                	mov    %eax,%esi
   3606a:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
   36070:	eb 92                	jmp    36004 <__pow5mult+0x44>
   36072:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   36078:	8b 7d e0             	mov    -0x20(%ebp),%edi
   3607b:	e9 78 ff ff ff       	jmp    35ff8 <__pow5mult+0x38>
   36080:	8b 04 85 5c 90 03 00 	mov    0x3905c(,%eax,4),%eax
   36087:	89 7c 24 04          	mov    %edi,0x4(%esp)
   3608b:	89 0c 24             	mov    %ecx,(%esp)
   3608e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   36095:	00 
   36096:	89 44 24 08          	mov    %eax,0x8(%esp)
   3609a:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   3609d:	e8 5e fa ff ff       	call   35b00 <__multadd>
   360a2:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   360a5:	89 c7                	mov    %eax,%edi
   360a7:	e9 31 ff ff ff       	jmp    35fdd <__pow5mult+0x1d>
   360ac:	89 0c 24             	mov    %ecx,(%esp)
   360af:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
   360b6:	00 
   360b7:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   360ba:	e8 81 f9 ff ff       	call   35a40 <_Balloc>
   360bf:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   360c2:	c7 40 14 71 02 00 00 	movl   $0x271,0x14(%eax)
   360c9:	89 c6                	mov    %eax,%esi
   360cb:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
   360d2:	89 41 48             	mov    %eax,0x48(%ecx)
   360d5:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
   360db:	e9 0f ff ff ff       	jmp    35fef <__pow5mult+0x2f>

000360e0 <__lshift>:
   360e0:	55                   	push   %ebp
   360e1:	89 e5                	mov    %esp,%ebp
   360e3:	57                   	push   %edi
   360e4:	56                   	push   %esi
   360e5:	53                   	push   %ebx
   360e6:	83 ec 2c             	sub    $0x2c,%esp
   360e9:	8b 45 0c             	mov    0xc(%ebp),%eax
   360ec:	8b 75 10             	mov    0x10(%ebp),%esi
   360ef:	89 c7                	mov    %eax,%edi
   360f1:	8b 50 04             	mov    0x4(%eax),%edx
   360f4:	8b 40 10             	mov    0x10(%eax),%eax
   360f7:	89 f3                	mov    %esi,%ebx
   360f9:	c1 fb 05             	sar    $0x5,%ebx
   360fc:	01 d8                	add    %ebx,%eax
   360fe:	89 45 d0             	mov    %eax,-0x30(%ebp)
   36101:	83 c0 01             	add    $0x1,%eax
   36104:	89 c1                	mov    %eax,%ecx
   36106:	89 45 d8             	mov    %eax,-0x28(%ebp)
   36109:	8b 47 08             	mov    0x8(%edi),%eax
   3610c:	39 c1                	cmp    %eax,%ecx
   3610e:	7e 09                	jle    36119 <__lshift+0x39>
   36110:	01 c0                	add    %eax,%eax
   36112:	83 c2 01             	add    $0x1,%edx
   36115:	39 c1                	cmp    %eax,%ecx
   36117:	7f f7                	jg     36110 <__lshift+0x30>
   36119:	8b 45 08             	mov    0x8(%ebp),%eax
   3611c:	89 54 24 04          	mov    %edx,0x4(%esp)
   36120:	89 04 24             	mov    %eax,(%esp)
   36123:	e8 18 f9 ff ff       	call   35a40 <_Balloc>
   36128:	85 db                	test   %ebx,%ebx
   3612a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   3612d:	8d 50 14             	lea    0x14(%eax),%edx
   36130:	7e 17                	jle    36149 <__lshift+0x69>
   36132:	31 c0                	xor    %eax,%eax
   36134:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   36138:	c7 04 82 00 00 00 00 	movl   $0x0,(%edx,%eax,4)
   3613f:	83 c0 01             	add    $0x1,%eax
   36142:	39 d8                	cmp    %ebx,%eax
   36144:	75 f2                	jne    36138 <__lshift+0x58>
   36146:	8d 14 82             	lea    (%edx,%eax,4),%edx
   36149:	8b 7d 0c             	mov    0xc(%ebp),%edi
   3614c:	8b 45 0c             	mov    0xc(%ebp),%eax
   3614f:	8b 4f 10             	mov    0x10(%edi),%ecx
   36152:	83 c0 14             	add    $0x14,%eax
   36155:	83 e6 1f             	and    $0x1f,%esi
   36158:	89 75 e0             	mov    %esi,-0x20(%ebp)
   3615b:	8d 3c 88             	lea    (%eax,%ecx,4),%edi
   3615e:	89 7d e4             	mov    %edi,-0x1c(%ebp)
   36161:	74 7d                	je     361e0 <__lshift+0x100>
   36163:	c7 45 dc 20 00 00 00 	movl   $0x20,-0x24(%ebp)
   3616a:	29 75 dc             	sub    %esi,-0x24(%ebp)
   3616d:	31 f6                	xor    %esi,%esi
   3616f:	eb 09                	jmp    3617a <__lshift+0x9a>
   36171:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   36178:	89 fa                	mov    %edi,%edx
   3617a:	8b 18                	mov    (%eax),%ebx
   3617c:	83 c0 04             	add    $0x4,%eax
   3617f:	0f b6 4d e0          	movzbl -0x20(%ebp),%ecx
   36183:	8d 7a 04             	lea    0x4(%edx),%edi
   36186:	d3 e3                	shl    %cl,%ebx
   36188:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
   3618c:	09 f3                	or     %esi,%ebx
   3618e:	89 1a                	mov    %ebx,(%edx)
   36190:	8b 70 fc             	mov    -0x4(%eax),%esi
   36193:	d3 ee                	shr    %cl,%esi
   36195:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
   36198:	77 de                	ja     36178 <__lshift+0x98>
   3619a:	8b 45 d0             	mov    -0x30(%ebp),%eax
   3619d:	89 72 04             	mov    %esi,0x4(%edx)
   361a0:	83 c0 02             	add    $0x2,%eax
   361a3:	85 f6                	test   %esi,%esi
   361a5:	0f 44 45 d8          	cmove  -0x28(%ebp),%eax
   361a9:	89 45 d8             	mov    %eax,-0x28(%ebp)
   361ac:	8b 45 d8             	mov    -0x28(%ebp),%eax
   361af:	8b 7d d4             	mov    -0x2c(%ebp),%edi
   361b2:	8b 75 0c             	mov    0xc(%ebp),%esi
   361b5:	83 e8 01             	sub    $0x1,%eax
   361b8:	89 47 10             	mov    %eax,0x10(%edi)
   361bb:	8b 45 0c             	mov    0xc(%ebp),%eax
   361be:	8b 50 04             	mov    0x4(%eax),%edx
   361c1:	8b 45 08             	mov    0x8(%ebp),%eax
   361c4:	8b 40 4c             	mov    0x4c(%eax),%eax
   361c7:	8d 04 90             	lea    (%eax,%edx,4),%eax
   361ca:	8b 10                	mov    (%eax),%edx
   361cc:	89 16                	mov    %edx,(%esi)
   361ce:	89 30                	mov    %esi,(%eax)
   361d0:	83 c4 2c             	add    $0x2c,%esp
   361d3:	89 f8                	mov    %edi,%eax
   361d5:	5b                   	pop    %ebx
   361d6:	5e                   	pop    %esi
   361d7:	5f                   	pop    %edi
   361d8:	5d                   	pop    %ebp
   361d9:	c3                   	ret    
   361da:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   361e0:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
   361e3:	90                   	nop
   361e4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   361e8:	83 c0 04             	add    $0x4,%eax
   361eb:	8b 48 fc             	mov    -0x4(%eax),%ecx
   361ee:	83 c2 04             	add    $0x4,%edx
   361f1:	39 c3                	cmp    %eax,%ebx
   361f3:	89 4a fc             	mov    %ecx,-0x4(%edx)
   361f6:	77 f0                	ja     361e8 <__lshift+0x108>
   361f8:	eb b2                	jmp    361ac <__lshift+0xcc>
   361fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

00036200 <__mcmp>:
   36200:	55                   	push   %ebp
   36201:	89 e5                	mov    %esp,%ebp
   36203:	8b 4d 08             	mov    0x8(%ebp),%ecx
   36206:	8b 55 0c             	mov    0xc(%ebp),%edx
   36209:	53                   	push   %ebx
   3620a:	8b 41 10             	mov    0x10(%ecx),%eax
   3620d:	8b 5a 10             	mov    0x10(%edx),%ebx
   36210:	29 d8                	sub    %ebx,%eax
   36212:	85 c0                	test   %eax,%eax
   36214:	75 27                	jne    3623d <__mcmp+0x3d>
   36216:	c1 e3 02             	shl    $0x2,%ebx
   36219:	83 c1 14             	add    $0x14,%ecx
   3621c:	8d 04 19             	lea    (%ecx,%ebx,1),%eax
   3621f:	8d 54 1a 14          	lea    0x14(%edx,%ebx,1),%edx
   36223:	eb 07                	jmp    3622c <__mcmp+0x2c>
   36225:	8d 76 00             	lea    0x0(%esi),%esi
   36228:	39 c1                	cmp    %eax,%ecx
   3622a:	73 14                	jae    36240 <__mcmp+0x40>
   3622c:	83 ea 04             	sub    $0x4,%edx
   3622f:	83 e8 04             	sub    $0x4,%eax
   36232:	8b 1a                	mov    (%edx),%ebx
   36234:	39 18                	cmp    %ebx,(%eax)
   36236:	74 f0                	je     36228 <__mcmp+0x28>
   36238:	19 c0                	sbb    %eax,%eax
   3623a:	83 c8 01             	or     $0x1,%eax
   3623d:	5b                   	pop    %ebx
   3623e:	5d                   	pop    %ebp
   3623f:	c3                   	ret    
   36240:	31 c0                	xor    %eax,%eax
   36242:	5b                   	pop    %ebx
   36243:	5d                   	pop    %ebp
   36244:	c3                   	ret    
   36245:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   36249:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00036250 <__mdiff>:
   36250:	55                   	push   %ebp
   36251:	89 e5                	mov    %esp,%ebp
   36253:	57                   	push   %edi
   36254:	56                   	push   %esi
   36255:	53                   	push   %ebx
   36256:	83 ec 2c             	sub    $0x2c,%esp
   36259:	8b 75 0c             	mov    0xc(%ebp),%esi
   3625c:	8b 5d 10             	mov    0x10(%ebp),%ebx
   3625f:	89 34 24             	mov    %esi,(%esp)
   36262:	89 5c 24 04          	mov    %ebx,0x4(%esp)
   36266:	e8 95 ff ff ff       	call   36200 <__mcmp>
   3626b:	85 c0                	test   %eax,%eax
   3626d:	0f 84 25 01 00 00    	je     36398 <__mdiff+0x148>
   36273:	0f 88 0f 01 00 00    	js     36388 <__mdiff+0x138>
   36279:	31 ff                	xor    %edi,%edi
   3627b:	8b 46 04             	mov    0x4(%esi),%eax
   3627e:	83 c6 14             	add    $0x14,%esi
   36281:	89 44 24 04          	mov    %eax,0x4(%esp)
   36285:	8b 45 08             	mov    0x8(%ebp),%eax
   36288:	89 04 24             	mov    %eax,(%esp)
   3628b:	e8 b0 f7 ff ff       	call   35a40 <_Balloc>
   36290:	8d 4b 14             	lea    0x14(%ebx),%ecx
   36293:	89 c2                	mov    %eax,%edx
   36295:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   36298:	89 78 0c             	mov    %edi,0xc(%eax)
   3629b:	8b 46 fc             	mov    -0x4(%esi),%eax
   3629e:	89 75 e4             	mov    %esi,-0x1c(%ebp)
   362a1:	89 45 dc             	mov    %eax,-0x24(%ebp)
   362a4:	8d 04 86             	lea    (%esi,%eax,4),%eax
   362a7:	89 45 d8             	mov    %eax,-0x28(%ebp)
   362aa:	8b 43 10             	mov    0x10(%ebx),%eax
   362ad:	31 db                	xor    %ebx,%ebx
   362af:	8d 04 81             	lea    (%ecx,%eax,4),%eax
   362b2:	89 45 e0             	mov    %eax,-0x20(%ebp)
   362b5:	89 d0                	mov    %edx,%eax
   362b7:	83 c0 14             	add    $0x14,%eax
   362ba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   362c0:	8b 75 e4             	mov    -0x1c(%ebp),%esi
   362c3:	83 c0 04             	add    $0x4,%eax
   362c6:	83 c1 04             	add    $0x4,%ecx
   362c9:	83 45 e4 04          	addl   $0x4,-0x1c(%ebp)
   362cd:	8b 3e                	mov    (%esi),%edi
   362cf:	8b 71 fc             	mov    -0x4(%ecx),%esi
   362d2:	0f b7 d7             	movzwl %di,%edx
   362d5:	01 da                	add    %ebx,%edx
   362d7:	0f b7 de             	movzwl %si,%ebx
   362da:	29 da                	sub    %ebx,%edx
   362dc:	c1 ef 10             	shr    $0x10,%edi
   362df:	89 d3                	mov    %edx,%ebx
   362e1:	c1 ee 10             	shr    $0x10,%esi
   362e4:	0f b7 d2             	movzwl %dx,%edx
   362e7:	c1 fb 10             	sar    $0x10,%ebx
   362ea:	29 f7                	sub    %esi,%edi
   362ec:	01 df                	add    %ebx,%edi
   362ee:	89 fb                	mov    %edi,%ebx
   362f0:	c1 e7 10             	shl    $0x10,%edi
   362f3:	09 d7                	or     %edx,%edi
   362f5:	c1 fb 10             	sar    $0x10,%ebx
   362f8:	39 4d e0             	cmp    %ecx,-0x20(%ebp)
   362fb:	89 78 fc             	mov    %edi,-0x4(%eax)
   362fe:	77 c0                	ja     362c0 <__mdiff+0x70>
   36300:	8b 75 e4             	mov    -0x1c(%ebp),%esi
   36303:	8b 4d d8             	mov    -0x28(%ebp),%ecx
   36306:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   36309:	89 75 e0             	mov    %esi,-0x20(%ebp)
   3630c:	39 f1                	cmp    %esi,%ecx
   3630e:	76 3f                	jbe    3634f <__mdiff+0xff>
   36310:	8b 3e                	mov    (%esi),%edi
   36312:	83 c6 04             	add    $0x4,%esi
   36315:	83 c0 04             	add    $0x4,%eax
   36318:	0f b7 d7             	movzwl %di,%edx
   3631b:	01 da                	add    %ebx,%edx
   3631d:	89 d3                	mov    %edx,%ebx
   3631f:	0f b7 d2             	movzwl %dx,%edx
   36322:	c1 fb 10             	sar    $0x10,%ebx
   36325:	c1 ef 10             	shr    $0x10,%edi
   36328:	01 df                	add    %ebx,%edi
   3632a:	89 fb                	mov    %edi,%ebx
   3632c:	c1 e7 10             	shl    $0x10,%edi
   3632f:	09 d7                	or     %edx,%edi
   36331:	c1 fb 10             	sar    $0x10,%ebx
   36334:	39 f1                	cmp    %esi,%ecx
   36336:	89 78 fc             	mov    %edi,-0x4(%eax)
   36339:	77 d5                	ja     36310 <__mdiff+0xc0>
   3633b:	8b 45 e0             	mov    -0x20(%ebp),%eax
   3633e:	8b 4d d8             	mov    -0x28(%ebp),%ecx
   36341:	f7 d0                	not    %eax
   36343:	01 c8                	add    %ecx,%eax
   36345:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   36348:	c1 e8 02             	shr    $0x2,%eax
   3634b:	8d 44 81 04          	lea    0x4(%ecx,%eax,4),%eax
   3634f:	85 ff                	test   %edi,%edi
   36351:	75 23                	jne    36376 <__mdiff+0x126>
   36353:	8b 4d dc             	mov    -0x24(%ebp),%ecx
   36356:	8d 14 8d 00 00 00 00 	lea    0x0(,%ecx,4),%edx
   3635d:	29 d0                	sub    %edx,%eax
   3635f:	89 ca                	mov    %ecx,%edx
   36361:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   36368:	83 ea 01             	sub    $0x1,%edx
   3636b:	8b 4c 90 fc          	mov    -0x4(%eax,%edx,4),%ecx
   3636f:	85 c9                	test   %ecx,%ecx
   36371:	74 f5                	je     36368 <__mdiff+0x118>
   36373:	89 55 dc             	mov    %edx,-0x24(%ebp)
   36376:	8b 45 d4             	mov    -0x2c(%ebp),%eax
   36379:	8b 4d dc             	mov    -0x24(%ebp),%ecx
   3637c:	89 48 10             	mov    %ecx,0x10(%eax)
   3637f:	83 c4 2c             	add    $0x2c,%esp
   36382:	5b                   	pop    %ebx
   36383:	5e                   	pop    %esi
   36384:	5f                   	pop    %edi
   36385:	5d                   	pop    %ebp
   36386:	c3                   	ret    
   36387:	90                   	nop
   36388:	89 f0                	mov    %esi,%eax
   3638a:	bf 01 00 00 00       	mov    $0x1,%edi
   3638f:	89 de                	mov    %ebx,%esi
   36391:	89 c3                	mov    %eax,%ebx
   36393:	e9 e3 fe ff ff       	jmp    3627b <__mdiff+0x2b>
   36398:	8b 45 08             	mov    0x8(%ebp),%eax
   3639b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   363a2:	00 
   363a3:	89 04 24             	mov    %eax,(%esp)
   363a6:	e8 95 f6 ff ff       	call   35a40 <_Balloc>
   363ab:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
   363b2:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
   363b9:	83 c4 2c             	add    $0x2c,%esp
   363bc:	5b                   	pop    %ebx
   363bd:	5e                   	pop    %esi
   363be:	5f                   	pop    %edi
   363bf:	5d                   	pop    %ebp
   363c0:	c3                   	ret    
   363c1:	eb 0d                	jmp    363d0 <__ulp>
   363c3:	90                   	nop
   363c4:	90                   	nop
   363c5:	90                   	nop
   363c6:	90                   	nop
   363c7:	90                   	nop
   363c8:	90                   	nop
   363c9:	90                   	nop
   363ca:	90                   	nop
   363cb:	90                   	nop
   363cc:	90                   	nop
   363cd:	90                   	nop
   363ce:	90                   	nop
   363cf:	90                   	nop

000363d0 <__ulp>:
   363d0:	55                   	push   %ebp
   363d1:	89 e5                	mov    %esp,%ebp
   363d3:	83 ec 08             	sub    $0x8,%esp
   363d6:	dd 45 08             	fldl   0x8(%ebp)
   363d9:	dd 5d f8             	fstpl  -0x8(%ebp)
   363dc:	8b 4d fc             	mov    -0x4(%ebp),%ecx
   363df:	81 e1 00 00 f0 7f    	and    $0x7ff00000,%ecx
   363e5:	81 e9 00 00 40 03    	sub    $0x3400000,%ecx
   363eb:	85 c9                	test   %ecx,%ecx
   363ed:	7e 11                	jle    36400 <__ulp+0x30>
   363ef:	89 4d fc             	mov    %ecx,-0x4(%ebp)
   363f2:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
   363f9:	dd 45 f8             	fldl   -0x8(%ebp)
   363fc:	c9                   	leave  
   363fd:	c3                   	ret    
   363fe:	66 90                	xchg   %ax,%ax
   36400:	f7 d9                	neg    %ecx
   36402:	c1 f9 14             	sar    $0x14,%ecx
   36405:	83 f9 13             	cmp    $0x13,%ecx
   36408:	7e 26                	jle    36430 <__ulp+0x60>
   3640a:	83 f9 32             	cmp    $0x32,%ecx
   3640d:	b8 01 00 00 00       	mov    $0x1,%eax
   36412:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
   36419:	7f 0b                	jg     36426 <__ulp+0x56>
   3641b:	ba 33 00 00 00       	mov    $0x33,%edx
   36420:	29 ca                	sub    %ecx,%edx
   36422:	89 d1                	mov    %edx,%ecx
   36424:	d3 e0                	shl    %cl,%eax
   36426:	89 45 f8             	mov    %eax,-0x8(%ebp)
   36429:	dd 45 f8             	fldl   -0x8(%ebp)
   3642c:	c9                   	leave  
   3642d:	c3                   	ret    
   3642e:	66 90                	xchg   %ax,%ax
   36430:	b8 00 00 08 00       	mov    $0x80000,%eax
   36435:	d3 f8                	sar    %cl,%eax
   36437:	89 45 fc             	mov    %eax,-0x4(%ebp)
   3643a:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
   36441:	dd 45 f8             	fldl   -0x8(%ebp)
   36444:	c9                   	leave  
   36445:	c3                   	ret    
   36446:	8d 76 00             	lea    0x0(%esi),%esi
   36449:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00036450 <__b2d>:
   36450:	55                   	push   %ebp
   36451:	89 e5                	mov    %esp,%ebp
   36453:	57                   	push   %edi
   36454:	56                   	push   %esi
   36455:	53                   	push   %ebx
   36456:	83 ec 18             	sub    $0x18,%esp
   36459:	8b 45 08             	mov    0x8(%ebp),%eax
   3645c:	8d 78 14             	lea    0x14(%eax),%edi
   3645f:	8b 40 10             	mov    0x10(%eax),%eax
   36462:	8d 1c 87             	lea    (%edi,%eax,4),%ebx
   36465:	8b 73 fc             	mov    -0x4(%ebx),%esi
   36468:	8d 43 fc             	lea    -0x4(%ebx),%eax
   3646b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   3646e:	89 34 24             	mov    %esi,(%esp)
   36471:	e8 6a f8 ff ff       	call   35ce0 <__hi0bits>
   36476:	8b 4d 0c             	mov    0xc(%ebp),%ecx
   36479:	ba 20 00 00 00       	mov    $0x20,%edx
   3647e:	29 c2                	sub    %eax,%edx
   36480:	83 f8 0a             	cmp    $0xa,%eax
   36483:	89 11                	mov    %edx,(%ecx)
   36485:	7f 41                	jg     364c8 <__b2d+0x78>
   36487:	b9 0b 00 00 00       	mov    $0xb,%ecx
   3648c:	89 f2                	mov    %esi,%edx
   3648e:	29 c1                	sub    %eax,%ecx
   36490:	d3 ea                	shr    %cl,%edx
   36492:	81 ca 00 00 f0 3f    	or     $0x3ff00000,%edx
   36498:	89 55 ec             	mov    %edx,-0x14(%ebp)
   3649b:	31 d2                	xor    %edx,%edx
   3649d:	3b 7d e4             	cmp    -0x1c(%ebp),%edi
   364a0:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
   364a7:	73 05                	jae    364ae <__b2d+0x5e>
   364a9:	8b 53 f8             	mov    -0x8(%ebx),%edx
   364ac:	d3 ea                	shr    %cl,%edx
   364ae:	8d 48 15             	lea    0x15(%eax),%ecx
   364b1:	d3 e6                	shl    %cl,%esi
   364b3:	09 f2                	or     %esi,%edx
   364b5:	89 55 e8             	mov    %edx,-0x18(%ebp)
   364b8:	dd 45 e8             	fldl   -0x18(%ebp)
   364bb:	83 c4 18             	add    $0x18,%esp
   364be:	5b                   	pop    %ebx
   364bf:	5e                   	pop    %esi
   364c0:	5f                   	pop    %edi
   364c1:	5d                   	pop    %ebp
   364c2:	c3                   	ret    
   364c3:	90                   	nop
   364c4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   364c8:	31 d2                	xor    %edx,%edx
   364ca:	3b 7d e4             	cmp    -0x1c(%ebp),%edi
   364cd:	73 09                	jae    364d8 <__b2d+0x88>
   364cf:	8b 53 f8             	mov    -0x8(%ebx),%edx
   364d2:	8d 4b f8             	lea    -0x8(%ebx),%ecx
   364d5:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   364d8:	89 c3                	mov    %eax,%ebx
   364da:	83 eb 0b             	sub    $0xb,%ebx
   364dd:	89 5d e0             	mov    %ebx,-0x20(%ebp)
   364e0:	74 4e                	je     36530 <__b2d+0xe0>
   364e2:	0f b6 4d e0          	movzbl -0x20(%ebp),%ecx
   364e6:	bb 2b 00 00 00       	mov    $0x2b,%ebx
   364eb:	29 c3                	sub    %eax,%ebx
   364ed:	89 d0                	mov    %edx,%eax
   364ef:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
   364f6:	d3 e6                	shl    %cl,%esi
   364f8:	89 d9                	mov    %ebx,%ecx
   364fa:	d3 e8                	shr    %cl,%eax
   364fc:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   364ff:	81 ce 00 00 f0 3f    	or     $0x3ff00000,%esi
   36505:	09 c6                	or     %eax,%esi
   36507:	31 c0                	xor    %eax,%eax
   36509:	89 75 ec             	mov    %esi,-0x14(%ebp)
   3650c:	39 f9                	cmp    %edi,%ecx
   3650e:	76 07                	jbe    36517 <__b2d+0xc7>
   36510:	8b 41 fc             	mov    -0x4(%ecx),%eax
   36513:	89 d9                	mov    %ebx,%ecx
   36515:	d3 e8                	shr    %cl,%eax
   36517:	0f b6 4d e0          	movzbl -0x20(%ebp),%ecx
   3651b:	d3 e2                	shl    %cl,%edx
   3651d:	09 d0                	or     %edx,%eax
   3651f:	89 45 e8             	mov    %eax,-0x18(%ebp)
   36522:	dd 45 e8             	fldl   -0x18(%ebp)
   36525:	83 c4 18             	add    $0x18,%esp
   36528:	5b                   	pop    %ebx
   36529:	5e                   	pop    %esi
   3652a:	5f                   	pop    %edi
   3652b:	5d                   	pop    %ebp
   3652c:	c3                   	ret    
   3652d:	8d 76 00             	lea    0x0(%esi),%esi
   36530:	81 ce 00 00 f0 3f    	or     $0x3ff00000,%esi
   36536:	89 75 ec             	mov    %esi,-0x14(%ebp)
   36539:	89 55 e8             	mov    %edx,-0x18(%ebp)
   3653c:	dd 45 e8             	fldl   -0x18(%ebp)
   3653f:	83 c4 18             	add    $0x18,%esp
   36542:	5b                   	pop    %ebx
   36543:	5e                   	pop    %esi
   36544:	5f                   	pop    %edi
   36545:	5d                   	pop    %ebp
   36546:	c3                   	ret    
   36547:	89 f6                	mov    %esi,%esi
   36549:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00036550 <__d2b>:
   36550:	55                   	push   %ebp
   36551:	89 e5                	mov    %esp,%ebp
   36553:	57                   	push   %edi
   36554:	56                   	push   %esi
   36555:	53                   	push   %ebx
   36556:	83 ec 2c             	sub    $0x2c,%esp
   36559:	8b 45 08             	mov    0x8(%ebp),%eax
   3655c:	dd 45 0c             	fldl   0xc(%ebp)
   3655f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
   36566:	00 
   36567:	dd 5d d0             	fstpl  -0x30(%ebp)
   3656a:	89 04 24             	mov    %eax,(%esp)
   3656d:	e8 ce f4 ff ff       	call   35a40 <_Balloc>
   36572:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
   36575:	89 c6                	mov    %eax,%esi
   36577:	89 d8                	mov    %ebx,%eax
   36579:	81 e3 ff ff ff 7f    	and    $0x7fffffff,%ebx
   3657f:	25 ff ff 0f 00       	and    $0xfffff,%eax
   36584:	c1 eb 14             	shr    $0x14,%ebx
   36587:	85 db                	test   %ebx,%ebx
   36589:	74 05                	je     36590 <__d2b+0x40>
   3658b:	0d 00 00 10 00       	or     $0x100000,%eax
   36590:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   36593:	8b 45 d0             	mov    -0x30(%ebp),%eax
   36596:	85 c0                	test   %eax,%eax
   36598:	74 56                	je     365f0 <__d2b+0xa0>
   3659a:	89 45 e0             	mov    %eax,-0x20(%ebp)
   3659d:	8d 45 e0             	lea    -0x20(%ebp),%eax
   365a0:	89 04 24             	mov    %eax,(%esp)
   365a3:	e8 98 f7 ff ff       	call   35d40 <__lo0bits>
   365a8:	85 c0                	test   %eax,%eax
   365aa:	0f 85 90 00 00 00    	jne    36640 <__d2b+0xf0>
   365b0:	8b 55 e0             	mov    -0x20(%ebp),%edx
   365b3:	89 56 14             	mov    %edx,0x14(%esi)
   365b6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
   365b9:	83 fa 01             	cmp    $0x1,%edx
   365bc:	19 ff                	sbb    %edi,%edi
   365be:	83 c7 02             	add    $0x2,%edi
   365c1:	85 db                	test   %ebx,%ebx
   365c3:	89 56 18             	mov    %edx,0x18(%esi)
   365c6:	89 7e 10             	mov    %edi,0x10(%esi)
   365c9:	74 49                	je     36614 <__d2b+0xc4>
   365cb:	8b 4d 14             	mov    0x14(%ebp),%ecx
   365ce:	8d 94 18 cd fb ff ff 	lea    -0x433(%eax,%ebx,1),%edx
   365d5:	89 11                	mov    %edx,(%ecx)
   365d7:	ba 35 00 00 00       	mov    $0x35,%edx
   365dc:	29 c2                	sub    %eax,%edx
   365de:	8b 45 18             	mov    0x18(%ebp),%eax
   365e1:	89 10                	mov    %edx,(%eax)
   365e3:	83 c4 2c             	add    $0x2c,%esp
   365e6:	89 f0                	mov    %esi,%eax
   365e8:	5b                   	pop    %ebx
   365e9:	5e                   	pop    %esi
   365ea:	5f                   	pop    %edi
   365eb:	5d                   	pop    %ebp
   365ec:	c3                   	ret    
   365ed:	8d 76 00             	lea    0x0(%esi),%esi
   365f0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
   365f3:	bf 01 00 00 00       	mov    $0x1,%edi
   365f8:	89 04 24             	mov    %eax,(%esp)
   365fb:	e8 40 f7 ff ff       	call   35d40 <__lo0bits>
   36600:	8b 55 e4             	mov    -0x1c(%ebp),%edx
   36603:	c7 46 10 01 00 00 00 	movl   $0x1,0x10(%esi)
   3660a:	89 56 14             	mov    %edx,0x14(%esi)
   3660d:	83 c0 20             	add    $0x20,%eax
   36610:	85 db                	test   %ebx,%ebx
   36612:	75 b7                	jne    365cb <__d2b+0x7b>
   36614:	8b 4d 14             	mov    0x14(%ebp),%ecx
   36617:	2d 32 04 00 00       	sub    $0x432,%eax
   3661c:	89 01                	mov    %eax,(%ecx)
   3661e:	8b 44 be 10          	mov    0x10(%esi,%edi,4),%eax
   36622:	c1 e7 05             	shl    $0x5,%edi
   36625:	89 04 24             	mov    %eax,(%esp)
   36628:	e8 b3 f6 ff ff       	call   35ce0 <__hi0bits>
   3662d:	29 c7                	sub    %eax,%edi
   3662f:	8b 45 18             	mov    0x18(%ebp),%eax
   36632:	89 38                	mov    %edi,(%eax)
   36634:	83 c4 2c             	add    $0x2c,%esp
   36637:	89 f0                	mov    %esi,%eax
   36639:	5b                   	pop    %ebx
   3663a:	5e                   	pop    %esi
   3663b:	5f                   	pop    %edi
   3663c:	5d                   	pop    %ebp
   3663d:	c3                   	ret    
   3663e:	66 90                	xchg   %ax,%ax
   36640:	8b 55 e4             	mov    -0x1c(%ebp),%edx
   36643:	b9 20 00 00 00       	mov    $0x20,%ecx
   36648:	29 c1                	sub    %eax,%ecx
   3664a:	89 d7                	mov    %edx,%edi
   3664c:	d3 e7                	shl    %cl,%edi
   3664e:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   36651:	09 f9                	or     %edi,%ecx
   36653:	89 4e 14             	mov    %ecx,0x14(%esi)
   36656:	89 c1                	mov    %eax,%ecx
   36658:	d3 ea                	shr    %cl,%edx
   3665a:	89 55 e4             	mov    %edx,-0x1c(%ebp)
   3665d:	e9 57 ff ff ff       	jmp    365b9 <__d2b+0x69>
   36662:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   36669:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00036670 <__ratio>:
   36670:	55                   	push   %ebp
   36671:	89 e5                	mov    %esp,%ebp
   36673:	56                   	push   %esi
   36674:	53                   	push   %ebx
   36675:	83 ec 30             	sub    $0x30,%esp
   36678:	8b 75 08             	mov    0x8(%ebp),%esi
   3667b:	8d 45 f0             	lea    -0x10(%ebp),%eax
   3667e:	8b 5d 0c             	mov    0xc(%ebp),%ebx
   36681:	89 44 24 04          	mov    %eax,0x4(%esp)
   36685:	89 34 24             	mov    %esi,(%esp)
   36688:	e8 c3 fd ff ff       	call   36450 <__b2d>
   3668d:	8d 45 f4             	lea    -0xc(%ebp),%eax
   36690:	89 44 24 04          	mov    %eax,0x4(%esp)
   36694:	89 1c 24             	mov    %ebx,(%esp)
   36697:	dd 55 e0             	fstl   -0x20(%ebp)
   3669a:	dd 5d d8             	fstpl  -0x28(%ebp)
   3669d:	e8 ae fd ff ff       	call   36450 <__b2d>
   366a2:	8b 46 10             	mov    0x10(%esi),%eax
   366a5:	2b 43 10             	sub    0x10(%ebx),%eax
   366a8:	8b 55 f0             	mov    -0x10(%ebp),%edx
   366ab:	2b 55 f4             	sub    -0xc(%ebp),%edx
   366ae:	c1 e0 05             	shl    $0x5,%eax
   366b1:	01 d0                	add    %edx,%eax
   366b3:	dd 55 d0             	fstl   -0x30(%ebp)
   366b6:	85 c0                	test   %eax,%eax
   366b8:	dd 45 d8             	fldl   -0x28(%ebp)
   366bb:	7e 1b                	jle    366d8 <__ratio+0x68>
   366bd:	dd d8                	fstp   %st(0)
   366bf:	c1 e0 14             	shl    $0x14,%eax
   366c2:	01 45 e4             	add    %eax,-0x1c(%ebp)
   366c5:	dd 45 e0             	fldl   -0x20(%ebp)
   366c8:	83 c4 30             	add    $0x30,%esp
   366cb:	5b                   	pop    %ebx
   366cc:	de f1                	fdivp  %st,%st(1)
   366ce:	5e                   	pop    %esi
   366cf:	5d                   	pop    %ebp
   366d0:	c3                   	ret    
   366d1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   366d8:	dd d9                	fstp   %st(1)
   366da:	c1 e0 14             	shl    $0x14,%eax
   366dd:	29 45 d4             	sub    %eax,-0x2c(%ebp)
   366e0:	dd 45 d0             	fldl   -0x30(%ebp)
   366e3:	83 c4 30             	add    $0x30,%esp
   366e6:	5b                   	pop    %ebx
   366e7:	de f9                	fdivrp %st,%st(1)
   366e9:	5e                   	pop    %esi
   366ea:	5d                   	pop    %ebp
   366eb:	c3                   	ret    
   366ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

000366f0 <_mprec_log10>:
   366f0:	55                   	push   %ebp
   366f1:	89 e5                	mov    %esp,%ebp
   366f3:	8b 45 08             	mov    0x8(%ebp),%eax
   366f6:	83 f8 17             	cmp    $0x17,%eax
   366f9:	7e 1d                	jle    36718 <_mprec_log10+0x28>
   366fb:	d9 e8                	fld1   
   366fd:	d9 05 1c 90 03 00    	flds   0x3901c
   36703:	90                   	nop
   36704:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   36708:	83 e8 01             	sub    $0x1,%eax
   3670b:	dc c9                	fmul   %st,%st(1)
   3670d:	75 f9                	jne    36708 <_mprec_log10+0x18>
   3670f:	dd d8                	fstp   %st(0)
   36711:	5d                   	pop    %ebp
   36712:	c3                   	ret    
   36713:	90                   	nop
   36714:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   36718:	dd 04 c5 00 91 03 00 	fldl   0x39100(,%eax,8)
   3671f:	5d                   	pop    %ebp
   36720:	c3                   	ret    
   36721:	eb 0d                	jmp    36730 <__copybits>
   36723:	90                   	nop
   36724:	90                   	nop
   36725:	90                   	nop
   36726:	90                   	nop
   36727:	90                   	nop
   36728:	90                   	nop
   36729:	90                   	nop
   3672a:	90                   	nop
   3672b:	90                   	nop
   3672c:	90                   	nop
   3672d:	90                   	nop
   3672e:	90                   	nop
   3672f:	90                   	nop

00036730 <__copybits>:
   36730:	55                   	push   %ebp
   36731:	89 e5                	mov    %esp,%ebp
   36733:	57                   	push   %edi
   36734:	8b 7d 10             	mov    0x10(%ebp),%edi
   36737:	56                   	push   %esi
   36738:	8b 75 0c             	mov    0xc(%ebp),%esi
   3673b:	8b 45 08             	mov    0x8(%ebp),%eax
   3673e:	53                   	push   %ebx
   3673f:	8b 4f 10             	mov    0x10(%edi),%ecx
   36742:	8d 56 ff             	lea    -0x1(%esi),%edx
   36745:	c1 fa 05             	sar    $0x5,%edx
   36748:	8d 74 90 04          	lea    0x4(%eax,%edx,4),%esi
   3674c:	8d 57 14             	lea    0x14(%edi),%edx
   3674f:	8d 1c 8a             	lea    (%edx,%ecx,4),%ebx
   36752:	39 da                	cmp    %ebx,%edx
   36754:	73 34                	jae    3678a <__copybits+0x5a>
   36756:	89 c1                	mov    %eax,%ecx
   36758:	83 c2 04             	add    $0x4,%edx
   3675b:	8b 42 fc             	mov    -0x4(%edx),%eax
   3675e:	83 c1 04             	add    $0x4,%ecx
   36761:	39 d3                	cmp    %edx,%ebx
   36763:	89 41 fc             	mov    %eax,-0x4(%ecx)
   36766:	77 f0                	ja     36758 <__copybits+0x28>
   36768:	8b 45 08             	mov    0x8(%ebp),%eax
   3676b:	29 fb                	sub    %edi,%ebx
   3676d:	8d 53 eb             	lea    -0x15(%ebx),%edx
   36770:	c1 ea 02             	shr    $0x2,%edx
   36773:	8d 44 90 04          	lea    0x4(%eax,%edx,4),%eax
   36777:	39 c6                	cmp    %eax,%esi
   36779:	76 13                	jbe    3678e <__copybits+0x5e>
   3677b:	90                   	nop
   3677c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   36780:	83 c0 04             	add    $0x4,%eax
   36783:	c7 40 fc 00 00 00 00 	movl   $0x0,-0x4(%eax)
   3678a:	39 c6                	cmp    %eax,%esi
   3678c:	77 f2                	ja     36780 <__copybits+0x50>
   3678e:	5b                   	pop    %ebx
   3678f:	5e                   	pop    %esi
   36790:	5f                   	pop    %edi
   36791:	5d                   	pop    %ebp
   36792:	c3                   	ret    
   36793:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   36799:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

000367a0 <__any_on>:
   367a0:	55                   	push   %ebp
   367a1:	89 e5                	mov    %esp,%ebp
   367a3:	8b 45 08             	mov    0x8(%ebp),%eax
   367a6:	57                   	push   %edi
   367a7:	56                   	push   %esi
   367a8:	53                   	push   %ebx
   367a9:	8b 5d 0c             	mov    0xc(%ebp),%ebx
   367ac:	8d 50 14             	lea    0x14(%eax),%edx
   367af:	8b 40 10             	mov    0x10(%eax),%eax
   367b2:	c1 fb 05             	sar    $0x5,%ebx
   367b5:	39 d8                	cmp    %ebx,%eax
   367b7:	7d 2f                	jge    367e8 <__any_on+0x48>
   367b9:	8d 1c 82             	lea    (%edx,%eax,4),%ebx
   367bc:	39 da                	cmp    %ebx,%edx
   367be:	73 1d                	jae    367dd <__any_on+0x3d>
   367c0:	8d 43 fc             	lea    -0x4(%ebx),%eax
   367c3:	8b 5b fc             	mov    -0x4(%ebx),%ebx
   367c6:	85 db                	test   %ebx,%ebx
   367c8:	74 0f                	je     367d9 <__any_on+0x39>
   367ca:	eb 44                	jmp    36810 <__any_on+0x70>
   367cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   367d0:	83 e8 04             	sub    $0x4,%eax
   367d3:	8b 08                	mov    (%eax),%ecx
   367d5:	85 c9                	test   %ecx,%ecx
   367d7:	75 37                	jne    36810 <__any_on+0x70>
   367d9:	39 c2                	cmp    %eax,%edx
   367db:	72 f3                	jb     367d0 <__any_on+0x30>
   367dd:	31 c0                	xor    %eax,%eax
   367df:	5b                   	pop    %ebx
   367e0:	5e                   	pop    %esi
   367e1:	5f                   	pop    %edi
   367e2:	5d                   	pop    %ebp
   367e3:	c3                   	ret    
   367e4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   367e8:	7e 1e                	jle    36808 <__any_on+0x68>
   367ea:	8b 4d 0c             	mov    0xc(%ebp),%ecx
   367ed:	8d 1c 9a             	lea    (%edx,%ebx,4),%ebx
   367f0:	83 e1 1f             	and    $0x1f,%ecx
   367f3:	74 c7                	je     367bc <__any_on+0x1c>
   367f5:	8b 3b                	mov    (%ebx),%edi
   367f7:	b8 01 00 00 00       	mov    $0x1,%eax
   367fc:	89 fe                	mov    %edi,%esi
   367fe:	d3 ee                	shr    %cl,%esi
   36800:	d3 e6                	shl    %cl,%esi
   36802:	39 fe                	cmp    %edi,%esi
   36804:	75 d9                	jne    367df <__any_on+0x3f>
   36806:	eb b4                	jmp    367bc <__any_on+0x1c>
   36808:	8d 1c 9a             	lea    (%edx,%ebx,4),%ebx
   3680b:	eb af                	jmp    367bc <__any_on+0x1c>
   3680d:	8d 76 00             	lea    0x0(%esi),%esi
   36810:	5b                   	pop    %ebx
   36811:	b8 01 00 00 00       	mov    $0x1,%eax
   36816:	5e                   	pop    %esi
   36817:	5f                   	pop    %edi
   36818:	5d                   	pop    %ebp
   36819:	c3                   	ret    
   3681a:	66 90                	xchg   %ax,%ax
   3681c:	66 90                	xchg   %ax,%ax
   3681e:	66 90                	xchg   %ax,%ax

00036820 <_sbrk_r>:
   36820:	55                   	push   %ebp
   36821:	89 e5                	mov    %esp,%ebp
   36823:	83 ec 18             	sub    $0x18,%esp
   36826:	8b 45 0c             	mov    0xc(%ebp),%eax
   36829:	c7 05 70 31 09 00 00 	movl   $0x0,0x93170
   36830:	00 00 00 
   36833:	89 04 24             	mov    %eax,(%esp)
   36836:	e8 11 a7 ff ff       	call   30f4c <sbrk>
   3683b:	83 f8 ff             	cmp    $0xffffffff,%eax
   3683e:	74 08                	je     36848 <_sbrk_r+0x28>
   36840:	c9                   	leave  
   36841:	c3                   	ret    
   36842:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   36848:	8b 15 70 31 09 00    	mov    0x93170,%edx
   3684e:	85 d2                	test   %edx,%edx
   36850:	74 ee                	je     36840 <_sbrk_r+0x20>
   36852:	8b 4d 08             	mov    0x8(%ebp),%ecx
   36855:	89 11                	mov    %edx,(%ecx)
   36857:	c9                   	leave  
   36858:	c3                   	ret    
   36859:	66 90                	xchg   %ax,%ax
   3685b:	66 90                	xchg   %ax,%ax
   3685d:	66 90                	xchg   %ax,%ax
   3685f:	90                   	nop

00036860 <__fpclassifyd>:
   36860:	55                   	push   %ebp
   36861:	b8 02 00 00 00       	mov    $0x2,%eax
   36866:	89 e5                	mov    %esp,%ebp
   36868:	53                   	push   %ebx
   36869:	83 ec 0c             	sub    $0xc,%esp
   3686c:	dd 45 08             	fldl   0x8(%ebp)
   3686f:	dd 5d f0             	fstpl  -0x10(%ebp)
   36872:	8b 55 f0             	mov    -0x10(%ebp),%edx
   36875:	8b 4d f4             	mov    -0xc(%ebp),%ecx
   36878:	89 d3                	mov    %edx,%ebx
   3687a:	09 cb                	or     %ecx,%ebx
   3687c:	75 0a                	jne    36888 <__fpclassifyd+0x28>
   3687e:	83 c4 0c             	add    $0xc,%esp
   36881:	5b                   	pop    %ebx
   36882:	5d                   	pop    %ebp
   36883:	c3                   	ret    
   36884:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   36888:	85 d2                	test   %edx,%edx
   3688a:	0f 94 c2             	sete   %dl
   3688d:	75 08                	jne    36897 <__fpclassifyd+0x37>
   3688f:	81 f9 00 00 00 80    	cmp    $0x80000000,%ecx
   36895:	74 e7                	je     3687e <__fpclassifyd+0x1e>
   36897:	81 e1 ff ff ff 7f    	and    $0x7fffffff,%ecx
   3689d:	b8 04 00 00 00       	mov    $0x4,%eax
   368a2:	8d 99 00 00 f0 ff    	lea    -0x100000(%ecx),%ebx
   368a8:	81 fb ff ff df 7f    	cmp    $0x7fdfffff,%ebx
   368ae:	76 ce                	jbe    3687e <__fpclassifyd+0x1e>
   368b0:	81 f9 ff ff 0f 00    	cmp    $0xfffff,%ecx
   368b6:	b0 03                	mov    $0x3,%al
   368b8:	76 c4                	jbe    3687e <__fpclassifyd+0x1e>
   368ba:	31 c0                	xor    %eax,%eax
   368bc:	81 f9 00 00 f0 7f    	cmp    $0x7ff00000,%ecx
   368c2:	0f 94 c0             	sete   %al
   368c5:	21 d0                	and    %edx,%eax
   368c7:	eb b5                	jmp    3687e <__fpclassifyd+0x1e>
   368c9:	66 90                	xchg   %ax,%ax
   368cb:	66 90                	xchg   %ax,%ax
   368cd:	66 90                	xchg   %ax,%ax
   368cf:	90                   	nop

000368d0 <strcmp>:
   368d0:	55                   	push   %ebp
   368d1:	89 e5                	mov    %esp,%ebp
   368d3:	8b 45 08             	mov    0x8(%ebp),%eax
   368d6:	8b 55 0c             	mov    0xc(%ebp),%edx
   368d9:	53                   	push   %ebx
   368da:	89 c1                	mov    %eax,%ecx
   368dc:	09 d1                	or     %edx,%ecx
   368de:	83 e1 03             	and    $0x3,%ecx
   368e1:	75 17                	jne    368fa <strcmp+0x2a>
   368e3:	8b 08                	mov    (%eax),%ecx
   368e5:	3b 0a                	cmp    (%edx),%ecx
   368e7:	74 33                	je     3691c <strcmp+0x4c>
   368e9:	eb 0f                	jmp    368fa <strcmp+0x2a>
   368eb:	90                   	nop
   368ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   368f0:	3a 0a                	cmp    (%edx),%cl
   368f2:	75 0d                	jne    36901 <strcmp+0x31>
   368f4:	83 c0 01             	add    $0x1,%eax
   368f7:	83 c2 01             	add    $0x1,%edx
   368fa:	0f b6 08             	movzbl (%eax),%ecx
   368fd:	84 c9                	test   %cl,%cl
   368ff:	75 ef                	jne    368f0 <strcmp+0x20>
   36901:	0f b6 00             	movzbl (%eax),%eax
   36904:	0f b6 12             	movzbl (%edx),%edx
   36907:	5b                   	pop    %ebx
   36908:	5d                   	pop    %ebp
   36909:	29 d0                	sub    %edx,%eax
   3690b:	c3                   	ret    
   3690c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   36910:	83 c0 04             	add    $0x4,%eax
   36913:	83 c2 04             	add    $0x4,%edx
   36916:	8b 08                	mov    (%eax),%ecx
   36918:	3b 0a                	cmp    (%edx),%ecx
   3691a:	75 de                	jne    368fa <strcmp+0x2a>
   3691c:	8d 99 ff fe fe fe    	lea    -0x1010101(%ecx),%ebx
   36922:	f7 d1                	not    %ecx
   36924:	21 cb                	and    %ecx,%ebx
   36926:	81 e3 80 80 80 80    	and    $0x80808080,%ebx
   3692c:	74 e2                	je     36910 <strcmp+0x40>
   3692e:	31 c0                	xor    %eax,%eax
   36930:	5b                   	pop    %ebx
   36931:	5d                   	pop    %ebp
   36932:	c3                   	ret    
   36933:	66 90                	xchg   %ax,%ax
   36935:	66 90                	xchg   %ax,%ax
   36937:	66 90                	xchg   %ax,%ax
   36939:	66 90                	xchg   %ax,%ax
   3693b:	66 90                	xchg   %ax,%ax
   3693d:	66 90                	xchg   %ax,%ax
   3693f:	90                   	nop

00036940 <strlen>:
   36940:	55                   	push   %ebp
   36941:	89 e5                	mov    %esp,%ebp
   36943:	57                   	push   %edi
   36944:	8b 55 08             	mov    0x8(%ebp),%edx
   36947:	89 d7                	mov    %edx,%edi
   36949:	f7 c7 03 00 00 00    	test   $0x3,%edi
   3694f:	74 25                	je     36976 <L5>
   36951:	8a 0f                	mov    (%edi),%cl
   36953:	47                   	inc    %edi
   36954:	84 c9                	test   %cl,%cl
   36956:	74 56                	je     369ae <L15>
   36958:	f7 c7 03 00 00 00    	test   $0x3,%edi
   3695e:	74 16                	je     36976 <L5>
   36960:	8a 0f                	mov    (%edi),%cl
   36962:	47                   	inc    %edi
   36963:	84 c9                	test   %cl,%cl
   36965:	74 47                	je     369ae <L15>
   36967:	f7 c7 03 00 00 00    	test   $0x3,%edi
   3696d:	74 07                	je     36976 <L5>
   3696f:	8a 0f                	mov    (%edi),%cl
   36971:	47                   	inc    %edi
   36972:	84 c9                	test   %cl,%cl
   36974:	74 38                	je     369ae <L15>

00036976 <L5>:
   36976:	83 ef 04             	sub    $0x4,%edi
   36979:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

00036980 <L10>:
   36980:	83 c7 04             	add    $0x4,%edi
   36983:	8b 0f                	mov    (%edi),%ecx
   36985:	8d 81 ff fe fe fe    	lea    -0x1010101(%ecx),%eax
   3698b:	f7 d1                	not    %ecx
   3698d:	21 c8                	and    %ecx,%eax
   3698f:	a9 80 80 80 80       	test   $0x80808080,%eax
   36994:	74 ea                	je     36980 <L10>
   36996:	f7 d1                	not    %ecx
   36998:	47                   	inc    %edi
   36999:	84 c9                	test   %cl,%cl
   3699b:	74 11                	je     369ae <L15>
   3699d:	47                   	inc    %edi
   3699e:	c1 e9 08             	shr    $0x8,%ecx
   369a1:	84 c9                	test   %cl,%cl
   369a3:	74 09                	je     369ae <L15>
   369a5:	47                   	inc    %edi
   369a6:	c1 e9 08             	shr    $0x8,%ecx
   369a9:	84 c9                	test   %cl,%cl
   369ab:	74 01                	je     369ae <L15>
   369ad:	47                   	inc    %edi

000369ae <L15>:
   369ae:	29 d7                	sub    %edx,%edi
   369b0:	8d 47 ff             	lea    -0x1(%edi),%eax
   369b3:	8d 65 fc             	lea    -0x4(%ebp),%esp
   369b6:	5f                   	pop    %edi
   369b7:	c9                   	leave  
   369b8:	c3                   	ret    
   369b9:	66 90                	xchg   %ax,%ax
   369bb:	66 90                	xchg   %ax,%ax
   369bd:	66 90                	xchg   %ax,%ax
   369bf:	90                   	nop

000369c0 <__ssprint_r>:
   369c0:	55                   	push   %ebp
   369c1:	89 e5                	mov    %esp,%ebp
   369c3:	57                   	push   %edi
   369c4:	56                   	push   %esi
   369c5:	53                   	push   %ebx
   369c6:	83 ec 2c             	sub    $0x2c,%esp
   369c9:	8b 45 10             	mov    0x10(%ebp),%eax
   369cc:	8b 5d 0c             	mov    0xc(%ebp),%ebx
   369cf:	8b 00                	mov    (%eax),%eax
   369d1:	89 c7                	mov    %eax,%edi
   369d3:	8b 45 10             	mov    0x10(%ebp),%eax
   369d6:	8b 40 08             	mov    0x8(%eax),%eax
   369d9:	85 c0                	test   %eax,%eax
   369db:	0f 84 af 01 00 00    	je     36b90 <__ssprint_r+0x1d0>
   369e1:	31 c9                	xor    %ecx,%ecx
   369e3:	31 d2                	xor    %edx,%edx
   369e5:	8b 03                	mov    (%ebx),%eax
   369e7:	89 ce                	mov    %ecx,%esi
   369e9:	85 f6                	test   %esi,%esi
   369eb:	89 55 e4             	mov    %edx,-0x1c(%ebp)
   369ee:	0f 84 ec 00 00 00    	je     36ae0 <__ssprint_r+0x120>
   369f4:	8b 53 08             	mov    0x8(%ebx),%edx
   369f7:	39 d6                	cmp    %edx,%esi
   369f9:	0f 82 fc 00 00 00    	jb     36afb <__ssprint_r+0x13b>
   369ff:	0f b7 4b 0c          	movzwl 0xc(%ebx),%ecx
   36a03:	66 f7 c1 80 04       	test   $0x480,%cx
   36a08:	0f 84 fa 00 00 00    	je     36b08 <__ssprint_r+0x148>
   36a0e:	8b 53 10             	mov    0x10(%ebx),%edx
   36a11:	29 d0                	sub    %edx,%eax
   36a13:	89 45 dc             	mov    %eax,-0x24(%ebp)
   36a16:	8b 43 14             	mov    0x14(%ebx),%eax
   36a19:	89 55 d8             	mov    %edx,-0x28(%ebp)
   36a1c:	8d 04 40             	lea    (%eax,%eax,2),%eax
   36a1f:	89 c2                	mov    %eax,%edx
   36a21:	c1 ea 1f             	shr    $0x1f,%edx
   36a24:	01 d0                	add    %edx,%eax
   36a26:	89 45 e0             	mov    %eax,-0x20(%ebp)
   36a29:	8b 45 dc             	mov    -0x24(%ebp),%eax
   36a2c:	d1 7d e0             	sarl   -0x20(%ebp)
   36a2f:	8d 44 06 01          	lea    0x1(%esi,%eax,1),%eax
   36a33:	39 45 e0             	cmp    %eax,-0x20(%ebp)
   36a36:	0f 83 34 01 00 00    	jae    36b70 <__ssprint_r+0x1b0>
   36a3c:	89 45 e0             	mov    %eax,-0x20(%ebp)
   36a3f:	80 e5 04             	and    $0x4,%ch
   36a42:	0f 84 c8 00 00 00    	je     36b10 <__ssprint_r+0x150>
   36a48:	89 44 24 04          	mov    %eax,0x4(%esp)
   36a4c:	8b 45 08             	mov    0x8(%ebp),%eax
   36a4f:	89 04 24             	mov    %eax,(%esp)
   36a52:	e8 e9 e7 ff ff       	call   35240 <_malloc_r>
   36a57:	85 c0                	test   %eax,%eax
   36a59:	89 c2                	mov    %eax,%edx
   36a5b:	0f 84 e1 00 00 00    	je     36b42 <__ssprint_r+0x182>
   36a61:	8b 45 dc             	mov    -0x24(%ebp),%eax
   36a64:	89 55 d8             	mov    %edx,-0x28(%ebp)
   36a67:	89 44 24 08          	mov    %eax,0x8(%esp)
   36a6b:	8b 43 10             	mov    0x10(%ebx),%eax
   36a6e:	89 14 24             	mov    %edx,(%esp)
   36a71:	89 44 24 04          	mov    %eax,0x4(%esp)
   36a75:	e8 0a b2 ff ff       	call   31c84 <memcpy>
   36a7a:	0f b7 43 0c          	movzwl 0xc(%ebx),%eax
   36a7e:	8b 55 d8             	mov    -0x28(%ebp),%edx
   36a81:	66 25 7f fb          	and    $0xfb7f,%ax
   36a85:	0c 80                	or     $0x80,%al
   36a87:	66 89 43 0c          	mov    %ax,0xc(%ebx)
   36a8b:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   36a8e:	8b 45 dc             	mov    -0x24(%ebp),%eax
   36a91:	89 53 10             	mov    %edx,0x10(%ebx)
   36a94:	89 4b 14             	mov    %ecx,0x14(%ebx)
   36a97:	2b 4d dc             	sub    -0x24(%ebp),%ecx
   36a9a:	01 d0                	add    %edx,%eax
   36a9c:	89 03                	mov    %eax,(%ebx)
   36a9e:	89 f2                	mov    %esi,%edx
   36aa0:	89 4b 08             	mov    %ecx,0x8(%ebx)
   36aa3:	89 f1                	mov    %esi,%ecx
   36aa5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
   36aa9:	89 4d e0             	mov    %ecx,-0x20(%ebp)
   36aac:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   36aaf:	89 04 24             	mov    %eax,(%esp)
   36ab2:	89 55 dc             	mov    %edx,-0x24(%ebp)
   36ab5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
   36ab9:	e8 22 13 00 00       	call   37de0 <memmove>
   36abe:	8b 03                	mov    (%ebx),%eax
   36ac0:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   36ac3:	8b 55 dc             	mov    -0x24(%ebp),%edx
   36ac6:	29 53 08             	sub    %edx,0x8(%ebx)
   36ac9:	01 c8                	add    %ecx,%eax
   36acb:	8b 4d 10             	mov    0x10(%ebp),%ecx
   36ace:	89 03                	mov    %eax,(%ebx)
   36ad0:	8b 51 08             	mov    0x8(%ecx),%edx
   36ad3:	29 f2                	sub    %esi,%edx
   36ad5:	85 d2                	test   %edx,%edx
   36ad7:	89 51 08             	mov    %edx,0x8(%ecx)
   36ada:	0f 84 98 00 00 00    	je     36b78 <__ssprint_r+0x1b8>
   36ae0:	8b 77 04             	mov    0x4(%edi),%esi
   36ae3:	83 c7 08             	add    $0x8,%edi
   36ae6:	8b 4f f8             	mov    -0x8(%edi),%ecx
   36ae9:	85 f6                	test   %esi,%esi
   36aeb:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   36aee:	74 f0                	je     36ae0 <__ssprint_r+0x120>
   36af0:	8b 53 08             	mov    0x8(%ebx),%edx
   36af3:	39 d6                	cmp    %edx,%esi
   36af5:	0f 83 04 ff ff ff    	jae    369ff <__ssprint_r+0x3f>
   36afb:	89 f2                	mov    %esi,%edx
   36afd:	89 f1                	mov    %esi,%ecx
   36aff:	eb a4                	jmp    36aa5 <__ssprint_r+0xe5>
   36b01:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   36b08:	89 d1                	mov    %edx,%ecx
   36b0a:	eb 99                	jmp    36aa5 <__ssprint_r+0xe5>
   36b0c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   36b10:	89 44 24 08          	mov    %eax,0x8(%esp)
   36b14:	8b 45 d8             	mov    -0x28(%ebp),%eax
   36b17:	89 44 24 04          	mov    %eax,0x4(%esp)
   36b1b:	8b 45 08             	mov    0x8(%ebp),%eax
   36b1e:	89 04 24             	mov    %eax,(%esp)
   36b21:	e8 4a 13 00 00       	call   37e70 <_realloc_r>
   36b26:	85 c0                	test   %eax,%eax
   36b28:	89 c2                	mov    %eax,%edx
   36b2a:	0f 85 5b ff ff ff    	jne    36a8b <__ssprint_r+0xcb>
   36b30:	8b 43 10             	mov    0x10(%ebx),%eax
   36b33:	89 44 24 04          	mov    %eax,0x4(%esp)
   36b37:	8b 45 08             	mov    0x8(%ebp),%eax
   36b3a:	89 04 24             	mov    %eax,(%esp)
   36b3d:	e8 3e 10 00 00       	call   37b80 <_free_r>
   36b42:	8b 45 08             	mov    0x8(%ebp),%eax
   36b45:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
   36b4b:	8b 45 10             	mov    0x10(%ebp),%eax
   36b4e:	66 83 4b 0c 40       	orw    $0x40,0xc(%ebx)
   36b53:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
   36b5a:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
   36b61:	83 c4 2c             	add    $0x2c,%esp
   36b64:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
   36b69:	5b                   	pop    %ebx
   36b6a:	5e                   	pop    %esi
   36b6b:	5f                   	pop    %edi
   36b6c:	5d                   	pop    %ebp
   36b6d:	c3                   	ret    
   36b6e:	66 90                	xchg   %ax,%ax
   36b70:	8b 45 e0             	mov    -0x20(%ebp),%eax
   36b73:	e9 c7 fe ff ff       	jmp    36a3f <__ssprint_r+0x7f>
   36b78:	c7 41 04 00 00 00 00 	movl   $0x0,0x4(%ecx)
   36b7f:	83 c4 2c             	add    $0x2c,%esp
   36b82:	31 c0                	xor    %eax,%eax
   36b84:	5b                   	pop    %ebx
   36b85:	5e                   	pop    %esi
   36b86:	5f                   	pop    %edi
   36b87:	5d                   	pop    %ebp
   36b88:	c3                   	ret    
   36b89:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   36b90:	8b 45 10             	mov    0x10(%ebp),%eax
   36b93:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
   36b9a:	83 c4 2c             	add    $0x2c,%esp
   36b9d:	31 c0                	xor    %eax,%eax
   36b9f:	5b                   	pop    %ebx
   36ba0:	5e                   	pop    %esi
   36ba1:	5f                   	pop    %edi
   36ba2:	5d                   	pop    %ebp
   36ba3:	c3                   	ret    
   36ba4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   36baa:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

00036bb0 <_svfiprintf_r>:
   36bb0:	55                   	push   %ebp
   36bb1:	89 e5                	mov    %esp,%ebp
   36bb3:	57                   	push   %edi
   36bb4:	56                   	push   %esi
   36bb5:	53                   	push   %ebx
   36bb6:	81 ec cc 00 00 00    	sub    $0xcc,%esp
   36bbc:	8b 45 0c             	mov    0xc(%ebp),%eax
   36bbf:	f6 40 0c 80          	testb  $0x80,0xc(%eax)
   36bc3:	74 0b                	je     36bd0 <_svfiprintf_r+0x20>
   36bc5:	8b 50 10             	mov    0x10(%eax),%edx
   36bc8:	85 d2                	test   %edx,%edx
   36bca:	0f 84 1c 0d 00 00    	je     378ec <_svfiprintf_r+0xd3c>
   36bd0:	8d 45 a8             	lea    -0x58(%ebp),%eax
   36bd3:	8d 5d a7             	lea    -0x59(%ebp),%ebx
   36bd6:	89 c6                	mov    %eax,%esi
   36bd8:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
   36bde:	29 d8                	sub    %ebx,%eax
   36be0:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%ebp)
   36be7:	00 00 00 
   36bea:	c7 85 78 ff ff ff 00 	movl   $0x0,-0x88(%ebp)
   36bf1:	00 00 00 
   36bf4:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   36bfb:	00 00 00 
   36bfe:	c7 85 50 ff ff ff 00 	movl   $0x0,-0xb0(%ebp)
   36c05:	00 00 00 
   36c08:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
   36c0e:	8b 45 10             	mov    0x10(%ebp),%eax
   36c11:	8b 5d 10             	mov    0x10(%ebp),%ebx
   36c14:	0f b6 00             	movzbl (%eax),%eax
   36c17:	84 c0                	test   %al,%al
   36c19:	74 58                	je     36c73 <_svfiprintf_r+0xc3>
   36c1b:	3c 25                	cmp    $0x25,%al
   36c1d:	75 13                	jne    36c32 <_svfiprintf_r+0x82>
   36c1f:	eb 52                	jmp    36c73 <_svfiprintf_r+0xc3>
   36c21:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   36c28:	84 c0                	test   %al,%al
   36c2a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   36c30:	74 0a                	je     36c3c <_svfiprintf_r+0x8c>
   36c32:	83 c3 01             	add    $0x1,%ebx
   36c35:	0f b6 03             	movzbl (%ebx),%eax
   36c38:	3c 25                	cmp    $0x25,%al
   36c3a:	75 ec                	jne    36c28 <_svfiprintf_r+0x78>
   36c3c:	89 df                	mov    %ebx,%edi
   36c3e:	2b 7d 10             	sub    0x10(%ebp),%edi
   36c41:	74 30                	je     36c73 <_svfiprintf_r+0xc3>
   36c43:	8b 45 10             	mov    0x10(%ebp),%eax
   36c46:	83 c6 08             	add    $0x8,%esi
   36c49:	89 7e fc             	mov    %edi,-0x4(%esi)
   36c4c:	01 bd 7c ff ff ff    	add    %edi,-0x84(%ebp)
   36c52:	89 46 f8             	mov    %eax,-0x8(%esi)
   36c55:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   36c5b:	83 c0 01             	add    $0x1,%eax
   36c5e:	83 f8 07             	cmp    $0x7,%eax
   36c61:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   36c67:	0f 8f eb 0a 00 00    	jg     37758 <_svfiprintf_r+0xba8>
   36c6d:	01 bd 50 ff ff ff    	add    %edi,-0xb0(%ebp)
   36c73:	80 3b 00             	cmpb   $0x0,(%ebx)
   36c76:	0f 84 11 09 00 00    	je     3758d <_svfiprintf_r+0x9dd>
   36c7c:	8d 43 01             	lea    0x1(%ebx),%eax
   36c7f:	31 ff                	xor    %edi,%edi
   36c81:	c6 85 71 ff ff ff 00 	movb   $0x0,-0x8f(%ebp)
   36c88:	c7 85 5c ff ff ff ff 	movl   $0xffffffff,-0xa4(%ebp)
   36c8f:	ff ff ff 
   36c92:	c7 85 54 ff ff ff 00 	movl   $0x0,-0xac(%ebp)
   36c99:	00 00 00 
   36c9c:	c7 85 64 ff ff ff 00 	movl   $0x0,-0x9c(%ebp)
   36ca3:	00 00 00 
   36ca6:	8d 50 01             	lea    0x1(%eax),%edx
   36ca9:	0f be 00             	movsbl (%eax),%eax
   36cac:	8d 48 e0             	lea    -0x20(%eax),%ecx
   36caf:	83 f9 58             	cmp    $0x58,%ecx
   36cb2:	0f 87 63 03 00 00    	ja     3701b <_svfiprintf_r+0x46b>
   36cb8:	ff 24 8d c8 91 03 00 	jmp    *0x391c8(,%ecx,4)
   36cbf:	90                   	nop
   36cc0:	83 8d 64 ff ff ff 10 	orl    $0x10,-0x9c(%ebp)
   36cc7:	89 d0                	mov    %edx,%eax
   36cc9:	eb db                	jmp    36ca6 <_svfiprintf_r+0xf6>
   36ccb:	8b 45 14             	mov    0x14(%ebp),%eax
   36cce:	8b 5d 14             	mov    0x14(%ebp),%ebx
   36cd1:	8b 00                	mov    (%eax),%eax
   36cd3:	83 c3 04             	add    $0x4,%ebx
   36cd6:	89 5d 14             	mov    %ebx,0x14(%ebp)
   36cd9:	85 c0                	test   %eax,%eax
   36cdb:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
   36ce1:	79 e4                	jns    36cc7 <_svfiprintf_r+0x117>
   36ce3:	f7 9d 54 ff ff ff    	negl   -0xac(%ebp)
   36ce9:	83 8d 64 ff ff ff 04 	orl    $0x4,-0x9c(%ebp)
   36cf0:	89 d0                	mov    %edx,%eax
   36cf2:	eb b2                	jmp    36ca6 <_svfiprintf_r+0xf6>
   36cf4:	bf 2b 00 00 00       	mov    $0x2b,%edi
   36cf9:	89 d0                	mov    %edx,%eax
   36cfb:	eb a9                	jmp    36ca6 <_svfiprintf_r+0xf6>
   36cfd:	8b 45 14             	mov    0x14(%ebp),%eax
   36d00:	83 8d 64 ff ff ff 02 	orl    $0x2,-0x9c(%ebp)
   36d07:	89 55 10             	mov    %edx,0x10(%ebp)
   36d0a:	ba 02 00 00 00       	mov    $0x2,%edx
   36d0f:	8b 08                	mov    (%eax),%ecx
   36d11:	83 c0 04             	add    $0x4,%eax
   36d14:	c6 85 72 ff ff ff 30 	movb   $0x30,-0x8e(%ebp)
   36d1b:	c6 85 73 ff ff ff 78 	movb   $0x78,-0x8d(%ebp)
   36d22:	89 45 14             	mov    %eax,0x14(%ebp)
   36d25:	c7 85 44 ff ff ff 63 	movl   $0x38e63,-0xbc(%ebp)
   36d2c:	8e 03 00 
   36d2f:	90                   	nop
   36d30:	c6 85 71 ff ff ff 00 	movb   $0x0,-0x8f(%ebp)
   36d37:	31 ff                	xor    %edi,%edi
   36d39:	8b 9d 64 ff ff ff    	mov    -0x9c(%ebp),%ebx
   36d3f:	89 d8                	mov    %ebx,%eax
   36d41:	24 7f                	and    $0x7f,%al
   36d43:	83 bd 5c ff ff ff 00 	cmpl   $0x0,-0xa4(%ebp)
   36d4a:	0f 48 c3             	cmovs  %ebx,%eax
   36d4d:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
   36d53:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
   36d59:	85 c0                	test   %eax,%eax
   36d5b:	75 08                	jne    36d65 <_svfiprintf_r+0x1b5>
   36d5d:	85 c9                	test   %ecx,%ecx
   36d5f:	0f 84 03 08 00 00    	je     37568 <_svfiprintf_r+0x9b8>
   36d65:	80 fa 01             	cmp    $0x1,%dl
   36d68:	0f 84 8a 0a 00 00    	je     377f8 <_svfiprintf_r+0xc48>
   36d6e:	80 fa 02             	cmp    $0x2,%dl
   36d71:	8d 5d a8             	lea    -0x58(%ebp),%ebx
   36d74:	0f 85 86 01 00 00    	jne    36f00 <_svfiprintf_r+0x350>
   36d7a:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
   36d80:	89 c8                	mov    %ecx,%eax
   36d82:	83 eb 01             	sub    $0x1,%ebx
   36d85:	83 e0 0f             	and    $0xf,%eax
   36d88:	0f b6 04 02          	movzbl (%edx,%eax,1),%eax
   36d8c:	c1 e9 04             	shr    $0x4,%ecx
   36d8f:	85 c9                	test   %ecx,%ecx
   36d91:	88 03                	mov    %al,(%ebx)
   36d93:	75 eb                	jne    36d80 <_svfiprintf_r+0x1d0>
   36d95:	8d 45 a8             	lea    -0x58(%ebp),%eax
   36d98:	29 d8                	sub    %ebx,%eax
   36d9a:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   36da0:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
   36da6:	8b 8d 58 ff ff ff    	mov    -0xa8(%ebp),%ecx
   36dac:	39 c1                	cmp    %eax,%ecx
   36dae:	0f 4d c1             	cmovge %ecx,%eax
   36db1:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
   36db7:	89 f8                	mov    %edi,%eax
   36db9:	3c 01                	cmp    $0x1,%al
   36dbb:	83 9d 60 ff ff ff ff 	sbbl   $0xffffffff,-0xa0(%ebp)
   36dc2:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
   36dc8:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
   36dce:	89 d0                	mov    %edx,%eax
   36dd0:	89 cf                	mov    %ecx,%edi
   36dd2:	83 c0 02             	add    $0x2,%eax
   36dd5:	83 e7 02             	and    $0x2,%edi
   36dd8:	89 bd 4c ff ff ff    	mov    %edi,-0xb4(%ebp)
   36dde:	89 cf                	mov    %ecx,%edi
   36de0:	0f 44 c2             	cmove  %edx,%eax
   36de3:	81 e7 84 00 00 00    	and    $0x84,%edi
   36de9:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
   36def:	89 bd 48 ff ff ff    	mov    %edi,-0xb8(%ebp)
   36df5:	0f 85 cd 04 00 00    	jne    372c8 <_svfiprintf_r+0x718>
   36dfb:	8b bd 54 ff ff ff    	mov    -0xac(%ebp),%edi
   36e01:	2b bd 60 ff ff ff    	sub    -0xa0(%ebp),%edi
   36e07:	85 ff                	test   %edi,%edi
   36e09:	0f 8e b9 04 00 00    	jle    372c8 <_svfiprintf_r+0x718>
   36e0f:	83 ff 10             	cmp    $0x10,%edi
   36e12:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   36e18:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   36e1e:	7e 7c                	jle    36e9c <_svfiprintf_r+0x2ec>
   36e20:	89 9d 40 ff ff ff    	mov    %ebx,-0xc0(%ebp)
   36e26:	89 f1                	mov    %esi,%ecx
   36e28:	8b 5d 08             	mov    0x8(%ebp),%ebx
   36e2b:	8b 75 0c             	mov    0xc(%ebp),%esi
   36e2e:	eb 08                	jmp    36e38 <_svfiprintf_r+0x288>
   36e30:	83 ef 10             	sub    $0x10,%edi
   36e33:	83 ff 10             	cmp    $0x10,%edi
   36e36:	7e 5c                	jle    36e94 <_svfiprintf_r+0x2e4>
   36e38:	83 c0 01             	add    $0x1,%eax
   36e3b:	83 c2 10             	add    $0x10,%edx
   36e3e:	c7 01 3c 93 03 00    	movl   $0x3933c,(%ecx)
   36e44:	83 c1 08             	add    $0x8,%ecx
   36e47:	c7 41 fc 10 00 00 00 	movl   $0x10,-0x4(%ecx)
   36e4e:	83 f8 07             	cmp    $0x7,%eax
   36e51:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   36e57:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   36e5d:	7e d1                	jle    36e30 <_svfiprintf_r+0x280>
   36e5f:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   36e65:	89 44 24 08          	mov    %eax,0x8(%esp)
   36e69:	89 74 24 04          	mov    %esi,0x4(%esp)
   36e6d:	89 1c 24             	mov    %ebx,(%esp)
   36e70:	e8 4b fb ff ff       	call   369c0 <__ssprint_r>
   36e75:	85 c0                	test   %eax,%eax
   36e77:	0f 85 3b 07 00 00    	jne    375b8 <_svfiprintf_r+0xa08>
   36e7d:	83 ef 10             	sub    $0x10,%edi
   36e80:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   36e86:	83 ff 10             	cmp    $0x10,%edi
   36e89:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   36e8f:	8d 4d a8             	lea    -0x58(%ebp),%ecx
   36e92:	7f a4                	jg     36e38 <_svfiprintf_r+0x288>
   36e94:	8b 9d 40 ff ff ff    	mov    -0xc0(%ebp),%ebx
   36e9a:	89 ce                	mov    %ecx,%esi
   36e9c:	83 c0 01             	add    $0x1,%eax
   36e9f:	01 fa                	add    %edi,%edx
   36ea1:	c7 06 3c 93 03 00    	movl   $0x3933c,(%esi)
   36ea7:	83 c6 08             	add    $0x8,%esi
   36eaa:	89 7e fc             	mov    %edi,-0x4(%esi)
   36ead:	83 f8 07             	cmp    $0x7,%eax
   36eb0:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   36eb6:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   36ebc:	0f 8e 12 04 00 00    	jle    372d4 <_svfiprintf_r+0x724>
   36ec2:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   36ec8:	89 44 24 08          	mov    %eax,0x8(%esp)
   36ecc:	8b 45 0c             	mov    0xc(%ebp),%eax
   36ecf:	89 44 24 04          	mov    %eax,0x4(%esp)
   36ed3:	8b 45 08             	mov    0x8(%ebp),%eax
   36ed6:	89 04 24             	mov    %eax,(%esp)
   36ed9:	e8 e2 fa ff ff       	call   369c0 <__ssprint_r>
   36ede:	85 c0                	test   %eax,%eax
   36ee0:	0f 85 d2 06 00 00    	jne    375b8 <_svfiprintf_r+0xa08>
   36ee6:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   36eec:	8d 75 a8             	lea    -0x58(%ebp),%esi
   36eef:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   36ef5:	e9 da 03 00 00       	jmp    372d4 <_svfiprintf_r+0x724>
   36efa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   36f00:	89 c8                	mov    %ecx,%eax
   36f02:	83 eb 01             	sub    $0x1,%ebx
   36f05:	83 e0 07             	and    $0x7,%eax
   36f08:	c1 e9 03             	shr    $0x3,%ecx
   36f0b:	83 c0 30             	add    $0x30,%eax
   36f0e:	85 c9                	test   %ecx,%ecx
   36f10:	88 03                	mov    %al,(%ebx)
   36f12:	75 ec                	jne    36f00 <_svfiprintf_r+0x350>
   36f14:	f6 85 64 ff ff ff 01 	testb  $0x1,-0x9c(%ebp)
   36f1b:	89 da                	mov    %ebx,%edx
   36f1d:	0f 84 72 fe ff ff    	je     36d95 <_svfiprintf_r+0x1e5>
   36f23:	3c 30                	cmp    $0x30,%al
   36f25:	0f 84 6a fe ff ff    	je     36d95 <_svfiprintf_r+0x1e5>
   36f2b:	83 eb 01             	sub    $0x1,%ebx
   36f2e:	8d 45 a8             	lea    -0x58(%ebp),%eax
   36f31:	29 d8                	sub    %ebx,%eax
   36f33:	c6 42 ff 30          	movb   $0x30,-0x1(%edx)
   36f37:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   36f3d:	e9 5e fe ff ff       	jmp    36da0 <_svfiprintf_r+0x1f0>
   36f42:	83 8d 64 ff ff ff 10 	orl    $0x10,-0x9c(%ebp)
   36f49:	f6 85 64 ff ff ff 10 	testb  $0x10,-0x9c(%ebp)
   36f50:	89 55 10             	mov    %edx,0x10(%ebp)
   36f53:	8b 45 14             	mov    0x14(%ebp),%eax
   36f56:	0f 85 48 01 00 00    	jne    370a4 <_svfiprintf_r+0x4f4>
   36f5c:	f6 85 64 ff ff ff 40 	testb  $0x40,-0x9c(%ebp)
   36f63:	0f 84 3b 01 00 00    	je     370a4 <_svfiprintf_r+0x4f4>
   36f69:	0f b7 08             	movzwl (%eax),%ecx
   36f6c:	83 c0 04             	add    $0x4,%eax
   36f6f:	31 d2                	xor    %edx,%edx
   36f71:	89 45 14             	mov    %eax,0x14(%ebp)
   36f74:	e9 b7 fd ff ff       	jmp    36d30 <_svfiprintf_r+0x180>
   36f79:	83 8d 64 ff ff ff 10 	orl    $0x10,-0x9c(%ebp)
   36f80:	89 f8                	mov    %edi,%eax
   36f82:	89 55 10             	mov    %edx,0x10(%ebp)
   36f85:	88 85 71 ff ff ff    	mov    %al,-0x8f(%ebp)
   36f8b:	f6 85 64 ff ff ff 10 	testb  $0x10,-0x9c(%ebp)
   36f92:	8b 45 14             	mov    0x14(%ebp),%eax
   36f95:	75 0d                	jne    36fa4 <_svfiprintf_r+0x3f4>
   36f97:	f6 85 64 ff ff ff 40 	testb  $0x40,-0x9c(%ebp)
   36f9e:	0f 85 f2 08 00 00    	jne    37896 <_svfiprintf_r+0xce6>
   36fa4:	8b 08                	mov    (%eax),%ecx
   36fa6:	83 c0 04             	add    $0x4,%eax
   36fa9:	89 45 14             	mov    %eax,0x14(%ebp)
   36fac:	85 c9                	test   %ecx,%ecx
   36fae:	0f 88 f3 08 00 00    	js     378a7 <_svfiprintf_r+0xcf7>
   36fb4:	0f b6 bd 71 ff ff ff 	movzbl -0x8f(%ebp),%edi
   36fbb:	ba 01 00 00 00       	mov    $0x1,%edx
   36fc0:	e9 74 fd ff ff       	jmp    36d39 <_svfiprintf_r+0x189>
   36fc5:	0f be 02             	movsbl (%edx),%eax
   36fc8:	8d 5a 01             	lea    0x1(%edx),%ebx
   36fcb:	83 f8 2a             	cmp    $0x2a,%eax
   36fce:	0f 84 af 09 00 00    	je     37983 <_svfiprintf_r+0xdd3>
   36fd4:	8d 48 d0             	lea    -0x30(%eax),%ecx
   36fd7:	31 d2                	xor    %edx,%edx
   36fd9:	83 f9 09             	cmp    $0x9,%ecx
   36fdc:	0f 87 90 09 00 00    	ja     37972 <_svfiprintf_r+0xdc2>
   36fe2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   36fe8:	8d 04 92             	lea    (%edx,%edx,4),%eax
   36feb:	83 c3 01             	add    $0x1,%ebx
   36fee:	8d 14 41             	lea    (%ecx,%eax,2),%edx
   36ff1:	0f be 43 ff          	movsbl -0x1(%ebx),%eax
   36ff5:	8d 48 d0             	lea    -0x30(%eax),%ecx
   36ff8:	83 f9 09             	cmp    $0x9,%ecx
   36ffb:	76 eb                	jbe    36fe8 <_svfiprintf_r+0x438>
   36ffd:	85 d2                	test   %edx,%edx
   36fff:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
   37004:	0f 48 d1             	cmovs  %ecx,%edx
   37007:	8d 48 e0             	lea    -0x20(%eax),%ecx
   3700a:	83 f9 58             	cmp    $0x58,%ecx
   3700d:	89 95 5c ff ff ff    	mov    %edx,-0xa4(%ebp)
   37013:	89 da                	mov    %ebx,%edx
   37015:	0f 86 9d fc ff ff    	jbe    36cb8 <_svfiprintf_r+0x108>
   3701b:	89 fb                	mov    %edi,%ebx
   3701d:	85 c0                	test   %eax,%eax
   3701f:	89 55 10             	mov    %edx,0x10(%ebp)
   37022:	88 9d 71 ff ff ff    	mov    %bl,-0x8f(%ebp)
   37028:	0f 84 5f 05 00 00    	je     3758d <_svfiprintf_r+0x9dd>
   3702e:	88 45 80             	mov    %al,-0x80(%ebp)
   37031:	8d 5d 80             	lea    -0x80(%ebp),%ebx
   37034:	c6 85 71 ff ff ff 00 	movb   $0x0,-0x8f(%ebp)
   3703b:	c7 85 60 ff ff ff 01 	movl   $0x1,-0xa0(%ebp)
   37042:	00 00 00 
   37045:	c7 85 58 ff ff ff 01 	movl   $0x1,-0xa8(%ebp)
   3704c:	00 00 00 
   3704f:	e9 5a 01 00 00       	jmp    371ae <_svfiprintf_r+0x5fe>
   37054:	31 db                	xor    %ebx,%ebx
   37056:	8d 48 d0             	lea    -0x30(%eax),%ecx
   37059:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   37060:	8d 04 9b             	lea    (%ebx,%ebx,4),%eax
   37063:	83 c2 01             	add    $0x1,%edx
   37066:	8d 1c 41             	lea    (%ecx,%eax,2),%ebx
   37069:	0f be 42 ff          	movsbl -0x1(%edx),%eax
   3706d:	8d 48 d0             	lea    -0x30(%eax),%ecx
   37070:	83 f9 09             	cmp    $0x9,%ecx
   37073:	76 eb                	jbe    37060 <_svfiprintf_r+0x4b0>
   37075:	89 9d 54 ff ff ff    	mov    %ebx,-0xac(%ebp)
   3707b:	e9 2c fc ff ff       	jmp    36cac <_svfiprintf_r+0xfc>
   37080:	81 8d 64 ff ff ff 80 	orl    $0x80,-0x9c(%ebp)
   37087:	00 00 00 
   3708a:	89 d0                	mov    %edx,%eax
   3708c:	e9 15 fc ff ff       	jmp    36ca6 <_svfiprintf_r+0xf6>
   37091:	f6 85 64 ff ff ff 10 	testb  $0x10,-0x9c(%ebp)
   37098:	89 55 10             	mov    %edx,0x10(%ebp)
   3709b:	8b 45 14             	mov    0x14(%ebp),%eax
   3709e:	0f 84 b8 fe ff ff    	je     36f5c <_svfiprintf_r+0x3ac>
   370a4:	8b 08                	mov    (%eax),%ecx
   370a6:	83 c0 04             	add    $0x4,%eax
   370a9:	31 d2                	xor    %edx,%edx
   370ab:	89 45 14             	mov    %eax,0x14(%ebp)
   370ae:	e9 7d fc ff ff       	jmp    36d30 <_svfiprintf_r+0x180>
   370b3:	f6 85 64 ff ff ff 10 	testb  $0x10,-0x9c(%ebp)
   370ba:	89 f8                	mov    %edi,%eax
   370bc:	89 55 10             	mov    %edx,0x10(%ebp)
   370bf:	88 85 71 ff ff ff    	mov    %al,-0x8f(%ebp)
   370c5:	0f 85 a2 07 00 00    	jne    3786d <_svfiprintf_r+0xcbd>
   370cb:	f6 85 64 ff ff ff 40 	testb  $0x40,-0x9c(%ebp)
   370d2:	0f 84 95 07 00 00    	je     3786d <_svfiprintf_r+0xcbd>
   370d8:	8b 45 14             	mov    0x14(%ebp),%eax
   370db:	0f b7 9d 50 ff ff ff 	movzwl -0xb0(%ebp),%ebx
   370e2:	8b 00                	mov    (%eax),%eax
   370e4:	66 89 18             	mov    %bx,(%eax)
   370e7:	8b 45 14             	mov    0x14(%ebp),%eax
   370ea:	83 c0 04             	add    $0x4,%eax
   370ed:	89 45 14             	mov    %eax,0x14(%ebp)
   370f0:	e9 19 fb ff ff       	jmp    36c0e <_svfiprintf_r+0x5e>
   370f5:	89 fb                	mov    %edi,%ebx
   370f7:	89 55 10             	mov    %edx,0x10(%ebp)
   370fa:	88 9d 71 ff ff ff    	mov    %bl,-0x8f(%ebp)
   37100:	c7 85 44 ff ff ff 63 	movl   $0x38e63,-0xbc(%ebp)
   37107:	8e 03 00 
   3710a:	f6 85 64 ff ff ff 10 	testb  $0x10,-0x9c(%ebp)
   37111:	8b 5d 14             	mov    0x14(%ebp),%ebx
   37114:	75 0d                	jne    37123 <_svfiprintf_r+0x573>
   37116:	f6 85 64 ff ff ff 40 	testb  $0x40,-0x9c(%ebp)
   3711d:	0f 85 65 07 00 00    	jne    37888 <_svfiprintf_r+0xcd8>
   37123:	8b 0b                	mov    (%ebx),%ecx
   37125:	83 c3 04             	add    $0x4,%ebx
   37128:	89 5d 14             	mov    %ebx,0x14(%ebp)
   3712b:	f6 85 64 ff ff ff 01 	testb  $0x1,-0x9c(%ebp)
   37132:	ba 02 00 00 00       	mov    $0x2,%edx
   37137:	0f 84 f3 fb ff ff    	je     36d30 <_svfiprintf_r+0x180>
   3713d:	85 c9                	test   %ecx,%ecx
   3713f:	0f 84 eb fb ff ff    	je     36d30 <_svfiprintf_r+0x180>
   37145:	c6 85 72 ff ff ff 30 	movb   $0x30,-0x8e(%ebp)
   3714c:	88 85 73 ff ff ff    	mov    %al,-0x8d(%ebp)
   37152:	83 8d 64 ff ff ff 02 	orl    $0x2,-0x9c(%ebp)
   37159:	e9 d2 fb ff ff       	jmp    36d30 <_svfiprintf_r+0x180>
   3715e:	83 8d 64 ff ff ff 40 	orl    $0x40,-0x9c(%ebp)
   37165:	89 d0                	mov    %edx,%eax
   37167:	e9 3a fb ff ff       	jmp    36ca6 <_svfiprintf_r+0xf6>
   3716c:	89 f8                	mov    %edi,%eax
   3716e:	89 55 10             	mov    %edx,0x10(%ebp)
   37171:	88 85 71 ff ff ff    	mov    %al,-0x8f(%ebp)
   37177:	e9 0f fe ff ff       	jmp    36f8b <_svfiprintf_r+0x3db>
   3717c:	8b 45 14             	mov    0x14(%ebp),%eax
   3717f:	8d 5d 80             	lea    -0x80(%ebp),%ebx
   37182:	89 55 10             	mov    %edx,0x10(%ebp)
   37185:	c6 85 71 ff ff ff 00 	movb   $0x0,-0x8f(%ebp)
   3718c:	c7 85 60 ff ff ff 01 	movl   $0x1,-0xa0(%ebp)
   37193:	00 00 00 
   37196:	8b 00                	mov    (%eax),%eax
   37198:	c7 85 58 ff ff ff 01 	movl   $0x1,-0xa8(%ebp)
   3719f:	00 00 00 
   371a2:	88 45 80             	mov    %al,-0x80(%ebp)
   371a5:	8b 45 14             	mov    0x14(%ebp),%eax
   371a8:	83 c0 04             	add    $0x4,%eax
   371ab:	89 45 14             	mov    %eax,0x14(%ebp)
   371ae:	c7 85 5c ff ff ff 00 	movl   $0x0,-0xa4(%ebp)
   371b5:	00 00 00 
   371b8:	e9 05 fc ff ff       	jmp    36dc2 <_svfiprintf_r+0x212>
   371bd:	89 fb                	mov    %edi,%ebx
   371bf:	89 55 10             	mov    %edx,0x10(%ebp)
   371c2:	88 9d 71 ff ff ff    	mov    %bl,-0x8f(%ebp)
   371c8:	c7 85 44 ff ff ff 52 	movl   $0x38e52,-0xbc(%ebp)
   371cf:	8e 03 00 
   371d2:	e9 33 ff ff ff       	jmp    3710a <_svfiprintf_r+0x55a>
   371d7:	83 8d 64 ff ff ff 10 	orl    $0x10,-0x9c(%ebp)
   371de:	f6 85 64 ff ff ff 10 	testb  $0x10,-0x9c(%ebp)
   371e5:	89 55 10             	mov    %edx,0x10(%ebp)
   371e8:	8b 45 14             	mov    0x14(%ebp),%eax
   371eb:	75 39                	jne    37226 <_svfiprintf_r+0x676>
   371ed:	f6 85 64 ff ff ff 40 	testb  $0x40,-0x9c(%ebp)
   371f4:	74 30                	je     37226 <_svfiprintf_r+0x676>
   371f6:	0f b7 08             	movzwl (%eax),%ecx
   371f9:	83 c0 04             	add    $0x4,%eax
   371fc:	ba 01 00 00 00       	mov    $0x1,%edx
   37201:	89 45 14             	mov    %eax,0x14(%ebp)
   37204:	e9 27 fb ff ff       	jmp    36d30 <_svfiprintf_r+0x180>
   37209:	83 8d 64 ff ff ff 01 	orl    $0x1,-0x9c(%ebp)
   37210:	89 d0                	mov    %edx,%eax
   37212:	e9 8f fa ff ff       	jmp    36ca6 <_svfiprintf_r+0xf6>
   37217:	f6 85 64 ff ff ff 10 	testb  $0x10,-0x9c(%ebp)
   3721e:	89 55 10             	mov    %edx,0x10(%ebp)
   37221:	8b 45 14             	mov    0x14(%ebp),%eax
   37224:	74 c7                	je     371ed <_svfiprintf_r+0x63d>
   37226:	8b 08                	mov    (%eax),%ecx
   37228:	83 c0 04             	add    $0x4,%eax
   3722b:	ba 01 00 00 00       	mov    $0x1,%edx
   37230:	89 45 14             	mov    %eax,0x14(%ebp)
   37233:	e9 f8 fa ff ff       	jmp    36d30 <_svfiprintf_r+0x180>
   37238:	8b 45 14             	mov    0x14(%ebp),%eax
   3723b:	89 55 10             	mov    %edx,0x10(%ebp)
   3723e:	c6 85 71 ff ff ff 00 	movb   $0x0,-0x8f(%ebp)
   37245:	8b 18                	mov    (%eax),%ebx
   37247:	8d 50 04             	lea    0x4(%eax),%edx
   3724a:	85 db                	test   %ebx,%ebx
   3724c:	0f 84 cc 06 00 00    	je     3791e <_svfiprintf_r+0xd6e>
   37252:	8b bd 5c ff ff ff    	mov    -0xa4(%ebp),%edi
   37258:	89 95 60 ff ff ff    	mov    %edx,-0xa0(%ebp)
   3725e:	85 ff                	test   %edi,%edi
   37260:	0f 88 59 06 00 00    	js     378bf <_svfiprintf_r+0xd0f>
   37266:	89 7c 24 08          	mov    %edi,0x8(%esp)
   3726a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   37271:	00 
   37272:	89 1c 24             	mov    %ebx,(%esp)
   37275:	e8 06 e7 ff ff       	call   35980 <memchr>
   3727a:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
   37280:	85 c0                	test   %eax,%eax
   37282:	0f 84 c5 06 00 00    	je     3794d <_svfiprintf_r+0xd9d>
   37288:	29 d8                	sub    %ebx,%eax
   3728a:	39 f8                	cmp    %edi,%eax
   3728c:	0f 4f c7             	cmovg  %edi,%eax
   3728f:	0f b6 bd 71 ff ff ff 	movzbl -0x8f(%ebp),%edi
   37296:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   3729c:	89 55 14             	mov    %edx,0x14(%ebp)
   3729f:	c7 85 5c ff ff ff 00 	movl   $0x0,-0xa4(%ebp)
   372a6:	00 00 00 
   372a9:	e9 f2 fa ff ff       	jmp    36da0 <_svfiprintf_r+0x1f0>
   372ae:	89 f8                	mov    %edi,%eax
   372b0:	84 c0                	test   %al,%al
   372b2:	b8 20 00 00 00       	mov    $0x20,%eax
   372b7:	0f 44 f8             	cmove  %eax,%edi
   372ba:	89 d0                	mov    %edx,%eax
   372bc:	e9 e5 f9 ff ff       	jmp    36ca6 <_svfiprintf_r+0xf6>
   372c1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   372c8:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   372ce:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   372d4:	80 bd 71 ff ff ff 00 	cmpb   $0x0,-0x8f(%ebp)
   372db:	74 2e                	je     3730b <_svfiprintf_r+0x75b>
   372dd:	83 c0 01             	add    $0x1,%eax
   372e0:	83 c2 01             	add    $0x1,%edx
   372e3:	8d 8d 71 ff ff ff    	lea    -0x8f(%ebp),%ecx
   372e9:	83 c6 08             	add    $0x8,%esi
   372ec:	89 4e f8             	mov    %ecx,-0x8(%esi)
   372ef:	c7 46 fc 01 00 00 00 	movl   $0x1,-0x4(%esi)
   372f6:	83 f8 07             	cmp    $0x7,%eax
   372f9:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   372ff:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   37305:	0f 8f b5 04 00 00    	jg     377c0 <_svfiprintf_r+0xc10>
   3730b:	8b 8d 4c ff ff ff    	mov    -0xb4(%ebp),%ecx
   37311:	85 c9                	test   %ecx,%ecx
   37313:	74 2e                	je     37343 <_svfiprintf_r+0x793>
   37315:	83 c0 01             	add    $0x1,%eax
   37318:	83 c2 02             	add    $0x2,%edx
   3731b:	8d 8d 72 ff ff ff    	lea    -0x8e(%ebp),%ecx
   37321:	83 c6 08             	add    $0x8,%esi
   37324:	89 4e f8             	mov    %ecx,-0x8(%esi)
   37327:	c7 46 fc 02 00 00 00 	movl   $0x2,-0x4(%esi)
   3732e:	83 f8 07             	cmp    $0x7,%eax
   37331:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   37337:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3733d:	0f 8f 45 04 00 00    	jg     37788 <_svfiprintf_r+0xbd8>
   37343:	81 bd 48 ff ff ff 80 	cmpl   $0x80,-0xb8(%ebp)
   3734a:	00 00 00 
   3734d:	0f 84 9d 02 00 00    	je     375f0 <_svfiprintf_r+0xa40>
   37353:	8b bd 5c ff ff ff    	mov    -0xa4(%ebp),%edi
   37359:	2b bd 58 ff ff ff    	sub    -0xa8(%ebp),%edi
   3735f:	85 ff                	test   %edi,%edi
   37361:	0f 8e e1 00 00 00    	jle    37448 <_svfiprintf_r+0x898>
   37367:	83 ff 10             	cmp    $0x10,%edi
   3736a:	0f 8e 7c 00 00 00    	jle    373ec <_svfiprintf_r+0x83c>
   37370:	89 9d 5c ff ff ff    	mov    %ebx,-0xa4(%ebp)
   37376:	89 f1                	mov    %esi,%ecx
   37378:	8b 5d 08             	mov    0x8(%ebp),%ebx
   3737b:	8b 75 0c             	mov    0xc(%ebp),%esi
   3737e:	eb 08                	jmp    37388 <_svfiprintf_r+0x7d8>
   37380:	83 ef 10             	sub    $0x10,%edi
   37383:	83 ff 10             	cmp    $0x10,%edi
   37386:	7e 5c                	jle    373e4 <_svfiprintf_r+0x834>
   37388:	83 c0 01             	add    $0x1,%eax
   3738b:	83 c2 10             	add    $0x10,%edx
   3738e:	c7 01 2c 93 03 00    	movl   $0x3932c,(%ecx)
   37394:	83 c1 08             	add    $0x8,%ecx
   37397:	c7 41 fc 10 00 00 00 	movl   $0x10,-0x4(%ecx)
   3739e:	83 f8 07             	cmp    $0x7,%eax
   373a1:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   373a7:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   373ad:	7e d1                	jle    37380 <_svfiprintf_r+0x7d0>
   373af:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   373b5:	89 44 24 08          	mov    %eax,0x8(%esp)
   373b9:	89 74 24 04          	mov    %esi,0x4(%esp)
   373bd:	89 1c 24             	mov    %ebx,(%esp)
   373c0:	e8 fb f5 ff ff       	call   369c0 <__ssprint_r>
   373c5:	85 c0                	test   %eax,%eax
   373c7:	0f 85 eb 01 00 00    	jne    375b8 <_svfiprintf_r+0xa08>
   373cd:	83 ef 10             	sub    $0x10,%edi
   373d0:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   373d6:	83 ff 10             	cmp    $0x10,%edi
   373d9:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   373df:	8d 4d a8             	lea    -0x58(%ebp),%ecx
   373e2:	7f a4                	jg     37388 <_svfiprintf_r+0x7d8>
   373e4:	8b 9d 5c ff ff ff    	mov    -0xa4(%ebp),%ebx
   373ea:	89 ce                	mov    %ecx,%esi
   373ec:	83 c0 01             	add    $0x1,%eax
   373ef:	01 fa                	add    %edi,%edx
   373f1:	c7 06 2c 93 03 00    	movl   $0x3932c,(%esi)
   373f7:	83 c6 08             	add    $0x8,%esi
   373fa:	89 7e fc             	mov    %edi,-0x4(%esi)
   373fd:	83 f8 07             	cmp    $0x7,%eax
   37400:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   37406:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3740c:	7e 3a                	jle    37448 <_svfiprintf_r+0x898>
   3740e:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   37414:	89 44 24 08          	mov    %eax,0x8(%esp)
   37418:	8b 45 0c             	mov    0xc(%ebp),%eax
   3741b:	89 44 24 04          	mov    %eax,0x4(%esp)
   3741f:	8b 45 08             	mov    0x8(%ebp),%eax
   37422:	89 04 24             	mov    %eax,(%esp)
   37425:	e8 96 f5 ff ff       	call   369c0 <__ssprint_r>
   3742a:	85 c0                	test   %eax,%eax
   3742c:	0f 85 86 01 00 00    	jne    375b8 <_svfiprintf_r+0xa08>
   37432:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   37438:	8d 75 a8             	lea    -0x58(%ebp),%esi
   3743b:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   37441:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   37448:	89 1e                	mov    %ebx,(%esi)
   3744a:	8b 9d 58 ff ff ff    	mov    -0xa8(%ebp),%ebx
   37450:	83 c0 01             	add    $0x1,%eax
   37453:	83 c6 08             	add    $0x8,%esi
   37456:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3745c:	89 5e fc             	mov    %ebx,-0x4(%esi)
   3745f:	01 da                	add    %ebx,%edx
   37461:	83 f8 07             	cmp    $0x7,%eax
   37464:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   3746a:	0f 8f 80 02 00 00    	jg     376f0 <_svfiprintf_r+0xb40>
   37470:	f6 85 64 ff ff ff 04 	testb  $0x4,-0x9c(%ebp)
   37477:	0f 84 b9 00 00 00    	je     37536 <_svfiprintf_r+0x986>
   3747d:	8b bd 54 ff ff ff    	mov    -0xac(%ebp),%edi
   37483:	2b bd 60 ff ff ff    	sub    -0xa0(%ebp),%edi
   37489:	85 ff                	test   %edi,%edi
   3748b:	0f 8e a5 00 00 00    	jle    37536 <_svfiprintf_r+0x986>
   37491:	83 ff 10             	cmp    $0x10,%edi
   37494:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3749a:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   374a0:	7e 71                	jle    37513 <_svfiprintf_r+0x963>
   374a2:	89 f1                	mov    %esi,%ecx
   374a4:	8b 75 08             	mov    0x8(%ebp),%esi
   374a7:	eb 0f                	jmp    374b8 <_svfiprintf_r+0x908>
   374a9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   374b0:	83 ef 10             	sub    $0x10,%edi
   374b3:	83 ff 10             	cmp    $0x10,%edi
   374b6:	7e 59                	jle    37511 <_svfiprintf_r+0x961>
   374b8:	83 c0 01             	add    $0x1,%eax
   374bb:	83 c2 10             	add    $0x10,%edx
   374be:	c7 01 3c 93 03 00    	movl   $0x3933c,(%ecx)
   374c4:	83 c1 08             	add    $0x8,%ecx
   374c7:	c7 41 fc 10 00 00 00 	movl   $0x10,-0x4(%ecx)
   374ce:	83 f8 07             	cmp    $0x7,%eax
   374d1:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   374d7:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   374dd:	7e d1                	jle    374b0 <_svfiprintf_r+0x900>
   374df:	8b 45 0c             	mov    0xc(%ebp),%eax
   374e2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   374e6:	89 34 24             	mov    %esi,(%esp)
   374e9:	89 44 24 04          	mov    %eax,0x4(%esp)
   374ed:	e8 ce f4 ff ff       	call   369c0 <__ssprint_r>
   374f2:	85 c0                	test   %eax,%eax
   374f4:	0f 85 be 00 00 00    	jne    375b8 <_svfiprintf_r+0xa08>
   374fa:	83 ef 10             	sub    $0x10,%edi
   374fd:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   37503:	83 ff 10             	cmp    $0x10,%edi
   37506:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3750c:	8d 4d a8             	lea    -0x58(%ebp),%ecx
   3750f:	7f a7                	jg     374b8 <_svfiprintf_r+0x908>
   37511:	89 ce                	mov    %ecx,%esi
   37513:	83 c0 01             	add    $0x1,%eax
   37516:	01 fa                	add    %edi,%edx
   37518:	83 f8 07             	cmp    $0x7,%eax
   3751b:	c7 06 3c 93 03 00    	movl   $0x3933c,(%esi)
   37521:	89 7e 04             	mov    %edi,0x4(%esi)
   37524:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   3752a:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   37530:	0f 8f ee 02 00 00    	jg     37824 <_svfiprintf_r+0xc74>
   37536:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
   3753c:	8b b5 60 ff ff ff    	mov    -0xa0(%ebp),%esi
   37542:	39 c6                	cmp    %eax,%esi
   37544:	0f 4d c6             	cmovge %esi,%eax
   37547:	01 85 50 ff ff ff    	add    %eax,-0xb0(%ebp)
   3754d:	85 d2                	test   %edx,%edx
   3754f:	0f 85 d3 01 00 00    	jne    37728 <_svfiprintf_r+0xb78>
   37555:	c7 85 78 ff ff ff 00 	movl   $0x0,-0x88(%ebp)
   3755c:	00 00 00 
   3755f:	8d 75 a8             	lea    -0x58(%ebp),%esi
   37562:	e9 a7 f6 ff ff       	jmp    36c0e <_svfiprintf_r+0x5e>
   37567:	90                   	nop
   37568:	84 d2                	test   %dl,%dl
   3756a:	75 6c                	jne    375d8 <_svfiprintf_r+0xa28>
   3756c:	f6 85 64 ff ff ff 01 	testb  $0x1,-0x9c(%ebp)
   37573:	74 63                	je     375d8 <_svfiprintf_r+0xa28>
   37575:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
   3757b:	8d 5d a7             	lea    -0x59(%ebp),%ebx
   3757e:	c6 45 a7 30          	movb   $0x30,-0x59(%ebp)
   37582:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   37588:	e9 13 f8 ff ff       	jmp    36da0 <_svfiprintf_r+0x1f0>
   3758d:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
   37593:	85 c0                	test   %eax,%eax
   37595:	74 21                	je     375b8 <_svfiprintf_r+0xa08>
   37597:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3759d:	89 44 24 08          	mov    %eax,0x8(%esp)
   375a1:	8b 45 0c             	mov    0xc(%ebp),%eax
   375a4:	89 44 24 04          	mov    %eax,0x4(%esp)
   375a8:	8b 45 08             	mov    0x8(%ebp),%eax
   375ab:	89 04 24             	mov    %eax,(%esp)
   375ae:	e8 0d f4 ff ff       	call   369c0 <__ssprint_r>
   375b3:	90                   	nop
   375b4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   375b8:	8b 75 0c             	mov    0xc(%ebp),%esi
   375bb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
   375c0:	f6 46 0c 40          	testb  $0x40,0xc(%esi)
   375c4:	0f 44 85 50 ff ff ff 	cmove  -0xb0(%ebp),%eax
   375cb:	81 c4 cc 00 00 00    	add    $0xcc,%esp
   375d1:	5b                   	pop    %ebx
   375d2:	5e                   	pop    %esi
   375d3:	5f                   	pop    %edi
   375d4:	5d                   	pop    %ebp
   375d5:	c3                   	ret    
   375d6:	66 90                	xchg   %ax,%ax
   375d8:	c7 85 58 ff ff ff 00 	movl   $0x0,-0xa8(%ebp)
   375df:	00 00 00 
   375e2:	8d 5d a8             	lea    -0x58(%ebp),%ebx
   375e5:	e9 b6 f7 ff ff       	jmp    36da0 <_svfiprintf_r+0x1f0>
   375ea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   375f0:	8b bd 54 ff ff ff    	mov    -0xac(%ebp),%edi
   375f6:	2b bd 60 ff ff ff    	sub    -0xa0(%ebp),%edi
   375fc:	85 ff                	test   %edi,%edi
   375fe:	0f 8e 4f fd ff ff    	jle    37353 <_svfiprintf_r+0x7a3>
   37604:	83 ff 10             	cmp    $0x10,%edi
   37607:	0f 8e 7f 00 00 00    	jle    3768c <_svfiprintf_r+0xadc>
   3760d:	89 9d 4c ff ff ff    	mov    %ebx,-0xb4(%ebp)
   37613:	89 f1                	mov    %esi,%ecx
   37615:	8b 5d 08             	mov    0x8(%ebp),%ebx
   37618:	8b 75 0c             	mov    0xc(%ebp),%esi
   3761b:	eb 0b                	jmp    37628 <_svfiprintf_r+0xa78>
   3761d:	8d 76 00             	lea    0x0(%esi),%esi
   37620:	83 ef 10             	sub    $0x10,%edi
   37623:	83 ff 10             	cmp    $0x10,%edi
   37626:	7e 5c                	jle    37684 <_svfiprintf_r+0xad4>
   37628:	83 c0 01             	add    $0x1,%eax
   3762b:	83 c2 10             	add    $0x10,%edx
   3762e:	c7 01 2c 93 03 00    	movl   $0x3932c,(%ecx)
   37634:	83 c1 08             	add    $0x8,%ecx
   37637:	c7 41 fc 10 00 00 00 	movl   $0x10,-0x4(%ecx)
   3763e:	83 f8 07             	cmp    $0x7,%eax
   37641:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   37647:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3764d:	7e d1                	jle    37620 <_svfiprintf_r+0xa70>
   3764f:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   37655:	89 44 24 08          	mov    %eax,0x8(%esp)
   37659:	89 74 24 04          	mov    %esi,0x4(%esp)
   3765d:	89 1c 24             	mov    %ebx,(%esp)
   37660:	e8 5b f3 ff ff       	call   369c0 <__ssprint_r>
   37665:	85 c0                	test   %eax,%eax
   37667:	0f 85 4b ff ff ff    	jne    375b8 <_svfiprintf_r+0xa08>
   3766d:	83 ef 10             	sub    $0x10,%edi
   37670:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   37676:	83 ff 10             	cmp    $0x10,%edi
   37679:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3767f:	8d 4d a8             	lea    -0x58(%ebp),%ecx
   37682:	7f a4                	jg     37628 <_svfiprintf_r+0xa78>
   37684:	8b 9d 4c ff ff ff    	mov    -0xb4(%ebp),%ebx
   3768a:	89 ce                	mov    %ecx,%esi
   3768c:	83 c0 01             	add    $0x1,%eax
   3768f:	01 fa                	add    %edi,%edx
   37691:	c7 06 2c 93 03 00    	movl   $0x3932c,(%esi)
   37697:	83 c6 08             	add    $0x8,%esi
   3769a:	89 7e fc             	mov    %edi,-0x4(%esi)
   3769d:	83 f8 07             	cmp    $0x7,%eax
   376a0:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   376a6:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   376ac:	0f 8e a1 fc ff ff    	jle    37353 <_svfiprintf_r+0x7a3>
   376b2:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   376b8:	89 44 24 08          	mov    %eax,0x8(%esp)
   376bc:	8b 45 0c             	mov    0xc(%ebp),%eax
   376bf:	89 44 24 04          	mov    %eax,0x4(%esp)
   376c3:	8b 45 08             	mov    0x8(%ebp),%eax
   376c6:	89 04 24             	mov    %eax,(%esp)
   376c9:	e8 f2 f2 ff ff       	call   369c0 <__ssprint_r>
   376ce:	85 c0                	test   %eax,%eax
   376d0:	0f 85 e2 fe ff ff    	jne    375b8 <_svfiprintf_r+0xa08>
   376d6:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   376dc:	8d 75 a8             	lea    -0x58(%ebp),%esi
   376df:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   376e5:	e9 69 fc ff ff       	jmp    37353 <_svfiprintf_r+0x7a3>
   376ea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   376f0:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   376f6:	89 44 24 08          	mov    %eax,0x8(%esp)
   376fa:	8b 45 0c             	mov    0xc(%ebp),%eax
   376fd:	89 44 24 04          	mov    %eax,0x4(%esp)
   37701:	8b 45 08             	mov    0x8(%ebp),%eax
   37704:	89 04 24             	mov    %eax,(%esp)
   37707:	e8 b4 f2 ff ff       	call   369c0 <__ssprint_r>
   3770c:	85 c0                	test   %eax,%eax
   3770e:	0f 85 a4 fe ff ff    	jne    375b8 <_svfiprintf_r+0xa08>
   37714:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   3771a:	8d 75 a8             	lea    -0x58(%ebp),%esi
   3771d:	e9 4e fd ff ff       	jmp    37470 <_svfiprintf_r+0x8c0>
   37722:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   37728:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3772e:	89 44 24 08          	mov    %eax,0x8(%esp)
   37732:	8b 45 0c             	mov    0xc(%ebp),%eax
   37735:	89 44 24 04          	mov    %eax,0x4(%esp)
   37739:	8b 45 08             	mov    0x8(%ebp),%eax
   3773c:	89 04 24             	mov    %eax,(%esp)
   3773f:	e8 7c f2 ff ff       	call   369c0 <__ssprint_r>
   37744:	85 c0                	test   %eax,%eax
   37746:	0f 84 09 fe ff ff    	je     37555 <_svfiprintf_r+0x9a5>
   3774c:	e9 67 fe ff ff       	jmp    375b8 <_svfiprintf_r+0xa08>
   37751:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   37758:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3775e:	89 44 24 08          	mov    %eax,0x8(%esp)
   37762:	8b 45 0c             	mov    0xc(%ebp),%eax
   37765:	89 44 24 04          	mov    %eax,0x4(%esp)
   37769:	8b 45 08             	mov    0x8(%ebp),%eax
   3776c:	89 04 24             	mov    %eax,(%esp)
   3776f:	e8 4c f2 ff ff       	call   369c0 <__ssprint_r>
   37774:	85 c0                	test   %eax,%eax
   37776:	0f 85 3c fe ff ff    	jne    375b8 <_svfiprintf_r+0xa08>
   3777c:	8d 75 a8             	lea    -0x58(%ebp),%esi
   3777f:	e9 e9 f4 ff ff       	jmp    36c6d <_svfiprintf_r+0xbd>
   37784:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   37788:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3778e:	89 44 24 08          	mov    %eax,0x8(%esp)
   37792:	8b 45 0c             	mov    0xc(%ebp),%eax
   37795:	89 44 24 04          	mov    %eax,0x4(%esp)
   37799:	8b 45 08             	mov    0x8(%ebp),%eax
   3779c:	89 04 24             	mov    %eax,(%esp)
   3779f:	e8 1c f2 ff ff       	call   369c0 <__ssprint_r>
   377a4:	85 c0                	test   %eax,%eax
   377a6:	0f 85 0c fe ff ff    	jne    375b8 <_svfiprintf_r+0xa08>
   377ac:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   377b2:	8d 75 a8             	lea    -0x58(%ebp),%esi
   377b5:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   377bb:	e9 83 fb ff ff       	jmp    37343 <_svfiprintf_r+0x793>
   377c0:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   377c6:	89 44 24 08          	mov    %eax,0x8(%esp)
   377ca:	8b 45 0c             	mov    0xc(%ebp),%eax
   377cd:	89 44 24 04          	mov    %eax,0x4(%esp)
   377d1:	8b 45 08             	mov    0x8(%ebp),%eax
   377d4:	89 04 24             	mov    %eax,(%esp)
   377d7:	e8 e4 f1 ff ff       	call   369c0 <__ssprint_r>
   377dc:	85 c0                	test   %eax,%eax
   377de:	0f 85 d4 fd ff ff    	jne    375b8 <_svfiprintf_r+0xa08>
   377e4:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   377ea:	8d 75 a8             	lea    -0x58(%ebp),%esi
   377ed:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   377f3:	e9 13 fb ff ff       	jmp    3730b <_svfiprintf_r+0x75b>
   377f8:	83 f9 09             	cmp    $0x9,%ecx
   377fb:	76 56                	jbe    37853 <_svfiprintf_r+0xca3>
   377fd:	8d 5d a8             	lea    -0x58(%ebp),%ebx
   37800:	b8 cd cc cc cc       	mov    $0xcccccccd,%eax
   37805:	83 eb 01             	sub    $0x1,%ebx
   37808:	f7 e1                	mul    %ecx
   3780a:	c1 ea 03             	shr    $0x3,%edx
   3780d:	8d 04 92             	lea    (%edx,%edx,4),%eax
   37810:	01 c0                	add    %eax,%eax
   37812:	29 c1                	sub    %eax,%ecx
   37814:	83 c1 30             	add    $0x30,%ecx
   37817:	85 d2                	test   %edx,%edx
   37819:	88 0b                	mov    %cl,(%ebx)
   3781b:	89 d1                	mov    %edx,%ecx
   3781d:	75 e1                	jne    37800 <_svfiprintf_r+0xc50>
   3781f:	e9 71 f5 ff ff       	jmp    36d95 <_svfiprintf_r+0x1e5>
   37824:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3782a:	89 44 24 08          	mov    %eax,0x8(%esp)
   3782e:	8b 45 0c             	mov    0xc(%ebp),%eax
   37831:	89 44 24 04          	mov    %eax,0x4(%esp)
   37835:	8b 45 08             	mov    0x8(%ebp),%eax
   37838:	89 04 24             	mov    %eax,(%esp)
   3783b:	e8 80 f1 ff ff       	call   369c0 <__ssprint_r>
   37840:	85 c0                	test   %eax,%eax
   37842:	0f 85 70 fd ff ff    	jne    375b8 <_svfiprintf_r+0xa08>
   37848:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   3784e:	e9 e3 fc ff ff       	jmp    37536 <_svfiprintf_r+0x986>
   37853:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
   37859:	83 c1 30             	add    $0x30,%ecx
   3785c:	88 4d a7             	mov    %cl,-0x59(%ebp)
   3785f:	8d 5d a7             	lea    -0x59(%ebp),%ebx
   37862:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   37868:	e9 33 f5 ff ff       	jmp    36da0 <_svfiprintf_r+0x1f0>
   3786d:	8b 45 14             	mov    0x14(%ebp),%eax
   37870:	8b 9d 50 ff ff ff    	mov    -0xb0(%ebp),%ebx
   37876:	8b 00                	mov    (%eax),%eax
   37878:	89 18                	mov    %ebx,(%eax)
   3787a:	8b 45 14             	mov    0x14(%ebp),%eax
   3787d:	83 c0 04             	add    $0x4,%eax
   37880:	89 45 14             	mov    %eax,0x14(%ebp)
   37883:	e9 86 f3 ff ff       	jmp    36c0e <_svfiprintf_r+0x5e>
   37888:	0f b7 0b             	movzwl (%ebx),%ecx
   3788b:	83 c3 04             	add    $0x4,%ebx
   3788e:	89 5d 14             	mov    %ebx,0x14(%ebp)
   37891:	e9 95 f8 ff ff       	jmp    3712b <_svfiprintf_r+0x57b>
   37896:	0f bf 08             	movswl (%eax),%ecx
   37899:	83 c0 04             	add    $0x4,%eax
   3789c:	89 45 14             	mov    %eax,0x14(%ebp)
   3789f:	85 c9                	test   %ecx,%ecx
   378a1:	0f 89 0d f7 ff ff    	jns    36fb4 <_svfiprintf_r+0x404>
   378a7:	f7 d9                	neg    %ecx
   378a9:	bf 2d 00 00 00       	mov    $0x2d,%edi
   378ae:	c6 85 71 ff ff ff 2d 	movb   $0x2d,-0x8f(%ebp)
   378b5:	ba 01 00 00 00       	mov    $0x1,%edx
   378ba:	e9 7a f4 ff ff       	jmp    36d39 <_svfiprintf_r+0x189>
   378bf:	89 1c 24             	mov    %ebx,(%esp)
   378c2:	e8 79 f0 ff ff       	call   36940 <strlen>
   378c7:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
   378cd:	0f b6 bd 71 ff ff ff 	movzbl -0x8f(%ebp),%edi
   378d4:	c7 85 5c ff ff ff 00 	movl   $0x0,-0xa4(%ebp)
   378db:	00 00 00 
   378de:	89 55 14             	mov    %edx,0x14(%ebp)
   378e1:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   378e7:	e9 b4 f4 ff ff       	jmp    36da0 <_svfiprintf_r+0x1f0>
   378ec:	8b 45 08             	mov    0x8(%ebp),%eax
   378ef:	c7 44 24 04 40 00 00 	movl   $0x40,0x4(%esp)
   378f6:	00 
   378f7:	89 04 24             	mov    %eax,(%esp)
   378fa:	e8 41 d9 ff ff       	call   35240 <_malloc_r>
   378ff:	8b 75 0c             	mov    0xc(%ebp),%esi
   37902:	85 c0                	test   %eax,%eax
   37904:	89 06                	mov    %eax,(%esi)
   37906:	89 46 10             	mov    %eax,0x10(%esi)
   37909:	0f 84 a3 00 00 00    	je     379b2 <_svfiprintf_r+0xe02>
   3790f:	8b 45 0c             	mov    0xc(%ebp),%eax
   37912:	c7 40 14 40 00 00 00 	movl   $0x40,0x14(%eax)
   37919:	e9 b2 f2 ff ff       	jmp    36bd0 <_svfiprintf_r+0x20>
   3791e:	8b bd 5c ff ff ff    	mov    -0xa4(%ebp),%edi
   37924:	b8 06 00 00 00       	mov    $0x6,%eax
   37929:	89 55 14             	mov    %edx,0x14(%ebp)
   3792c:	83 ff 06             	cmp    $0x6,%edi
   3792f:	0f 46 c7             	cmovbe %edi,%eax
   37932:	85 c0                	test   %eax,%eax
   37934:	0f 49 d8             	cmovns %eax,%ebx
   37937:	89 9d 60 ff ff ff    	mov    %ebx,-0xa0(%ebp)
   3793d:	bb 74 8e 03 00       	mov    $0x38e74,%ebx
   37942:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   37948:	e9 61 f8 ff ff       	jmp    371ae <_svfiprintf_r+0x5fe>
   3794d:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
   37953:	0f b6 bd 71 ff ff ff 	movzbl -0x8f(%ebp),%edi
   3795a:	89 55 14             	mov    %edx,0x14(%ebp)
   3795d:	c7 85 5c ff ff ff 00 	movl   $0x0,-0xa4(%ebp)
   37964:	00 00 00 
   37967:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   3796d:	e9 2e f4 ff ff       	jmp    36da0 <_svfiprintf_r+0x1f0>
   37972:	89 da                	mov    %ebx,%edx
   37974:	c7 85 5c ff ff ff 00 	movl   $0x0,-0xa4(%ebp)
   3797b:	00 00 00 
   3797e:	e9 29 f3 ff ff       	jmp    36cac <_svfiprintf_r+0xfc>
   37983:	8b 4d 14             	mov    0x14(%ebp),%ecx
   37986:	89 da                	mov    %ebx,%edx
   37988:	8b 45 14             	mov    0x14(%ebp),%eax
   3798b:	8b 09                	mov    (%ecx),%ecx
   3798d:	83 c0 04             	add    $0x4,%eax
   37990:	89 45 14             	mov    %eax,0x14(%ebp)
   37993:	85 c9                	test   %ecx,%ecx
   37995:	89 8d 5c ff ff ff    	mov    %ecx,-0xa4(%ebp)
   3799b:	0f 89 26 f3 ff ff    	jns    36cc7 <_svfiprintf_r+0x117>
   379a1:	c7 85 5c ff ff ff ff 	movl   $0xffffffff,-0xa4(%ebp)
   379a8:	ff ff ff 
   379ab:	89 d0                	mov    %edx,%eax
   379ad:	e9 f4 f2 ff ff       	jmp    36ca6 <_svfiprintf_r+0xf6>
   379b2:	8b 45 08             	mov    0x8(%ebp),%eax
   379b5:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
   379bb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
   379c0:	e9 06 fc ff ff       	jmp    375cb <_svfiprintf_r+0xa1b>
   379c5:	66 90                	xchg   %ax,%ax
   379c7:	66 90                	xchg   %ax,%ax
   379c9:	66 90                	xchg   %ax,%ax
   379cb:	66 90                	xchg   %ax,%ax
   379cd:	66 90                	xchg   %ax,%ax
   379cf:	90                   	nop

000379d0 <_calloc_r>:
   379d0:	55                   	push   %ebp
   379d1:	89 e5                	mov    %esp,%ebp
   379d3:	53                   	push   %ebx
   379d4:	83 ec 14             	sub    $0x14,%esp
   379d7:	8b 45 10             	mov    0x10(%ebp),%eax
   379da:	0f af 45 0c          	imul   0xc(%ebp),%eax
   379de:	89 44 24 04          	mov    %eax,0x4(%esp)
   379e2:	8b 45 08             	mov    0x8(%ebp),%eax
   379e5:	89 04 24             	mov    %eax,(%esp)
   379e8:	e8 53 d8 ff ff       	call   35240 <_malloc_r>
   379ed:	85 c0                	test   %eax,%eax
   379ef:	89 c3                	mov    %eax,%ebx
   379f1:	0f 84 91 00 00 00    	je     37a88 <_calloc_r+0xb8>
   379f7:	8b 40 fc             	mov    -0x4(%eax),%eax
   379fa:	83 e0 fc             	and    $0xfffffffc,%eax
   379fd:	83 e8 04             	sub    $0x4,%eax
   37a00:	83 f8 24             	cmp    $0x24,%eax
   37a03:	77 63                	ja     37a68 <_calloc_r+0x98>
   37a05:	83 f8 13             	cmp    $0x13,%eax
   37a08:	89 da                	mov    %ebx,%edx
   37a0a:	77 1c                	ja     37a28 <_calloc_r+0x58>
   37a0c:	c7 02 00 00 00 00    	movl   $0x0,(%edx)
   37a12:	89 d8                	mov    %ebx,%eax
   37a14:	c7 42 04 00 00 00 00 	movl   $0x0,0x4(%edx)
   37a1b:	c7 42 08 00 00 00 00 	movl   $0x0,0x8(%edx)
   37a22:	83 c4 14             	add    $0x14,%esp
   37a25:	5b                   	pop    %ebx
   37a26:	5d                   	pop    %ebp
   37a27:	c3                   	ret    
   37a28:	83 f8 1b             	cmp    $0x1b,%eax
   37a2b:	c7 03 00 00 00 00    	movl   $0x0,(%ebx)
   37a31:	8d 53 08             	lea    0x8(%ebx),%edx
   37a34:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
   37a3b:	76 cf                	jbe    37a0c <_calloc_r+0x3c>
   37a3d:	83 f8 24             	cmp    $0x24,%eax
   37a40:	c7 43 08 00 00 00 00 	movl   $0x0,0x8(%ebx)
   37a47:	8d 53 10             	lea    0x10(%ebx),%edx
   37a4a:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
   37a51:	75 b9                	jne    37a0c <_calloc_r+0x3c>
   37a53:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
   37a5a:	8d 53 18             	lea    0x18(%ebx),%edx
   37a5d:	c7 43 14 00 00 00 00 	movl   $0x0,0x14(%ebx)
   37a64:	eb a6                	jmp    37a0c <_calloc_r+0x3c>
   37a66:	66 90                	xchg   %ax,%ax
   37a68:	89 1c 24             	mov    %ebx,(%esp)
   37a6b:	89 44 24 08          	mov    %eax,0x8(%esp)
   37a6f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   37a76:	00 
   37a77:	e8 50 a2 ff ff       	call   31ccc <memset>
   37a7c:	83 c4 14             	add    $0x14,%esp
   37a7f:	89 d8                	mov    %ebx,%eax
   37a81:	5b                   	pop    %ebx
   37a82:	5d                   	pop    %ebp
   37a83:	c3                   	ret    
   37a84:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   37a88:	31 c0                	xor    %eax,%eax
   37a8a:	eb 96                	jmp    37a22 <_calloc_r+0x52>
   37a8c:	66 90                	xchg   %ax,%ax
   37a8e:	66 90                	xchg   %ax,%ax

00037a90 <_malloc_trim_r>:
   37a90:	55                   	push   %ebp
   37a91:	89 e5                	mov    %esp,%ebp
   37a93:	57                   	push   %edi
   37a94:	56                   	push   %esi
   37a95:	53                   	push   %ebx
   37a96:	83 ec 1c             	sub    $0x1c,%esp
   37a99:	8b 75 08             	mov    0x8(%ebp),%esi
   37a9c:	89 34 24             	mov    %esi,(%esp)
   37a9f:	e8 7c df ff ff       	call   35a20 <__malloc_lock>
   37aa4:	a1 48 c5 03 00       	mov    0x3c548,%eax
   37aa9:	8b 58 04             	mov    0x4(%eax),%ebx
   37aac:	83 e3 fc             	and    $0xfffffffc,%ebx
   37aaf:	89 d8                	mov    %ebx,%eax
   37ab1:	2b 45 0c             	sub    0xc(%ebp),%eax
   37ab4:	05 ef 0f 00 00       	add    $0xfef,%eax
   37ab9:	25 00 f0 ff ff       	and    $0xfffff000,%eax
   37abe:	8d b8 00 f0 ff ff    	lea    -0x1000(%eax),%edi
   37ac4:	81 ff ff 0f 00 00    	cmp    $0xfff,%edi
   37aca:	7e 1c                	jle    37ae8 <_malloc_trim_r+0x58>
   37acc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   37ad3:	00 
   37ad4:	89 34 24             	mov    %esi,(%esp)
   37ad7:	e8 44 ed ff ff       	call   36820 <_sbrk_r>
   37adc:	8b 15 48 c5 03 00    	mov    0x3c548,%edx
   37ae2:	01 da                	add    %ebx,%edx
   37ae4:	39 d0                	cmp    %edx,%eax
   37ae6:	74 18                	je     37b00 <_malloc_trim_r+0x70>
   37ae8:	89 34 24             	mov    %esi,(%esp)
   37aeb:	e8 40 df ff ff       	call   35a30 <__malloc_unlock>
   37af0:	83 c4 1c             	add    $0x1c,%esp
   37af3:	31 c0                	xor    %eax,%eax
   37af5:	5b                   	pop    %ebx
   37af6:	5e                   	pop    %esi
   37af7:	5f                   	pop    %edi
   37af8:	5d                   	pop    %ebp
   37af9:	c3                   	ret    
   37afa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   37b00:	89 f8                	mov    %edi,%eax
   37b02:	f7 d8                	neg    %eax
   37b04:	89 44 24 04          	mov    %eax,0x4(%esp)
   37b08:	89 34 24             	mov    %esi,(%esp)
   37b0b:	e8 10 ed ff ff       	call   36820 <_sbrk_r>
   37b10:	83 f8 ff             	cmp    $0xffffffff,%eax
   37b13:	74 2b                	je     37b40 <_malloc_trim_r+0xb0>
   37b15:	a1 48 c5 03 00       	mov    0x3c548,%eax
   37b1a:	29 fb                	sub    %edi,%ebx
   37b1c:	83 cb 01             	or     $0x1,%ebx
   37b1f:	29 3d 20 f0 06 00    	sub    %edi,0x6f020
   37b25:	89 58 04             	mov    %ebx,0x4(%eax)
   37b28:	89 34 24             	mov    %esi,(%esp)
   37b2b:	e8 00 df ff ff       	call   35a30 <__malloc_unlock>
   37b30:	83 c4 1c             	add    $0x1c,%esp
   37b33:	b8 01 00 00 00       	mov    $0x1,%eax
   37b38:	5b                   	pop    %ebx
   37b39:	5e                   	pop    %esi
   37b3a:	5f                   	pop    %edi
   37b3b:	5d                   	pop    %ebp
   37b3c:	c3                   	ret    
   37b3d:	8d 76 00             	lea    0x0(%esi),%esi
   37b40:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   37b47:	00 
   37b48:	89 34 24             	mov    %esi,(%esp)
   37b4b:	e8 d0 ec ff ff       	call   36820 <_sbrk_r>
   37b50:	8b 15 48 c5 03 00    	mov    0x3c548,%edx
   37b56:	89 c1                	mov    %eax,%ecx
   37b58:	29 d1                	sub    %edx,%ecx
   37b5a:	83 f9 0f             	cmp    $0xf,%ecx
   37b5d:	7e 89                	jle    37ae8 <_malloc_trim_r+0x58>
   37b5f:	2b 05 20 c5 03 00    	sub    0x3c520,%eax
   37b65:	83 c9 01             	or     $0x1,%ecx
   37b68:	89 4a 04             	mov    %ecx,0x4(%edx)
   37b6b:	a3 20 f0 06 00       	mov    %eax,0x6f020
   37b70:	e9 73 ff ff ff       	jmp    37ae8 <_malloc_trim_r+0x58>
   37b75:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   37b79:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00037b80 <_free_r>:
   37b80:	55                   	push   %ebp
   37b81:	89 e5                	mov    %esp,%ebp
   37b83:	57                   	push   %edi
   37b84:	56                   	push   %esi
   37b85:	53                   	push   %ebx
   37b86:	83 ec 1c             	sub    $0x1c,%esp
   37b89:	8b 75 0c             	mov    0xc(%ebp),%esi
   37b8c:	8b 45 08             	mov    0x8(%ebp),%eax
   37b8f:	85 f6                	test   %esi,%esi
   37b91:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   37b94:	0f 84 fe 00 00 00    	je     37c98 <_free_r+0x118>
   37b9a:	89 04 24             	mov    %eax,(%esp)
   37b9d:	e8 7e de ff ff       	call   35a20 <__malloc_lock>
   37ba2:	8b 7e fc             	mov    -0x4(%esi),%edi
   37ba5:	8d 56 f8             	lea    -0x8(%esi),%edx
   37ba8:	89 f8                	mov    %edi,%eax
   37baa:	83 e0 fe             	and    $0xfffffffe,%eax
   37bad:	8d 0c 02             	lea    (%edx,%eax,1),%ecx
   37bb0:	8b 59 04             	mov    0x4(%ecx),%ebx
   37bb3:	83 e3 fc             	and    $0xfffffffc,%ebx
   37bb6:	39 0d 48 c5 03 00    	cmp    %ecx,0x3c548
   37bbc:	0f 84 0e 01 00 00    	je     37cd0 <_free_r+0x150>
   37bc2:	83 e7 01             	and    $0x1,%edi
   37bc5:	89 59 04             	mov    %ebx,0x4(%ecx)
   37bc8:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
   37bcf:	75 1f                	jne    37bf0 <_free_r+0x70>
   37bd1:	8b 76 f8             	mov    -0x8(%esi),%esi
   37bd4:	29 f2                	sub    %esi,%edx
   37bd6:	01 f0                	add    %esi,%eax
   37bd8:	8b 72 08             	mov    0x8(%edx),%esi
   37bdb:	81 fe 48 c5 03 00    	cmp    $0x3c548,%esi
   37be1:	0f 84 39 01 00 00    	je     37d20 <_free_r+0x1a0>
   37be7:	8b 7a 0c             	mov    0xc(%edx),%edi
   37bea:	89 7e 0c             	mov    %edi,0xc(%esi)
   37bed:	89 77 08             	mov    %esi,0x8(%edi)
   37bf0:	f6 44 19 04 01       	testb  $0x1,0x4(%ecx,%ebx,1)
   37bf5:	75 21                	jne    37c18 <_free_r+0x98>
   37bf7:	8b 75 e0             	mov    -0x20(%ebp),%esi
   37bfa:	01 d8                	add    %ebx,%eax
   37bfc:	8b 59 08             	mov    0x8(%ecx),%ebx
   37bff:	85 f6                	test   %esi,%esi
   37c01:	75 0c                	jne    37c0f <_free_r+0x8f>
   37c03:	81 fb 48 c5 03 00    	cmp    $0x3c548,%ebx
   37c09:	0f 84 21 01 00 00    	je     37d30 <_free_r+0x1b0>
   37c0f:	8b 49 0c             	mov    0xc(%ecx),%ecx
   37c12:	89 4b 0c             	mov    %ecx,0xc(%ebx)
   37c15:	89 59 08             	mov    %ebx,0x8(%ecx)
   37c18:	89 c1                	mov    %eax,%ecx
   37c1a:	83 c9 01             	or     $0x1,%ecx
   37c1d:	89 4a 04             	mov    %ecx,0x4(%edx)
   37c20:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   37c23:	89 04 02             	mov    %eax,(%edx,%eax,1)
   37c26:	85 c9                	test   %ecx,%ecx
   37c28:	75 56                	jne    37c80 <_free_r+0x100>
   37c2a:	3d ff 01 00 00       	cmp    $0x1ff,%eax
   37c2f:	76 6f                	jbe    37ca0 <_free_r+0x120>
   37c31:	89 c1                	mov    %eax,%ecx
   37c33:	c1 e9 09             	shr    $0x9,%ecx
   37c36:	83 f9 04             	cmp    $0x4,%ecx
   37c39:	0f 87 21 01 00 00    	ja     37d60 <_free_r+0x1e0>
   37c3f:	89 c1                	mov    %eax,%ecx
   37c41:	c1 e9 06             	shr    $0x6,%ecx
   37c44:	83 c1 38             	add    $0x38,%ecx
   37c47:	8d 1c 09             	lea    (%ecx,%ecx,1),%ebx
   37c4a:	8d 34 9d 40 c5 03 00 	lea    0x3c540(,%ebx,4),%esi
   37c51:	8b 5e 08             	mov    0x8(%esi),%ebx
   37c54:	39 f3                	cmp    %esi,%ebx
   37c56:	0f 84 14 01 00 00    	je     37d70 <_free_r+0x1f0>
   37c5c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   37c60:	8b 4b 04             	mov    0x4(%ebx),%ecx
   37c63:	83 e1 fc             	and    $0xfffffffc,%ecx
   37c66:	39 c8                	cmp    %ecx,%eax
   37c68:	73 07                	jae    37c71 <_free_r+0xf1>
   37c6a:	8b 5b 08             	mov    0x8(%ebx),%ebx
   37c6d:	39 de                	cmp    %ebx,%esi
   37c6f:	75 ef                	jne    37c60 <_free_r+0xe0>
   37c71:	8b 43 0c             	mov    0xc(%ebx),%eax
   37c74:	89 42 0c             	mov    %eax,0xc(%edx)
   37c77:	89 5a 08             	mov    %ebx,0x8(%edx)
   37c7a:	89 50 08             	mov    %edx,0x8(%eax)
   37c7d:	89 53 0c             	mov    %edx,0xc(%ebx)
   37c80:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   37c83:	89 45 08             	mov    %eax,0x8(%ebp)
   37c86:	83 c4 1c             	add    $0x1c,%esp
   37c89:	5b                   	pop    %ebx
   37c8a:	5e                   	pop    %esi
   37c8b:	5f                   	pop    %edi
   37c8c:	5d                   	pop    %ebp
   37c8d:	e9 9e dd ff ff       	jmp    35a30 <__malloc_unlock>
   37c92:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   37c98:	83 c4 1c             	add    $0x1c,%esp
   37c9b:	5b                   	pop    %ebx
   37c9c:	5e                   	pop    %esi
   37c9d:	5f                   	pop    %edi
   37c9e:	5d                   	pop    %ebp
   37c9f:	c3                   	ret    
   37ca0:	c1 e8 03             	shr    $0x3,%eax
   37ca3:	bb 01 00 00 00       	mov    $0x1,%ebx
   37ca8:	89 c1                	mov    %eax,%ecx
   37caa:	c1 f9 02             	sar    $0x2,%ecx
   37cad:	8d 04 c5 40 c5 03 00 	lea    0x3c540(,%eax,8),%eax
   37cb4:	d3 e3                	shl    %cl,%ebx
   37cb6:	8b 48 08             	mov    0x8(%eax),%ecx
   37cb9:	09 1d 44 c5 03 00    	or     %ebx,0x3c544
   37cbf:	89 42 0c             	mov    %eax,0xc(%edx)
   37cc2:	89 4a 08             	mov    %ecx,0x8(%edx)
   37cc5:	89 50 08             	mov    %edx,0x8(%eax)
   37cc8:	89 51 0c             	mov    %edx,0xc(%ecx)
   37ccb:	eb b3                	jmp    37c80 <_free_r+0x100>
   37ccd:	8d 76 00             	lea    0x0(%esi),%esi
   37cd0:	01 d8                	add    %ebx,%eax
   37cd2:	83 e7 01             	and    $0x1,%edi
   37cd5:	75 13                	jne    37cea <_free_r+0x16a>
   37cd7:	8b 4e f8             	mov    -0x8(%esi),%ecx
   37cda:	29 ca                	sub    %ecx,%edx
   37cdc:	01 c8                	add    %ecx,%eax
   37cde:	8b 5a 08             	mov    0x8(%edx),%ebx
   37ce1:	8b 4a 0c             	mov    0xc(%edx),%ecx
   37ce4:	89 4b 0c             	mov    %ecx,0xc(%ebx)
   37ce7:	89 59 08             	mov    %ebx,0x8(%ecx)
   37cea:	89 c1                	mov    %eax,%ecx
   37cec:	83 c9 01             	or     $0x1,%ecx
   37cef:	3b 05 24 c5 03 00    	cmp    0x3c524,%eax
   37cf5:	89 4a 04             	mov    %ecx,0x4(%edx)
   37cf8:	89 15 48 c5 03 00    	mov    %edx,0x3c548
   37cfe:	72 80                	jb     37c80 <_free_r+0x100>
   37d00:	a1 50 f0 06 00       	mov    0x6f050,%eax
   37d05:	89 44 24 04          	mov    %eax,0x4(%esp)
   37d09:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   37d0c:	89 04 24             	mov    %eax,(%esp)
   37d0f:	e8 7c fd ff ff       	call   37a90 <_malloc_trim_r>
   37d14:	e9 67 ff ff ff       	jmp    37c80 <_free_r+0x100>
   37d19:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   37d20:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
   37d27:	e9 c4 fe ff ff       	jmp    37bf0 <_free_r+0x70>
   37d2c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   37d30:	89 c1                	mov    %eax,%ecx
   37d32:	83 c9 01             	or     $0x1,%ecx
   37d35:	89 15 54 c5 03 00    	mov    %edx,0x3c554
   37d3b:	89 15 50 c5 03 00    	mov    %edx,0x3c550
   37d41:	c7 42 0c 48 c5 03 00 	movl   $0x3c548,0xc(%edx)
   37d48:	c7 42 08 48 c5 03 00 	movl   $0x3c548,0x8(%edx)
   37d4f:	89 4a 04             	mov    %ecx,0x4(%edx)
   37d52:	89 04 02             	mov    %eax,(%edx,%eax,1)
   37d55:	e9 26 ff ff ff       	jmp    37c80 <_free_r+0x100>
   37d5a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   37d60:	83 f9 14             	cmp    $0x14,%ecx
   37d63:	77 23                	ja     37d88 <_free_r+0x208>
   37d65:	83 c1 5b             	add    $0x5b,%ecx
   37d68:	8d 1c 09             	lea    (%ecx,%ecx,1),%ebx
   37d6b:	e9 da fe ff ff       	jmp    37c4a <_free_r+0xca>
   37d70:	c1 f9 02             	sar    $0x2,%ecx
   37d73:	b8 01 00 00 00       	mov    $0x1,%eax
   37d78:	d3 e0                	shl    %cl,%eax
   37d7a:	09 05 44 c5 03 00    	or     %eax,0x3c544
   37d80:	89 d8                	mov    %ebx,%eax
   37d82:	e9 ed fe ff ff       	jmp    37c74 <_free_r+0xf4>
   37d87:	90                   	nop
   37d88:	83 f9 54             	cmp    $0x54,%ecx
   37d8b:	77 10                	ja     37d9d <_free_r+0x21d>
   37d8d:	89 c1                	mov    %eax,%ecx
   37d8f:	c1 e9 0c             	shr    $0xc,%ecx
   37d92:	83 c1 6e             	add    $0x6e,%ecx
   37d95:	8d 1c 09             	lea    (%ecx,%ecx,1),%ebx
   37d98:	e9 ad fe ff ff       	jmp    37c4a <_free_r+0xca>
   37d9d:	81 f9 54 01 00 00    	cmp    $0x154,%ecx
   37da3:	77 10                	ja     37db5 <_free_r+0x235>
   37da5:	89 c1                	mov    %eax,%ecx
   37da7:	c1 e9 0f             	shr    $0xf,%ecx
   37daa:	83 c1 77             	add    $0x77,%ecx
   37dad:	8d 1c 09             	lea    (%ecx,%ecx,1),%ebx
   37db0:	e9 95 fe ff ff       	jmp    37c4a <_free_r+0xca>
   37db5:	81 f9 54 05 00 00    	cmp    $0x554,%ecx
   37dbb:	77 10                	ja     37dcd <_free_r+0x24d>
   37dbd:	89 c1                	mov    %eax,%ecx
   37dbf:	c1 e9 12             	shr    $0x12,%ecx
   37dc2:	83 c1 7c             	add    $0x7c,%ecx
   37dc5:	8d 1c 09             	lea    (%ecx,%ecx,1),%ebx
   37dc8:	e9 7d fe ff ff       	jmp    37c4a <_free_r+0xca>
   37dcd:	bb fc 00 00 00       	mov    $0xfc,%ebx
   37dd2:	b9 7e 00 00 00       	mov    $0x7e,%ecx
   37dd7:	e9 6e fe ff ff       	jmp    37c4a <_free_r+0xca>
   37ddc:	66 90                	xchg   %ax,%ax
   37dde:	66 90                	xchg   %ax,%ax

00037de0 <memmove>:
   37de0:	55                   	push   %ebp
   37de1:	89 e5                	mov    %esp,%ebp
   37de3:	56                   	push   %esi
   37de4:	57                   	push   %edi
   37de5:	53                   	push   %ebx
   37de6:	8b 7d 08             	mov    0x8(%ebp),%edi
   37de9:	8b 4d 10             	mov    0x10(%ebp),%ecx
   37dec:	8b 75 0c             	mov    0xc(%ebp),%esi
   37def:	fc                   	cld    
   37df0:	39 fe                	cmp    %edi,%esi
   37df2:	73 43                	jae    37e37 <memmove+0x57>
   37df4:	8d 5c 31 ff          	lea    -0x1(%ecx,%esi,1),%ebx
   37df8:	39 df                	cmp    %ebx,%edi
   37dfa:	77 3b                	ja     37e37 <memmove+0x57>
   37dfc:	01 ce                	add    %ecx,%esi
   37dfe:	01 cf                	add    %ecx,%edi
   37e00:	fd                   	std    
   37e01:	83 f9 08             	cmp    $0x8,%ecx
   37e04:	76 2b                	jbe    37e31 <memmove+0x51>
   37e06:	89 fa                	mov    %edi,%edx
   37e08:	89 cb                	mov    %ecx,%ebx
   37e0a:	83 e2 03             	and    $0x3,%edx
   37e0d:	74 0c                	je     37e1b <memmove+0x3b>
   37e0f:	89 d1                	mov    %edx,%ecx
   37e11:	4e                   	dec    %esi
   37e12:	4f                   	dec    %edi
   37e13:	29 cb                	sub    %ecx,%ebx
   37e15:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
   37e17:	89 d9                	mov    %ebx,%ecx
   37e19:	46                   	inc    %esi
   37e1a:	47                   	inc    %edi
   37e1b:	c1 e9 02             	shr    $0x2,%ecx
   37e1e:	83 ee 04             	sub    $0x4,%esi
   37e21:	83 ef 04             	sub    $0x4,%edi
   37e24:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
   37e26:	83 c6 04             	add    $0x4,%esi
   37e29:	83 c7 04             	add    $0x4,%edi
   37e2c:	89 d9                	mov    %ebx,%ecx
   37e2e:	83 e1 03             	and    $0x3,%ecx
   37e31:	4e                   	dec    %esi
   37e32:	4f                   	dec    %edi
   37e33:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
   37e35:	eb 2a                	jmp    37e61 <memmove+0x81>
   37e37:	83 f9 08             	cmp    $0x8,%ecx
   37e3a:	76 23                	jbe    37e5f <memmove+0x7f>
   37e3c:	89 fa                	mov    %edi,%edx
   37e3e:	89 cb                	mov    %ecx,%ebx
   37e40:	83 e2 03             	and    $0x3,%edx
   37e43:	74 10                	je     37e55 <memmove+0x75>
   37e45:	b9 04 00 00 00       	mov    $0x4,%ecx
   37e4a:	29 d1                	sub    %edx,%ecx
   37e4c:	83 e1 03             	and    $0x3,%ecx
   37e4f:	29 cb                	sub    %ecx,%ebx
   37e51:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
   37e53:	89 d9                	mov    %ebx,%ecx
   37e55:	c1 e9 02             	shr    $0x2,%ecx
   37e58:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
   37e5a:	89 d9                	mov    %ebx,%ecx
   37e5c:	83 e1 03             	and    $0x3,%ecx
   37e5f:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
   37e61:	8b 45 08             	mov    0x8(%ebp),%eax
   37e64:	fc                   	cld    
   37e65:	8d 65 f4             	lea    -0xc(%ebp),%esp
   37e68:	5b                   	pop    %ebx
   37e69:	5f                   	pop    %edi
   37e6a:	5e                   	pop    %esi
   37e6b:	c9                   	leave  
   37e6c:	c3                   	ret    
   37e6d:	66 90                	xchg   %ax,%ax
   37e6f:	90                   	nop

00037e70 <_realloc_r>:
   37e70:	55                   	push   %ebp
   37e71:	89 e5                	mov    %esp,%ebp
   37e73:	57                   	push   %edi
   37e74:	56                   	push   %esi
   37e75:	53                   	push   %ebx
   37e76:	83 ec 3c             	sub    $0x3c,%esp
   37e79:	8b 45 08             	mov    0x8(%ebp),%eax
   37e7c:	8b 7d 0c             	mov    0xc(%ebp),%edi
   37e7f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   37e82:	8b 45 10             	mov    0x10(%ebp),%eax
   37e85:	85 ff                	test   %edi,%edi
   37e87:	89 45 e0             	mov    %eax,-0x20(%ebp)
   37e8a:	0f 84 50 02 00 00    	je     380e0 <_realloc_r+0x270>
   37e90:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   37e93:	8d 77 f8             	lea    -0x8(%edi),%esi
   37e96:	89 04 24             	mov    %eax,(%esp)
   37e99:	e8 82 db ff ff       	call   35a20 <__malloc_lock>
   37e9e:	8b 47 fc             	mov    -0x4(%edi),%eax
   37ea1:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   37ea4:	89 c3                	mov    %eax,%ebx
   37ea6:	8d 51 0b             	lea    0xb(%ecx),%edx
   37ea9:	83 e3 fc             	and    $0xfffffffc,%ebx
   37eac:	83 fa 16             	cmp    $0x16,%edx
   37eaf:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   37eb2:	0f 87 00 01 00 00    	ja     37fb8 <_realloc_r+0x148>
   37eb8:	31 d2                	xor    %edx,%edx
   37eba:	c7 45 d8 10 00 00 00 	movl   $0x10,-0x28(%ebp)
   37ec1:	c7 45 dc 10 00 00 00 	movl   $0x10,-0x24(%ebp)
   37ec8:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   37ecb:	39 4d dc             	cmp    %ecx,-0x24(%ebp)
   37ece:	0f 82 1c 02 00 00    	jb     380f0 <_realloc_r+0x280>
   37ed4:	84 d2                	test   %dl,%dl
   37ed6:	0f 85 14 02 00 00    	jne    380f0 <_realloc_r+0x280>
   37edc:	3b 5d d8             	cmp    -0x28(%ebp),%ebx
   37edf:	0f 8d eb 00 00 00    	jge    37fd0 <_realloc_r+0x160>
   37ee5:	8b 0d 48 c5 03 00    	mov    0x3c548,%ecx
   37eeb:	8d 14 1e             	lea    (%esi,%ebx,1),%edx
   37eee:	39 d1                	cmp    %edx,%ecx
   37ef0:	89 4d cc             	mov    %ecx,-0x34(%ebp)
   37ef3:	0f 84 6f 02 00 00    	je     38168 <_realloc_r+0x2f8>
   37ef9:	8b 4a 04             	mov    0x4(%edx),%ecx
   37efc:	89 c8                	mov    %ecx,%eax
   37efe:	83 e0 fe             	and    $0xfffffffe,%eax
   37f01:	f6 44 02 04 01       	testb  $0x1,0x4(%edx,%eax,1)
   37f06:	0f 84 f4 00 00 00    	je     38000 <_realloc_r+0x190>
   37f0c:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
   37f13:	31 d2                	xor    %edx,%edx
   37f15:	f6 45 d4 01          	testb  $0x1,-0x2c(%ebp)
   37f19:	0f 85 39 01 00 00    	jne    38058 <_realloc_r+0x1e8>
   37f1f:	89 f1                	mov    %esi,%ecx
   37f21:	2b 4f f8             	sub    -0x8(%edi),%ecx
   37f24:	8b 41 04             	mov    0x4(%ecx),%eax
   37f27:	83 e0 fc             	and    $0xfffffffc,%eax
   37f2a:	85 d2                	test   %edx,%edx
   37f2c:	0f 84 f6 02 00 00    	je     38228 <_realloc_r+0x3b8>
   37f32:	3b 55 cc             	cmp    -0x34(%ebp),%edx
   37f35:	0f 84 f5 02 00 00    	je     38230 <_realloc_r+0x3c0>
   37f3b:	89 55 d4             	mov    %edx,-0x2c(%ebp)
   37f3e:	8b 55 d0             	mov    -0x30(%ebp),%edx
   37f41:	01 d8                	add    %ebx,%eax
   37f43:	01 c2                	add    %eax,%edx
   37f45:	3b 55 d8             	cmp    -0x28(%ebp),%edx
   37f48:	89 55 d0             	mov    %edx,-0x30(%ebp)
   37f4b:	8b 55 d4             	mov    -0x2c(%ebp),%edx
   37f4e:	0f 8c ac 01 00 00    	jl     38100 <_realloc_r+0x290>
   37f54:	8b 42 0c             	mov    0xc(%edx),%eax
   37f57:	83 eb 04             	sub    $0x4,%ebx
   37f5a:	8b 52 08             	mov    0x8(%edx),%edx
   37f5d:	83 fb 24             	cmp    $0x24,%ebx
   37f60:	8d 71 08             	lea    0x8(%ecx),%esi
   37f63:	89 42 0c             	mov    %eax,0xc(%edx)
   37f66:	89 50 08             	mov    %edx,0x8(%eax)
   37f69:	8b 41 0c             	mov    0xc(%ecx),%eax
   37f6c:	8b 51 08             	mov    0x8(%ecx),%edx
   37f6f:	89 42 0c             	mov    %eax,0xc(%edx)
   37f72:	89 50 08             	mov    %edx,0x8(%eax)
   37f75:	0f 87 85 03 00 00    	ja     38300 <_realloc_r+0x490>
   37f7b:	83 fb 13             	cmp    $0x13,%ebx
   37f7e:	89 f0                	mov    %esi,%eax
   37f80:	76 1a                	jbe    37f9c <_realloc_r+0x12c>
   37f82:	8b 07                	mov    (%edi),%eax
   37f84:	83 fb 1b             	cmp    $0x1b,%ebx
   37f87:	89 41 08             	mov    %eax,0x8(%ecx)
   37f8a:	8b 47 04             	mov    0x4(%edi),%eax
   37f8d:	89 41 0c             	mov    %eax,0xc(%ecx)
   37f90:	0f 87 8f 03 00 00    	ja     38325 <_realloc_r+0x4b5>
   37f96:	8d 41 10             	lea    0x10(%ecx),%eax
   37f99:	83 c7 08             	add    $0x8,%edi
   37f9c:	8b 17                	mov    (%edi),%edx
   37f9e:	8b 5d d0             	mov    -0x30(%ebp),%ebx
   37fa1:	89 10                	mov    %edx,(%eax)
   37fa3:	8b 57 04             	mov    0x4(%edi),%edx
   37fa6:	89 50 04             	mov    %edx,0x4(%eax)
   37fa9:	8b 57 08             	mov    0x8(%edi),%edx
   37fac:	89 f7                	mov    %esi,%edi
   37fae:	89 ce                	mov    %ecx,%esi
   37fb0:	89 50 08             	mov    %edx,0x8(%eax)
   37fb3:	8b 41 04             	mov    0x4(%ecx),%eax
   37fb6:	eb 1b                	jmp    37fd3 <_realloc_r+0x163>
   37fb8:	83 e2 f8             	and    $0xfffffff8,%edx
   37fbb:	89 55 dc             	mov    %edx,-0x24(%ebp)
   37fbe:	89 55 d8             	mov    %edx,-0x28(%ebp)
   37fc1:	c1 ea 1f             	shr    $0x1f,%edx
   37fc4:	e9 ff fe ff ff       	jmp    37ec8 <_realloc_r+0x58>
   37fc9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   37fd0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
   37fd3:	89 da                	mov    %ebx,%edx
   37fd5:	2b 55 dc             	sub    -0x24(%ebp),%edx
   37fd8:	83 fa 0f             	cmp    $0xf,%edx
   37fdb:	77 4b                	ja     38028 <_realloc_r+0x1b8>
   37fdd:	83 e0 01             	and    $0x1,%eax
   37fe0:	09 d8                	or     %ebx,%eax
   37fe2:	89 46 04             	mov    %eax,0x4(%esi)
   37fe5:	83 4c 1e 04 01       	orl    $0x1,0x4(%esi,%ebx,1)
   37fea:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   37fed:	89 04 24             	mov    %eax,(%esp)
   37ff0:	e8 3b da ff ff       	call   35a30 <__malloc_unlock>
   37ff5:	89 f8                	mov    %edi,%eax
   37ff7:	83 c4 3c             	add    $0x3c,%esp
   37ffa:	5b                   	pop    %ebx
   37ffb:	5e                   	pop    %esi
   37ffc:	5f                   	pop    %edi
   37ffd:	5d                   	pop    %ebp
   37ffe:	c3                   	ret    
   37fff:	90                   	nop
   38000:	83 e1 fc             	and    $0xfffffffc,%ecx
   38003:	89 4d d0             	mov    %ecx,-0x30(%ebp)
   38006:	01 d9                	add    %ebx,%ecx
   38008:	3b 4d d8             	cmp    -0x28(%ebp),%ecx
   3800b:	0f 8c 04 ff ff ff    	jl     37f15 <_realloc_r+0xa5>
   38011:	8b 5a 0c             	mov    0xc(%edx),%ebx
   38014:	8b 52 08             	mov    0x8(%edx),%edx
   38017:	8b 45 d4             	mov    -0x2c(%ebp),%eax
   3801a:	89 5a 0c             	mov    %ebx,0xc(%edx)
   3801d:	89 53 08             	mov    %edx,0x8(%ebx)
   38020:	89 cb                	mov    %ecx,%ebx
   38022:	eb af                	jmp    37fd3 <_realloc_r+0x163>
   38024:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   38028:	8b 5d dc             	mov    -0x24(%ebp),%ebx
   3802b:	83 e0 01             	and    $0x1,%eax
   3802e:	09 d8                	or     %ebx,%eax
   38030:	89 46 04             	mov    %eax,0x4(%esi)
   38033:	89 d0                	mov    %edx,%eax
   38035:	8d 0c 1e             	lea    (%esi,%ebx,1),%ecx
   38038:	83 c8 01             	or     $0x1,%eax
   3803b:	89 41 04             	mov    %eax,0x4(%ecx)
   3803e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   38041:	83 4c 11 04 01       	orl    $0x1,0x4(%ecx,%edx,1)
   38046:	83 c1 08             	add    $0x8,%ecx
   38049:	89 4c 24 04          	mov    %ecx,0x4(%esp)
   3804d:	89 04 24             	mov    %eax,(%esp)
   38050:	e8 2b fb ff ff       	call   37b80 <_free_r>
   38055:	eb 93                	jmp    37fea <_realloc_r+0x17a>
   38057:	90                   	nop
   38058:	8b 45 e0             	mov    -0x20(%ebp),%eax
   3805b:	89 44 24 04          	mov    %eax,0x4(%esp)
   3805f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   38062:	89 04 24             	mov    %eax,(%esp)
   38065:	e8 d6 d1 ff ff       	call   35240 <_malloc_r>
   3806a:	85 c0                	test   %eax,%eax
   3806c:	89 c1                	mov    %eax,%ecx
   3806e:	0f 84 65 03 00 00    	je     383d9 <_realloc_r+0x569>
   38074:	8b 47 fc             	mov    -0x4(%edi),%eax
   38077:	8d 51 f8             	lea    -0x8(%ecx),%edx
   3807a:	89 55 e0             	mov    %edx,-0x20(%ebp)
   3807d:	89 c2                	mov    %eax,%edx
   3807f:	83 e2 fe             	and    $0xfffffffe,%edx
   38082:	01 f2                	add    %esi,%edx
   38084:	39 55 e0             	cmp    %edx,-0x20(%ebp)
   38087:	0f 84 63 02 00 00    	je     382f0 <_realloc_r+0x480>
   3808d:	83 eb 04             	sub    $0x4,%ebx
   38090:	83 fb 24             	cmp    $0x24,%ebx
   38093:	0f 87 6f 01 00 00    	ja     38208 <_realloc_r+0x398>
   38099:	83 fb 13             	cmp    $0x13,%ebx
   3809c:	0f 87 ee 00 00 00    	ja     38190 <_realloc_r+0x320>
   380a2:	89 c8                	mov    %ecx,%eax
   380a4:	89 fa                	mov    %edi,%edx
   380a6:	8b 1a                	mov    (%edx),%ebx
   380a8:	89 18                	mov    %ebx,(%eax)
   380aa:	8b 5a 04             	mov    0x4(%edx),%ebx
   380ad:	89 58 04             	mov    %ebx,0x4(%eax)
   380b0:	8b 52 08             	mov    0x8(%edx),%edx
   380b3:	89 50 08             	mov    %edx,0x8(%eax)
   380b6:	8b 75 e4             	mov    -0x1c(%ebp),%esi
   380b9:	89 7c 24 04          	mov    %edi,0x4(%esp)
   380bd:	89 4d e0             	mov    %ecx,-0x20(%ebp)
   380c0:	89 34 24             	mov    %esi,(%esp)
   380c3:	e8 b8 fa ff ff       	call   37b80 <_free_r>
   380c8:	89 34 24             	mov    %esi,(%esp)
   380cb:	e8 60 d9 ff ff       	call   35a30 <__malloc_unlock>
   380d0:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   380d3:	83 c4 3c             	add    $0x3c,%esp
   380d6:	5b                   	pop    %ebx
   380d7:	5e                   	pop    %esi
   380d8:	5f                   	pop    %edi
   380d9:	89 c8                	mov    %ecx,%eax
   380db:	5d                   	pop    %ebp
   380dc:	c3                   	ret    
   380dd:	8d 76 00             	lea    0x0(%esi),%esi
   380e0:	89 45 0c             	mov    %eax,0xc(%ebp)
   380e3:	83 c4 3c             	add    $0x3c,%esp
   380e6:	5b                   	pop    %ebx
   380e7:	5e                   	pop    %esi
   380e8:	5f                   	pop    %edi
   380e9:	5d                   	pop    %ebp
   380ea:	e9 51 d1 ff ff       	jmp    35240 <_malloc_r>
   380ef:	90                   	nop
   380f0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   380f3:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
   380f9:	31 c0                	xor    %eax,%eax
   380fb:	e9 f7 fe ff ff       	jmp    37ff7 <_realloc_r+0x187>
   38100:	89 c2                	mov    %eax,%edx
   38102:	3b 55 d8             	cmp    -0x28(%ebp),%edx
   38105:	0f 8c 4d ff ff ff    	jl     38058 <_realloc_r+0x1e8>
   3810b:	8b 71 08             	mov    0x8(%ecx),%esi
   3810e:	83 eb 04             	sub    $0x4,%ebx
   38111:	8b 41 0c             	mov    0xc(%ecx),%eax
   38114:	83 fb 24             	cmp    $0x24,%ebx
   38117:	89 46 0c             	mov    %eax,0xc(%esi)
   3811a:	89 70 08             	mov    %esi,0x8(%eax)
   3811d:	8d 71 08             	lea    0x8(%ecx),%esi
   38120:	0f 87 88 00 00 00    	ja     381ae <_realloc_r+0x33e>
   38126:	83 fb 13             	cmp    $0x13,%ebx
   38129:	89 f0                	mov    %esi,%eax
   3812b:	76 1a                	jbe    38147 <_realloc_r+0x2d7>
   3812d:	8b 07                	mov    (%edi),%eax
   3812f:	83 fb 1b             	cmp    $0x1b,%ebx
   38132:	89 41 08             	mov    %eax,0x8(%ecx)
   38135:	8b 47 04             	mov    0x4(%edi),%eax
   38138:	89 41 0c             	mov    %eax,0xc(%ecx)
   3813b:	0f 87 17 02 00 00    	ja     38358 <_realloc_r+0x4e8>
   38141:	8d 41 10             	lea    0x10(%ecx),%eax
   38144:	83 c7 08             	add    $0x8,%edi
   38147:	8b 1f                	mov    (%edi),%ebx
   38149:	89 18                	mov    %ebx,(%eax)
   3814b:	8b 5f 04             	mov    0x4(%edi),%ebx
   3814e:	89 58 04             	mov    %ebx,0x4(%eax)
   38151:	8b 5f 08             	mov    0x8(%edi),%ebx
   38154:	89 f7                	mov    %esi,%edi
   38156:	89 ce                	mov    %ecx,%esi
   38158:	89 58 08             	mov    %ebx,0x8(%eax)
   3815b:	89 d3                	mov    %edx,%ebx
   3815d:	8b 41 04             	mov    0x4(%ecx),%eax
   38160:	e9 6e fe ff ff       	jmp    37fd3 <_realloc_r+0x163>
   38165:	8d 76 00             	lea    0x0(%esi),%esi
   38168:	8b 45 cc             	mov    -0x34(%ebp),%eax
   3816b:	8b 55 dc             	mov    -0x24(%ebp),%edx
   3816e:	8b 48 04             	mov    0x4(%eax),%ecx
   38171:	83 c2 10             	add    $0x10,%edx
   38174:	89 4d d0             	mov    %ecx,-0x30(%ebp)
   38177:	83 65 d0 fc          	andl   $0xfffffffc,-0x30(%ebp)
   3817b:	8b 4d d0             	mov    -0x30(%ebp),%ecx
   3817e:	01 d9                	add    %ebx,%ecx
   38180:	39 d1                	cmp    %edx,%ecx
   38182:	7d 54                	jge    381d8 <_realloc_r+0x368>
   38184:	89 c2                	mov    %eax,%edx
   38186:	e9 8a fd ff ff       	jmp    37f15 <_realloc_r+0xa5>
   3818b:	90                   	nop
   3818c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   38190:	8b 07                	mov    (%edi),%eax
   38192:	83 fb 1b             	cmp    $0x1b,%ebx
   38195:	89 01                	mov    %eax,(%ecx)
   38197:	8b 47 04             	mov    0x4(%edi),%eax
   3819a:	89 41 04             	mov    %eax,0x4(%ecx)
   3819d:	0f 87 2d 01 00 00    	ja     382d0 <_realloc_r+0x460>
   381a3:	8d 41 08             	lea    0x8(%ecx),%eax
   381a6:	8d 57 08             	lea    0x8(%edi),%edx
   381a9:	e9 f8 fe ff ff       	jmp    380a6 <_realloc_r+0x236>
   381ae:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   381b2:	89 7c 24 04          	mov    %edi,0x4(%esp)
   381b6:	89 f7                	mov    %esi,%edi
   381b8:	89 34 24             	mov    %esi,(%esp)
   381bb:	89 55 d8             	mov    %edx,-0x28(%ebp)
   381be:	89 4d e0             	mov    %ecx,-0x20(%ebp)
   381c1:	e8 1a fc ff ff       	call   37de0 <memmove>
   381c6:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   381c9:	8b 55 d8             	mov    -0x28(%ebp),%edx
   381cc:	8b 41 04             	mov    0x4(%ecx),%eax
   381cf:	89 ce                	mov    %ecx,%esi
   381d1:	89 d3                	mov    %edx,%ebx
   381d3:	e9 fb fd ff ff       	jmp    37fd3 <_realloc_r+0x163>
   381d8:	8b 5d dc             	mov    -0x24(%ebp),%ebx
   381db:	29 d9                	sub    %ebx,%ecx
   381dd:	01 de                	add    %ebx,%esi
   381df:	83 c9 01             	or     $0x1,%ecx
   381e2:	89 35 48 c5 03 00    	mov    %esi,0x3c548
   381e8:	89 4e 04             	mov    %ecx,0x4(%esi)
   381eb:	8b 47 fc             	mov    -0x4(%edi),%eax
   381ee:	83 e0 01             	and    $0x1,%eax
   381f1:	09 d8                	or     %ebx,%eax
   381f3:	89 47 fc             	mov    %eax,-0x4(%edi)
   381f6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   381f9:	89 04 24             	mov    %eax,(%esp)
   381fc:	e8 2f d8 ff ff       	call   35a30 <__malloc_unlock>
   38201:	89 f8                	mov    %edi,%eax
   38203:	e9 ef fd ff ff       	jmp    37ff7 <_realloc_r+0x187>
   38208:	89 0c 24             	mov    %ecx,(%esp)
   3820b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   3820f:	89 7c 24 04          	mov    %edi,0x4(%esp)
   38213:	89 4d e0             	mov    %ecx,-0x20(%ebp)
   38216:	e8 c5 fb ff ff       	call   37de0 <memmove>
   3821b:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   3821e:	e9 93 fe ff ff       	jmp    380b6 <_realloc_r+0x246>
   38223:	90                   	nop
   38224:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   38228:	8d 14 18             	lea    (%eax,%ebx,1),%edx
   3822b:	e9 d2 fe ff ff       	jmp    38102 <_realloc_r+0x292>
   38230:	8d 14 18             	lea    (%eax,%ebx,1),%edx
   38233:	8b 45 d0             	mov    -0x30(%ebp),%eax
   38236:	01 d0                	add    %edx,%eax
   38238:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   3823b:	8b 45 dc             	mov    -0x24(%ebp),%eax
   3823e:	83 c0 10             	add    $0x10,%eax
   38241:	39 45 d4             	cmp    %eax,-0x2c(%ebp)
   38244:	0f 8c b8 fe ff ff    	jl     38102 <_realloc_r+0x292>
   3824a:	8b 41 0c             	mov    0xc(%ecx),%eax
   3824d:	83 eb 04             	sub    $0x4,%ebx
   38250:	8b 51 08             	mov    0x8(%ecx),%edx
   38253:	83 fb 24             	cmp    $0x24,%ebx
   38256:	8d 71 08             	lea    0x8(%ecx),%esi
   38259:	89 42 0c             	mov    %eax,0xc(%edx)
   3825c:	89 50 08             	mov    %edx,0x8(%eax)
   3825f:	0f 87 3d 01 00 00    	ja     383a2 <_realloc_r+0x532>
   38265:	83 fb 13             	cmp    $0x13,%ebx
   38268:	89 f0                	mov    %esi,%eax
   3826a:	76 1a                	jbe    38286 <_realloc_r+0x416>
   3826c:	8b 07                	mov    (%edi),%eax
   3826e:	83 fb 1b             	cmp    $0x1b,%ebx
   38271:	89 41 08             	mov    %eax,0x8(%ecx)
   38274:	8b 47 04             	mov    0x4(%edi),%eax
   38277:	89 41 0c             	mov    %eax,0xc(%ecx)
   3827a:	0f 87 3d 01 00 00    	ja     383bd <_realloc_r+0x54d>
   38280:	8d 41 10             	lea    0x10(%ecx),%eax
   38283:	83 c7 08             	add    $0x8,%edi
   38286:	8b 17                	mov    (%edi),%edx
   38288:	89 10                	mov    %edx,(%eax)
   3828a:	8b 57 04             	mov    0x4(%edi),%edx
   3828d:	89 50 04             	mov    %edx,0x4(%eax)
   38290:	8b 57 08             	mov    0x8(%edi),%edx
   38293:	89 50 08             	mov    %edx,0x8(%eax)
   38296:	8b 5d dc             	mov    -0x24(%ebp),%ebx
   38299:	8b 7d d4             	mov    -0x2c(%ebp),%edi
   3829c:	89 d8                	mov    %ebx,%eax
   3829e:	29 df                	sub    %ebx,%edi
   382a0:	01 c8                	add    %ecx,%eax
   382a2:	83 cf 01             	or     $0x1,%edi
   382a5:	a3 48 c5 03 00       	mov    %eax,0x3c548
   382aa:	89 78 04             	mov    %edi,0x4(%eax)
   382ad:	8b 41 04             	mov    0x4(%ecx),%eax
   382b0:	83 e0 01             	and    $0x1,%eax
   382b3:	09 d8                	or     %ebx,%eax
   382b5:	89 41 04             	mov    %eax,0x4(%ecx)
   382b8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   382bb:	89 04 24             	mov    %eax,(%esp)
   382be:	e8 6d d7 ff ff       	call   35a30 <__malloc_unlock>
   382c3:	89 f0                	mov    %esi,%eax
   382c5:	e9 2d fd ff ff       	jmp    37ff7 <_realloc_r+0x187>
   382ca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   382d0:	8b 47 08             	mov    0x8(%edi),%eax
   382d3:	83 fb 24             	cmp    $0x24,%ebx
   382d6:	89 41 08             	mov    %eax,0x8(%ecx)
   382d9:	8b 47 0c             	mov    0xc(%edi),%eax
   382dc:	89 41 0c             	mov    %eax,0xc(%ecx)
   382df:	74 60                	je     38341 <_realloc_r+0x4d1>
   382e1:	8d 41 10             	lea    0x10(%ecx),%eax
   382e4:	8d 57 10             	lea    0x10(%edi),%edx
   382e7:	e9 ba fd ff ff       	jmp    380a6 <_realloc_r+0x236>
   382ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   382f0:	8b 51 fc             	mov    -0x4(%ecx),%edx
   382f3:	83 e2 fc             	and    $0xfffffffc,%edx
   382f6:	01 d3                	add    %edx,%ebx
   382f8:	e9 d6 fc ff ff       	jmp    37fd3 <_realloc_r+0x163>
   382fd:	8d 76 00             	lea    0x0(%esi),%esi
   38300:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   38304:	89 7c 24 04          	mov    %edi,0x4(%esp)
   38308:	89 f7                	mov    %esi,%edi
   3830a:	89 34 24             	mov    %esi,(%esp)
   3830d:	89 4d e0             	mov    %ecx,-0x20(%ebp)
   38310:	e8 cb fa ff ff       	call   37de0 <memmove>
   38315:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   38318:	8b 5d d0             	mov    -0x30(%ebp),%ebx
   3831b:	8b 41 04             	mov    0x4(%ecx),%eax
   3831e:	89 ce                	mov    %ecx,%esi
   38320:	e9 ae fc ff ff       	jmp    37fd3 <_realloc_r+0x163>
   38325:	8b 47 08             	mov    0x8(%edi),%eax
   38328:	83 fb 24             	cmp    $0x24,%ebx
   3832b:	89 41 10             	mov    %eax,0x10(%ecx)
   3832e:	8b 47 0c             	mov    0xc(%edi),%eax
   38331:	89 41 14             	mov    %eax,0x14(%ecx)
   38334:	74 3e                	je     38374 <_realloc_r+0x504>
   38336:	8d 41 18             	lea    0x18(%ecx),%eax
   38339:	83 c7 10             	add    $0x10,%edi
   3833c:	e9 5b fc ff ff       	jmp    37f9c <_realloc_r+0x12c>
   38341:	8b 47 10             	mov    0x10(%edi),%eax
   38344:	8d 57 18             	lea    0x18(%edi),%edx
   38347:	89 41 10             	mov    %eax,0x10(%ecx)
   3834a:	8b 5f 14             	mov    0x14(%edi),%ebx
   3834d:	8d 41 18             	lea    0x18(%ecx),%eax
   38350:	89 59 14             	mov    %ebx,0x14(%ecx)
   38353:	e9 4e fd ff ff       	jmp    380a6 <_realloc_r+0x236>
   38358:	8b 47 08             	mov    0x8(%edi),%eax
   3835b:	83 fb 24             	cmp    $0x24,%ebx
   3835e:	89 41 10             	mov    %eax,0x10(%ecx)
   38361:	8b 47 0c             	mov    0xc(%edi),%eax
   38364:	89 41 14             	mov    %eax,0x14(%ecx)
   38367:	74 22                	je     3838b <_realloc_r+0x51b>
   38369:	8d 41 18             	lea    0x18(%ecx),%eax
   3836c:	83 c7 10             	add    $0x10,%edi
   3836f:	e9 d3 fd ff ff       	jmp    38147 <_realloc_r+0x2d7>
   38374:	8b 47 10             	mov    0x10(%edi),%eax
   38377:	83 c7 18             	add    $0x18,%edi
   3837a:	89 41 18             	mov    %eax,0x18(%ecx)
   3837d:	8b 57 fc             	mov    -0x4(%edi),%edx
   38380:	8d 41 20             	lea    0x20(%ecx),%eax
   38383:	89 51 1c             	mov    %edx,0x1c(%ecx)
   38386:	e9 11 fc ff ff       	jmp    37f9c <_realloc_r+0x12c>
   3838b:	8b 47 10             	mov    0x10(%edi),%eax
   3838e:	83 c7 18             	add    $0x18,%edi
   38391:	89 41 18             	mov    %eax,0x18(%ecx)
   38394:	8b 5f fc             	mov    -0x4(%edi),%ebx
   38397:	8d 41 20             	lea    0x20(%ecx),%eax
   3839a:	89 59 1c             	mov    %ebx,0x1c(%ecx)
   3839d:	e9 a5 fd ff ff       	jmp    38147 <_realloc_r+0x2d7>
   383a2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   383a6:	89 7c 24 04          	mov    %edi,0x4(%esp)
   383aa:	89 34 24             	mov    %esi,(%esp)
   383ad:	89 4d e0             	mov    %ecx,-0x20(%ebp)
   383b0:	e8 2b fa ff ff       	call   37de0 <memmove>
   383b5:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   383b8:	e9 d9 fe ff ff       	jmp    38296 <_realloc_r+0x426>
   383bd:	8b 47 08             	mov    0x8(%edi),%eax
   383c0:	83 fb 24             	cmp    $0x24,%ebx
   383c3:	89 41 10             	mov    %eax,0x10(%ecx)
   383c6:	8b 47 0c             	mov    0xc(%edi),%eax
   383c9:	89 41 14             	mov    %eax,0x14(%ecx)
   383cc:	74 1d                	je     383eb <_realloc_r+0x57b>
   383ce:	8d 41 18             	lea    0x18(%ecx),%eax
   383d1:	83 c7 10             	add    $0x10,%edi
   383d4:	e9 ad fe ff ff       	jmp    38286 <_realloc_r+0x416>
   383d9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   383dc:	89 04 24             	mov    %eax,(%esp)
   383df:	e8 4c d6 ff ff       	call   35a30 <__malloc_unlock>
   383e4:	31 c0                	xor    %eax,%eax
   383e6:	e9 0c fc ff ff       	jmp    37ff7 <_realloc_r+0x187>
   383eb:	8b 47 10             	mov    0x10(%edi),%eax
   383ee:	83 c7 18             	add    $0x18,%edi
   383f1:	89 41 18             	mov    %eax,0x18(%ecx)
   383f4:	8b 57 fc             	mov    -0x4(%edi),%edx
   383f7:	8d 41 20             	lea    0x20(%ecx),%eax
   383fa:	89 51 1c             	mov    %edx,0x1c(%ecx)
   383fd:	e9 84 fe ff ff       	jmp    38286 <_realloc_r+0x416>
   38402:	66 90                	xchg   %ax,%ax
   38404:	66 90                	xchg   %ax,%ax
   38406:	66 90                	xchg   %ax,%ax
   38408:	66 90                	xchg   %ax,%ax
   3840a:	66 90                	xchg   %ax,%ax
   3840c:	66 90                	xchg   %ax,%ax
   3840e:	66 90                	xchg   %ax,%ax

00038410 <cleanup_glue>:
   38410:	55                   	push   %ebp
   38411:	89 e5                	mov    %esp,%ebp
   38413:	56                   	push   %esi
   38414:	53                   	push   %ebx
   38415:	83 ec 10             	sub    $0x10,%esp
   38418:	8b 5d 0c             	mov    0xc(%ebp),%ebx
   3841b:	8b 75 08             	mov    0x8(%ebp),%esi
   3841e:	8b 03                	mov    (%ebx),%eax
   38420:	85 c0                	test   %eax,%eax
   38422:	74 0c                	je     38430 <cleanup_glue+0x20>
   38424:	89 44 24 04          	mov    %eax,0x4(%esp)
   38428:	89 34 24             	mov    %esi,(%esp)
   3842b:	e8 e0 ff ff ff       	call   38410 <cleanup_glue>
   38430:	89 5d 0c             	mov    %ebx,0xc(%ebp)
   38433:	89 75 08             	mov    %esi,0x8(%ebp)
   38436:	83 c4 10             	add    $0x10,%esp
   38439:	5b                   	pop    %ebx
   3843a:	5e                   	pop    %esi
   3843b:	5d                   	pop    %ebp
   3843c:	e9 3f f7 ff ff       	jmp    37b80 <_free_r>
   38441:	eb 0d                	jmp    38450 <_reclaim_reent>
   38443:	90                   	nop
   38444:	90                   	nop
   38445:	90                   	nop
   38446:	90                   	nop
   38447:	90                   	nop
   38448:	90                   	nop
   38449:	90                   	nop
   3844a:	90                   	nop
   3844b:	90                   	nop
   3844c:	90                   	nop
   3844d:	90                   	nop
   3844e:	90                   	nop
   3844f:	90                   	nop

00038450 <_reclaim_reent>:
   38450:	55                   	push   %ebp
   38451:	89 e5                	mov    %esp,%ebp
   38453:	57                   	push   %edi
   38454:	56                   	push   %esi
   38455:	53                   	push   %ebx
   38456:	83 ec 1c             	sub    $0x1c,%esp
   38459:	8b 5d 08             	mov    0x8(%ebp),%ebx
   3845c:	3b 1d 40 c0 03 00    	cmp    0x3c040,%ebx
   38462:	0f 84 a6 00 00 00    	je     3850e <_reclaim_reent+0xbe>
   38468:	8b 53 4c             	mov    0x4c(%ebx),%edx
   3846b:	85 d2                	test   %edx,%edx
   3846d:	74 46                	je     384b5 <_reclaim_reent+0x65>
   3846f:	31 c0                	xor    %eax,%eax
   38471:	31 f6                	xor    %esi,%esi
   38473:	90                   	nop
   38474:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   38478:	8b 04 82             	mov    (%edx,%eax,4),%eax
   3847b:	85 c0                	test   %eax,%eax
   3847d:	75 0b                	jne    3848a <_reclaim_reent+0x3a>
   3847f:	eb 1e                	jmp    3849f <_reclaim_reent+0x4f>
   38481:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   38488:	89 f8                	mov    %edi,%eax
   3848a:	8b 38                	mov    (%eax),%edi
   3848c:	89 44 24 04          	mov    %eax,0x4(%esp)
   38490:	89 1c 24             	mov    %ebx,(%esp)
   38493:	e8 e8 f6 ff ff       	call   37b80 <_free_r>
   38498:	85 ff                	test   %edi,%edi
   3849a:	75 ec                	jne    38488 <_reclaim_reent+0x38>
   3849c:	8b 53 4c             	mov    0x4c(%ebx),%edx
   3849f:	83 c6 01             	add    $0x1,%esi
   384a2:	83 fe 20             	cmp    $0x20,%esi
   384a5:	89 f0                	mov    %esi,%eax
   384a7:	75 cf                	jne    38478 <_reclaim_reent+0x28>
   384a9:	89 54 24 04          	mov    %edx,0x4(%esp)
   384ad:	89 1c 24             	mov    %ebx,(%esp)
   384b0:	e8 cb f6 ff ff       	call   37b80 <_free_r>
   384b5:	8b 43 40             	mov    0x40(%ebx),%eax
   384b8:	85 c0                	test   %eax,%eax
   384ba:	74 0c                	je     384c8 <_reclaim_reent+0x78>
   384bc:	89 44 24 04          	mov    %eax,0x4(%esp)
   384c0:	89 1c 24             	mov    %ebx,(%esp)
   384c3:	e8 b8 f6 ff ff       	call   37b80 <_free_r>
   384c8:	8b 83 48 01 00 00    	mov    0x148(%ebx),%eax
   384ce:	85 c0                	test   %eax,%eax
   384d0:	74 22                	je     384f4 <_reclaim_reent+0xa4>
   384d2:	8d b3 4c 01 00 00    	lea    0x14c(%ebx),%esi
   384d8:	39 f0                	cmp    %esi,%eax
   384da:	75 06                	jne    384e2 <_reclaim_reent+0x92>
   384dc:	eb 16                	jmp    384f4 <_reclaim_reent+0xa4>
   384de:	66 90                	xchg   %ax,%ax
   384e0:	89 f8                	mov    %edi,%eax
   384e2:	8b 38                	mov    (%eax),%edi
   384e4:	89 44 24 04          	mov    %eax,0x4(%esp)
   384e8:	89 1c 24             	mov    %ebx,(%esp)
   384eb:	e8 90 f6 ff ff       	call   37b80 <_free_r>
   384f0:	39 fe                	cmp    %edi,%esi
   384f2:	75 ec                	jne    384e0 <_reclaim_reent+0x90>
   384f4:	8b 43 54             	mov    0x54(%ebx),%eax
   384f7:	85 c0                	test   %eax,%eax
   384f9:	74 0c                	je     38507 <_reclaim_reent+0xb7>
   384fb:	89 44 24 04          	mov    %eax,0x4(%esp)
   384ff:	89 1c 24             	mov    %ebx,(%esp)
   38502:	e8 79 f6 ff ff       	call   37b80 <_free_r>
   38507:	8b 43 38             	mov    0x38(%ebx),%eax
   3850a:	85 c0                	test   %eax,%eax
   3850c:	75 08                	jne    38516 <_reclaim_reent+0xc6>
   3850e:	83 c4 1c             	add    $0x1c,%esp
   38511:	5b                   	pop    %ebx
   38512:	5e                   	pop    %esi
   38513:	5f                   	pop    %edi
   38514:	5d                   	pop    %ebp
   38515:	c3                   	ret    
   38516:	89 1c 24             	mov    %ebx,(%esp)
   38519:	ff 53 3c             	call   *0x3c(%ebx)
   3851c:	8b 83 e0 02 00 00    	mov    0x2e0(%ebx),%eax
   38522:	85 c0                	test   %eax,%eax
   38524:	74 e8                	je     3850e <_reclaim_reent+0xbe>
   38526:	89 1c 24             	mov    %ebx,(%esp)
   38529:	89 44 24 04          	mov    %eax,0x4(%esp)
   3852d:	e8 de fe ff ff       	call   38410 <cleanup_glue>
   38532:	83 c4 1c             	add    $0x1c,%esp
   38535:	5b                   	pop    %ebx
   38536:	5e                   	pop    %esi
   38537:	5f                   	pop    %edi
   38538:	5d                   	pop    %ebp
   38539:	c3                   	ret    
