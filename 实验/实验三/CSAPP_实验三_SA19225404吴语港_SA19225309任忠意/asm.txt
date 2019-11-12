
bufbomb：     文件格式 elf32-i386


Disassembly of section .init:

0804869c <_init>:
 804869c:	55                   	push   %ebp
 804869d:	89 e5                	mov    %esp,%ebp
 804869f:	83 ec 08             	sub    $0x8,%esp
 80486a2:	e8 0d 02 00 00       	call   80488b4 <call_gmon_start>
 80486a7:	e8 64 02 00 00       	call   8048910 <frame_dummy>
 80486ac:	e8 af 0e 00 00       	call   8049560 <__do_global_ctors_aux>
 80486b1:	c9                   	leave  
 80486b2:	c3                   	ret    

Disassembly of section .plt:

080486b4 <.plt>:
 80486b4:	ff 35 e4 a0 04 08    	pushl  0x804a0e4
 80486ba:	ff 25 e8 a0 04 08    	jmp    *0x804a0e8
 80486c0:	00 00                	add    %al,(%eax)
	...

080486c4 <fprintf@plt>:
 80486c4:	ff 25 ec a0 04 08    	jmp    *0x804a0ec
 80486ca:	68 00 00 00 00       	push   $0x0
 80486cf:	e9 e0 ff ff ff       	jmp    80486b4 <.plt>

080486d4 <tempnam@plt>:
 80486d4:	ff 25 f0 a0 04 08    	jmp    *0x804a0f0
 80486da:	68 08 00 00 00       	push   $0x8
 80486df:	e9 d0 ff ff ff       	jmp    80486b4 <.plt>

080486e4 <signal@plt>:
 80486e4:	ff 25 f4 a0 04 08    	jmp    *0x804a0f4
 80486ea:	68 10 00 00 00       	push   $0x10
 80486ef:	e9 c0 ff ff ff       	jmp    80486b4 <.plt>

080486f4 <system@plt>:
 80486f4:	ff 25 f8 a0 04 08    	jmp    *0x804a0f8
 80486fa:	68 18 00 00 00       	push   $0x18
 80486ff:	e9 b0 ff ff ff       	jmp    80486b4 <.plt>

08048704 <random@plt>:
 8048704:	ff 25 fc a0 04 08    	jmp    *0x804a0fc
 804870a:	68 20 00 00 00       	push   $0x20
 804870f:	e9 a0 ff ff ff       	jmp    80486b4 <.plt>

08048714 <puts@plt>:
 8048714:	ff 25 00 a1 04 08    	jmp    *0x804a100
 804871a:	68 28 00 00 00       	push   $0x28
 804871f:	e9 90 ff ff ff       	jmp    80486b4 <.plt>

08048724 <remove@plt>:
 8048724:	ff 25 04 a1 04 08    	jmp    *0x804a104
 804872a:	68 30 00 00 00       	push   $0x30
 804872f:	e9 80 ff ff ff       	jmp    80486b4 <.plt>

08048734 <getopt@plt>:
 8048734:	ff 25 08 a1 04 08    	jmp    *0x804a108
 804873a:	68 38 00 00 00       	push   $0x38
 804873f:	e9 70 ff ff ff       	jmp    80486b4 <.plt>

08048744 <fputc@plt>:
 8048744:	ff 25 0c a1 04 08    	jmp    *0x804a10c
 804874a:	68 40 00 00 00       	push   $0x40
 804874f:	e9 60 ff ff ff       	jmp    80486b4 <.plt>

08048754 <__libc_start_main@plt>:
 8048754:	ff 25 10 a1 04 08    	jmp    *0x804a110
 804875a:	68 48 00 00 00       	push   $0x48
 804875f:	e9 50 ff ff ff       	jmp    80486b4 <.plt>

08048764 <printf@plt>:
 8048764:	ff 25 14 a1 04 08    	jmp    *0x804a114
 804876a:	68 50 00 00 00       	push   $0x50
 804876f:	e9 40 ff ff ff       	jmp    80486b4 <.plt>

08048774 <fclose@plt>:
 8048774:	ff 25 18 a1 04 08    	jmp    *0x804a118
 804877a:	68 58 00 00 00       	push   $0x58
 804877f:	e9 30 ff ff ff       	jmp    80486b4 <.plt>

08048784 <__strdup@plt>:
 8048784:	ff 25 1c a1 04 08    	jmp    *0x804a11c
 804878a:	68 60 00 00 00       	push   $0x60
 804878f:	e9 20 ff ff ff       	jmp    80486b4 <.plt>

08048794 <srand@plt>:
 8048794:	ff 25 20 a1 04 08    	jmp    *0x804a120
 804879a:	68 68 00 00 00       	push   $0x68
 804879f:	e9 10 ff ff ff       	jmp    80486b4 <.plt>

080487a4 <exit@plt>:
 80487a4:	ff 25 24 a1 04 08    	jmp    *0x804a124
 80487aa:	68 70 00 00 00       	push   $0x70
 80487af:	e9 00 ff ff ff       	jmp    80486b4 <.plt>

080487b4 <calloc@plt>:
 80487b4:	ff 25 28 a1 04 08    	jmp    *0x804a128
 80487ba:	68 78 00 00 00       	push   $0x78
 80487bf:	e9 f0 fe ff ff       	jmp    80486b4 <.plt>

080487c4 <memset@plt>:
 80487c4:	ff 25 2c a1 04 08    	jmp    *0x804a12c
 80487ca:	68 80 00 00 00       	push   $0x80
 80487cf:	e9 e0 fe ff ff       	jmp    80486b4 <.plt>

080487d4 <fopen@plt>:
 80487d4:	ff 25 30 a1 04 08    	jmp    *0x804a130
 80487da:	68 88 00 00 00       	push   $0x88
 80487df:	e9 d0 fe ff ff       	jmp    80486b4 <.plt>

080487e4 <srandom@plt>:
 80487e4:	ff 25 34 a1 04 08    	jmp    *0x804a134
 80487ea:	68 90 00 00 00       	push   $0x90
 80487ef:	e9 c0 fe ff ff       	jmp    80486b4 <.plt>

080487f4 <sprintf@plt>:
 80487f4:	ff 25 38 a1 04 08    	jmp    *0x804a138
 80487fa:	68 98 00 00 00       	push   $0x98
 80487ff:	e9 b0 fe ff ff       	jmp    80486b4 <.plt>

08048804 <fwrite@plt>:
 8048804:	ff 25 3c a1 04 08    	jmp    *0x804a13c
 804880a:	68 a0 00 00 00       	push   $0xa0
 804880f:	e9 a0 fe ff ff       	jmp    80486b4 <.plt>

08048814 <_IO_getc@plt>:
 8048814:	ff 25 40 a1 04 08    	jmp    *0x804a140
 804881a:	68 a8 00 00 00       	push   $0xa8
 804881f:	e9 90 fe ff ff       	jmp    80486b4 <.plt>

08048824 <__ctype_b_loc@plt>:
 8048824:	ff 25 44 a1 04 08    	jmp    *0x804a144
 804882a:	68 b0 00 00 00       	push   $0xb0
 804882f:	e9 80 fe ff ff       	jmp    80486b4 <.plt>

08048834 <rand@plt>:
 8048834:	ff 25 48 a1 04 08    	jmp    *0x804a148
 804883a:	68 b8 00 00 00       	push   $0xb8
 804883f:	e9 70 fe ff ff       	jmp    80486b4 <.plt>

08048844 <alarm@plt>:
 8048844:	ff 25 4c a1 04 08    	jmp    *0x804a14c
 804884a:	68 c0 00 00 00       	push   $0xc0
 804884f:	e9 60 fe ff ff       	jmp    80486b4 <.plt>

08048854 <cuserid@plt>:
 8048854:	ff 25 50 a1 04 08    	jmp    *0x804a150
 804885a:	68 c8 00 00 00       	push   $0xc8
 804885f:	e9 50 fe ff ff       	jmp    80486b4 <.plt>

08048864 <__gmon_start__@plt>:
 8048864:	ff 25 54 a1 04 08    	jmp    *0x804a154
 804886a:	68 d0 00 00 00       	push   $0xd0
 804886f:	e9 40 fe ff ff       	jmp    80486b4 <.plt>

08048874 <strcpy@plt>:
 8048874:	ff 25 58 a1 04 08    	jmp    *0x804a158
 804887a:	68 d8 00 00 00       	push   $0xd8
 804887f:	e9 30 fe ff ff       	jmp    80486b4 <.plt>

Disassembly of section .text:

08048890 <_start>:
 8048890:	31 ed                	xor    %ebp,%ebp
 8048892:	5e                   	pop    %esi
 8048893:	89 e1                	mov    %esp,%ecx
 8048895:	83 e4 f0             	and    $0xfffffff0,%esp
 8048898:	50                   	push   %eax
 8048899:	54                   	push   %esp
 804889a:	52                   	push   %edx
 804889b:	68 b0 94 04 08       	push   $0x80494b0
 80488a0:	68 00 95 04 08       	push   $0x8049500
 80488a5:	51                   	push   %ecx
 80488a6:	56                   	push   %esi
 80488a7:	68 20 91 04 08       	push   $0x8049120
 80488ac:	e8 a3 fe ff ff       	call   8048754 <__libc_start_main@plt>
 80488b1:	f4                   	hlt    
 80488b2:	90                   	nop
 80488b3:	90                   	nop

080488b4 <call_gmon_start>:
 80488b4:	55                   	push   %ebp
 80488b5:	89 e5                	mov    %esp,%ebp
 80488b7:	53                   	push   %ebx
 80488b8:	83 ec 04             	sub    $0x4,%esp
 80488bb:	e8 00 00 00 00       	call   80488c0 <call_gmon_start+0xc>
 80488c0:	5b                   	pop    %ebx
 80488c1:	81 c3 20 18 00 00    	add    $0x1820,%ebx
 80488c7:	8b 93 fc ff ff ff    	mov    -0x4(%ebx),%edx
 80488cd:	85 d2                	test   %edx,%edx
 80488cf:	74 05                	je     80488d6 <call_gmon_start+0x22>
 80488d1:	e8 8e ff ff ff       	call   8048864 <__gmon_start__@plt>
 80488d6:	58                   	pop    %eax
 80488d7:	5b                   	pop    %ebx
 80488d8:	c9                   	leave  
 80488d9:	c3                   	ret    
 80488da:	90                   	nop
 80488db:	90                   	nop
 80488dc:	90                   	nop
 80488dd:	90                   	nop
 80488de:	90                   	nop
 80488df:	90                   	nop

080488e0 <__do_global_dtors_aux>:
 80488e0:	55                   	push   %ebp
 80488e1:	89 e5                	mov    %esp,%ebp
 80488e3:	83 ec 08             	sub    $0x8,%esp
 80488e6:	80 3d a8 a1 04 08 00 	cmpb   $0x0,0x804a1a8
 80488ed:	74 0c                	je     80488fb <__do_global_dtors_aux+0x1b>
 80488ef:	eb 1c                	jmp    804890d <__do_global_dtors_aux+0x2d>
 80488f1:	83 c0 04             	add    $0x4,%eax
 80488f4:	a3 64 a1 04 08       	mov    %eax,0x804a164
 80488f9:	ff d2                	call   *%edx
 80488fb:	a1 64 a1 04 08       	mov    0x804a164,%eax
 8048900:	8b 10                	mov    (%eax),%edx
 8048902:	85 d2                	test   %edx,%edx
 8048904:	75 eb                	jne    80488f1 <__do_global_dtors_aux+0x11>
 8048906:	c6 05 a8 a1 04 08 01 	movb   $0x1,0x804a1a8
 804890d:	c9                   	leave  
 804890e:	c3                   	ret    
 804890f:	90                   	nop

08048910 <frame_dummy>:
 8048910:	55                   	push   %ebp
 8048911:	89 e5                	mov    %esp,%ebp
 8048913:	83 ec 08             	sub    $0x8,%esp
 8048916:	a1 10 a0 04 08       	mov    0x804a010,%eax
 804891b:	85 c0                	test   %eax,%eax
 804891d:	74 12                	je     8048931 <frame_dummy+0x21>
 804891f:	b8 00 00 00 00       	mov    $0x0,%eax
 8048924:	85 c0                	test   %eax,%eax
 8048926:	74 09                	je     8048931 <frame_dummy+0x21>
 8048928:	c7 04 24 10 a0 04 08 	movl   $0x804a010,(%esp)
 804892f:	ff d0                	call   *%eax
 8048931:	c9                   	leave  
 8048932:	c3                   	ret    
 8048933:	90                   	nop
 8048934:	90                   	nop
 8048935:	90                   	nop
 8048936:	90                   	nop
 8048937:	90                   	nop
 8048938:	90                   	nop
 8048939:	90                   	nop
 804893a:	90                   	nop
 804893b:	90                   	nop
 804893c:	90                   	nop
 804893d:	90                   	nop
 804893e:	90                   	nop
 804893f:	90                   	nop

08048940 <save_char>:
 8048940:	8b 0d e0 a1 04 08    	mov    0x804a1e0,%ecx
 8048946:	55                   	push   %ebp
 8048947:	89 e5                	mov    %esp,%ebp
 8048949:	53                   	push   %ebx
 804894a:	88 c3                	mov    %al,%bl
 804894c:	81 f9 ff 03 00 00    	cmp    $0x3ff,%ecx
 8048952:	7f 3b                	jg     804898f <save_char+0x4f>
 8048954:	c0 f8 04             	sar    $0x4,%al
 8048957:	0f be c0             	movsbl %al,%eax
 804895a:	83 e0 0f             	and    $0xf,%eax
 804895d:	0f b6 80 58 9b 04 08 	movzbl 0x8049b58(%eax),%eax
 8048964:	8d 14 49             	lea    (%ecx,%ecx,2),%edx
 8048967:	c6 82 02 a2 04 08 20 	movb   $0x20,0x804a202(%edx)
 804896e:	88 82 00 a2 04 08    	mov    %al,0x804a200(%edx)
 8048974:	0f be c3             	movsbl %bl,%eax
 8048977:	83 e0 0f             	and    $0xf,%eax
 804897a:	0f b6 80 58 9b 04 08 	movzbl 0x8049b58(%eax),%eax
 8048981:	88 82 01 a2 04 08    	mov    %al,0x804a201(%edx)
 8048987:	8d 41 01             	lea    0x1(%ecx),%eax
 804898a:	a3 e0 a1 04 08       	mov    %eax,0x804a1e0
 804898f:	5b                   	pop    %ebx
 8048990:	5d                   	pop    %ebp
 8048991:	c3                   	ret    
 8048992:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8048999:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

080489a0 <entry_check>:
 80489a0:	55                   	push   %ebp
 80489a1:	89 e5                	mov    %esp,%ebp
 80489a3:	8b 45 08             	mov    0x8(%ebp),%eax
 80489a6:	5d                   	pop    %ebp
 80489a7:	a3 6c a1 04 08       	mov    %eax,0x804a16c
 80489ac:	c3                   	ret    
 80489ad:	8d 76 00             	lea    0x0(%esi),%esi

080489b0 <illegalhandler>:
 80489b0:	55                   	push   %ebp
 80489b1:	89 e5                	mov    %esp,%ebp
 80489b3:	83 ec 08             	sub    $0x8,%esp
 80489b6:	c7 04 24 b8 95 04 08 	movl   $0x80495b8,(%esp)
 80489bd:	e8 52 fd ff ff       	call   8048714 <puts@plt>
 80489c2:	c7 04 24 2c 99 04 08 	movl   $0x804992c,(%esp)
 80489c9:	e8 46 fd ff ff       	call   8048714 <puts@plt>
 80489ce:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 80489d5:	e8 ca fd ff ff       	call   80487a4 <exit@plt>
 80489da:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

080489e0 <alarmhandler>:
 80489e0:	55                   	push   %ebp
 80489e1:	89 e5                	mov    %esp,%ebp
 80489e3:	83 ec 08             	sub    $0x8,%esp
 80489e6:	a1 70 a1 04 08       	mov    0x804a170,%eax
 80489eb:	c7 04 24 e4 95 04 08 	movl   $0x80495e4,(%esp)
 80489f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 80489f6:	e8 69 fd ff ff       	call   8048764 <printf@plt>
 80489fb:	c7 04 24 2c 99 04 08 	movl   $0x804992c,(%esp)
 8048a02:	e8 0d fd ff ff       	call   8048714 <puts@plt>
 8048a07:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8048a0e:	e8 91 fd ff ff       	call   80487a4 <exit@plt>
 8048a13:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8048a19:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

08048a20 <seghandler>:
 8048a20:	55                   	push   %ebp
 8048a21:	89 e5                	mov    %esp,%ebp
 8048a23:	83 ec 08             	sub    $0x8,%esp
 8048a26:	c7 04 24 18 96 04 08 	movl   $0x8049618,(%esp)
 8048a2d:	e8 e2 fc ff ff       	call   8048714 <puts@plt>
 8048a32:	c7 04 24 2c 99 04 08 	movl   $0x804992c,(%esp)
 8048a39:	e8 d6 fc ff ff       	call   8048714 <puts@plt>
 8048a3e:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8048a45:	e8 5a fd ff ff       	call   80487a4 <exit@plt>
 8048a4a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

08048a50 <bushandler>:
 8048a50:	55                   	push   %ebp
 8048a51:	89 e5                	mov    %esp,%ebp
 8048a53:	83 ec 08             	sub    $0x8,%esp
 8048a56:	c7 04 24 40 96 04 08 	movl   $0x8049640,(%esp)
 8048a5d:	e8 b2 fc ff ff       	call   8048714 <puts@plt>
 8048a62:	c7 04 24 2c 99 04 08 	movl   $0x804992c,(%esp)
 8048a69:	e8 a6 fc ff ff       	call   8048714 <puts@plt>
 8048a6e:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8048a75:	e8 2a fd ff ff       	call   80487a4 <exit@plt>
 8048a7a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

08048a80 <usage>:
 8048a80:	55                   	push   %ebp
 8048a81:	89 e5                	mov    %esp,%ebp
 8048a83:	83 ec 08             	sub    $0x8,%esp
 8048a86:	89 44 24 04          	mov    %eax,0x4(%esp)
 8048a8a:	c7 04 24 60 96 04 08 	movl   $0x8049660,(%esp)
 8048a91:	e8 ce fc ff ff       	call   8048764 <printf@plt>
 8048a96:	c7 04 24 42 99 04 08 	movl   $0x8049942,(%esp)
 8048a9d:	e8 72 fc ff ff       	call   8048714 <puts@plt>
 8048aa2:	c7 04 24 60 99 04 08 	movl   $0x8049960,(%esp)
 8048aa9:	e8 66 fc ff ff       	call   8048714 <puts@plt>
 8048aae:	c7 04 24 84 96 04 08 	movl   $0x8049684,(%esp)
 8048ab5:	e8 5a fc ff ff       	call   8048714 <puts@plt>
 8048aba:	c7 04 24 ac 96 04 08 	movl   $0x80496ac,(%esp)
 8048ac1:	e8 4e fc ff ff       	call   8048714 <puts@plt>
 8048ac6:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8048acd:	e8 d2 fc ff ff       	call   80487a4 <exit@plt>
 8048ad2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8048ad9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

08048ae0 <validate>:
 8048ae0:	55                   	push   %ebp
 8048ae1:	89 e5                	mov    %esp,%ebp
 8048ae3:	81 ec 48 01 00 00    	sub    $0x148,%esp
 8048ae9:	a1 d0 a1 04 08       	mov    0x804a1d0,%eax
 8048aee:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8048af1:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8048af4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8048af7:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8048afa:	85 c0                	test   %eax,%eax
 8048afc:	0f 84 e4 01 00 00    	je     8048ce6 <validate+0x206>
 8048b02:	83 fb 04             	cmp    $0x4,%ebx
 8048b05:	77 59                	ja     8048b60 <validate+0x80>
 8048b07:	3b 1d 6c a1 04 08    	cmp    0x804a16c,%ebx
 8048b0d:	74 21                	je     8048b30 <validate+0x50>
 8048b0f:	c7 04 24 24 97 04 08 	movl   $0x8049724,(%esp)
 8048b16:	e8 f9 fb ff ff       	call   8048714 <puts@plt>
 8048b1b:	90                   	nop
 8048b1c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8048b20:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8048b23:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8048b26:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8048b29:	89 ec                	mov    %ebp,%esp
 8048b2b:	5d                   	pop    %ebp
 8048b2c:	c3                   	ret    
 8048b2d:	8d 76 00             	lea    0x0(%esi),%esi
 8048b30:	b8 01 00 00 00       	mov    $0x1,%eax
 8048b35:	a3 d8 a1 04 08       	mov    %eax,0x804a1d8
 8048b3a:	8b 04 9d 74 a1 04 08 	mov    0x804a174(,%ebx,4),%eax
 8048b41:	48                   	dec    %eax
 8048b42:	85 c0                	test   %eax,%eax
 8048b44:	89 04 9d 74 a1 04 08 	mov    %eax,0x804a174(,%ebx,4)
 8048b4b:	7e 23                	jle    8048b70 <validate+0x90>
 8048b4d:	c7 04 24 77 99 04 08 	movl   $0x8049977,(%esp)
 8048b54:	e8 bb fb ff ff       	call   8048714 <puts@plt>
 8048b59:	eb c5                	jmp    8048b20 <validate+0x40>
 8048b5b:	90                   	nop
 8048b5c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8048b60:	c7 04 24 fc 96 04 08 	movl   $0x80496fc,(%esp)
 8048b67:	e8 a8 fb ff ff       	call   8048714 <puts@plt>
 8048b6c:	eb b2                	jmp    8048b20 <validate+0x40>
 8048b6e:	89 f6                	mov    %esi,%esi
 8048b70:	8b 3d d4 a1 04 08    	mov    0x804a1d4,%edi
 8048b76:	85 ff                	test   %edi,%edi
 8048b78:	0f 85 8a 01 00 00    	jne    8048d08 <validate+0x228>
 8048b7e:	8b 35 68 a1 04 08    	mov    0x804a168,%esi
 8048b84:	85 f6                	test   %esi,%esi
 8048b86:	0f 84 6b 01 00 00    	je     8048cf7 <validate+0x217>
 8048b8c:	b9 88 99 04 08       	mov    $0x8049988,%ecx
 8048b91:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8048b95:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8048b9c:	e8 33 fb ff ff       	call   80486d4 <tempnam@plt>
 8048ba1:	ba 8f 99 04 08       	mov    $0x804998f,%edx
 8048ba6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8048baa:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 8048bb0:	89 04 24             	mov    %eax,(%esp)
 8048bb3:	e8 1c fc ff ff       	call   80487d4 <fopen@plt>
 8048bb8:	85 c0                	test   %eax,%eax
 8048bba:	89 c6                	mov    %eax,%esi
 8048bbc:	0f 84 7e 01 00 00    	je     8048d40 <validate+0x260>
 8048bc2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8048bc6:	b8 1b 00 00 00       	mov    $0x1b,%eax
 8048bcb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8048bcf:	b8 01 00 00 00       	mov    $0x1,%eax
 8048bd4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8048bd8:	c7 04 24 91 99 04 08 	movl   $0x8049991,(%esp)
 8048bdf:	e8 20 fc ff ff       	call   8048804 <fwrite@plt>
 8048be4:	89 74 24 04          	mov    %esi,0x4(%esp)
 8048be8:	c7 04 24 0a 00 00 00 	movl   $0xa,(%esp)
 8048bef:	e8 50 fb ff ff       	call   8048744 <fputc@plt>
 8048bf4:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8048bfb:	e8 54 fc ff ff       	call   8048854 <cuserid@plt>
 8048c00:	85 c0                	test   %eax,%eax
 8048c02:	0f 84 1f 01 00 00    	je     8048d27 <validate+0x247>
 8048c08:	8d 7d eb             	lea    -0x15(%ebp),%edi
 8048c0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8048c0f:	89 3c 24             	mov    %edi,(%esp)
 8048c12:	e8 5d fc ff ff       	call   8048874 <strcpy@plt>
 8048c17:	b8 ad 99 04 08       	mov    $0x80499ad,%eax
 8048c1c:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8048c20:	bf 94 97 04 08       	mov    $0x8049794,%edi
 8048c25:	89 44 24 04          	mov    %eax,0x4(%esp)
 8048c29:	89 34 24             	mov    %esi,(%esp)
 8048c2c:	e8 93 fa ff ff       	call   80486c4 <fprintf@plt>
 8048c31:	31 c0                	xor    %eax,%eax
 8048c33:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8048c37:	b8 00 a2 04 08       	mov    $0x804a200,%eax
 8048c3c:	89 44 24 18          	mov    %eax,0x18(%esp)
 8048c40:	a1 cc a1 04 08       	mov    0x804a1cc,%eax
 8048c45:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8048c49:	bb bb 99 04 08       	mov    $0x80499bb,%ebx
 8048c4e:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8048c52:	89 34 24             	mov    %esi,(%esp)
 8048c55:	89 44 24 14          	mov    %eax,0x14(%esp)
 8048c59:	a1 d0 a1 04 08       	mov    0x804a1d0,%eax
 8048c5e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8048c62:	b8 6f 3b 00 00       	mov    $0x3b6f,%eax
 8048c67:	89 44 24 08          	mov    %eax,0x8(%esp)
 8048c6b:	e8 54 fa ff ff       	call   80486c4 <fprintf@plt>
 8048c70:	89 34 24             	mov    %esi,(%esp)
 8048c73:	e8 fc fa ff ff       	call   8048774 <fclose@plt>
 8048c78:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 8048c7e:	b9 d2 99 04 08       	mov    $0x80499d2,%ecx
 8048c83:	ba d7 99 04 08       	mov    $0x80499d7,%edx
 8048c88:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8048c8c:	8d 9d eb fe ff ff    	lea    -0x115(%ebp),%ebx
 8048c92:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8048c96:	89 44 24 08          	mov    %eax,0x8(%esp)
 8048c9a:	b8 ee 99 04 08       	mov    $0x80499ee,%eax
 8048c9f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8048ca3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8048ca7:	89 1c 24             	mov    %ebx,(%esp)
 8048caa:	e8 45 fb ff ff       	call   80487f4 <sprintf@plt>
 8048caf:	89 1c 24             	mov    %ebx,(%esp)
 8048cb2:	e8 3d fa ff ff       	call   80486f4 <system@plt>
 8048cb7:	85 c0                	test   %eax,%eax
 8048cb9:	75 5e                	jne    8048d19 <validate+0x239>
 8048cbb:	c7 04 24 01 9a 04 08 	movl   $0x8049a01,(%esp)
 8048cc2:	e8 4d fa ff ff       	call   8048714 <puts@plt>
 8048cc7:	c7 04 24 b4 97 04 08 	movl   $0x80497b4,(%esp)
 8048cce:	e8 41 fa ff ff       	call   8048714 <puts@plt>
 8048cd3:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 8048cd9:	89 04 24             	mov    %eax,(%esp)
 8048cdc:	e8 43 fa ff ff       	call   8048724 <remove@plt>
 8048ce1:	e9 3a fe ff ff       	jmp    8048b20 <validate+0x40>
 8048ce6:	c7 04 24 d0 96 04 08 	movl   $0x80496d0,(%esp)
 8048ced:	e8 22 fa ff ff       	call   8048714 <puts@plt>
 8048cf2:	e9 29 fe ff ff       	jmp    8048b20 <validate+0x40>
 8048cf7:	c7 04 24 24 98 04 08 	movl   $0x8049824,(%esp)
 8048cfe:	e8 11 fa ff ff       	call   8048714 <puts@plt>
 8048d03:	e9 18 fe ff ff       	jmp    8048b20 <validate+0x40>
 8048d08:	c7 04 24 82 99 04 08 	movl   $0x8049982,(%esp)
 8048d0f:	e8 00 fa ff ff       	call   8048714 <puts@plt>
 8048d14:	e9 07 fe ff ff       	jmp    8048b20 <validate+0x40>
 8048d19:	c7 04 24 e4 97 04 08 	movl   $0x80497e4,(%esp)
 8048d20:	e8 ef f9 ff ff       	call   8048714 <puts@plt>
 8048d25:	eb ac                	jmp    8048cd3 <validate+0x1f3>
 8048d27:	8d 7d eb             	lea    -0x15(%ebp),%edi
 8048d2a:	c7 45 eb 6e 6f 62 6f 	movl   $0x6f626f6e,-0x15(%ebp)
 8048d31:	66 c7 45 ef 64 79    	movw   $0x7964,-0x11(%ebp)
 8048d37:	c6 45 f1 00          	movb   $0x0,-0xf(%ebp)
 8048d3b:	e9 d7 fe ff ff       	jmp    8048c17 <validate+0x137>
 8048d40:	c7 04 24 60 97 04 08 	movl   $0x8049760,(%esp)
 8048d47:	e8 18 fa ff ff       	call   8048764 <printf@plt>
 8048d4c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8048d53:	e8 4c fa ff ff       	call   80487a4 <exit@plt>
 8048d58:	90                   	nop
 8048d59:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

08048d60 <bang>:
 8048d60:	55                   	push   %ebp
 8048d61:	89 e5                	mov    %esp,%ebp
 8048d63:	83 ec 08             	sub    $0x8,%esp
 8048d66:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 8048d6d:	e8 2e fc ff ff       	call   80489a0 <entry_check>
 8048d72:	a1 dc a1 04 08       	mov    0x804a1dc,%eax
 8048d77:	3b 05 cc a1 04 08    	cmp    0x804a1cc,%eax
 8048d7d:	74 21                	je     8048da0 <bang+0x40>
 8048d7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8048d83:	c7 04 24 0b 9a 04 08 	movl   $0x8049a0b,(%esp)
 8048d8a:	e8 d5 f9 ff ff       	call   8048764 <printf@plt>
 8048d8f:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8048d96:	e8 09 fa ff ff       	call   80487a4 <exit@plt>
 8048d9b:	90                   	nop
 8048d9c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8048da0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8048da4:	c7 04 24 70 98 04 08 	movl   $0x8049870,(%esp)
 8048dab:	e8 b4 f9 ff ff       	call   8048764 <printf@plt>
 8048db0:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 8048db7:	e8 24 fd ff ff       	call   8048ae0 <validate>
 8048dbc:	eb d1                	jmp    8048d8f <bang+0x2f>
 8048dbe:	89 f6                	mov    %esi,%esi

08048dc0 <fizz>:
 8048dc0:	55                   	push   %ebp
 8048dc1:	89 e5                	mov    %esp,%ebp
 8048dc3:	53                   	push   %ebx
 8048dc4:	83 ec 14             	sub    $0x14,%esp
 8048dc7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8048dca:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8048dd1:	e8 ca fb ff ff       	call   80489a0 <entry_check>
 8048dd6:	3b 1d cc a1 04 08    	cmp    0x804a1cc,%ebx
 8048ddc:	74 22                	je     8048e00 <fizz+0x40>
 8048dde:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8048de2:	c7 04 24 98 98 04 08 	movl   $0x8049898,(%esp)
 8048de9:	e8 76 f9 ff ff       	call   8048764 <printf@plt>
 8048dee:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8048df5:	e8 aa f9 ff ff       	call   80487a4 <exit@plt>
 8048dfa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8048e00:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8048e04:	c7 04 24 29 9a 04 08 	movl   $0x8049a29,(%esp)
 8048e0b:	e8 54 f9 ff ff       	call   8048764 <printf@plt>
 8048e10:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8048e17:	e8 c4 fc ff ff       	call   8048ae0 <validate>
 8048e1c:	eb d0                	jmp    8048dee <fizz+0x2e>
 8048e1e:	89 f6                	mov    %esi,%esi

08048e20 <smoke>:
 8048e20:	55                   	push   %ebp
 8048e21:	89 e5                	mov    %esp,%ebp
 8048e23:	83 ec 08             	sub    $0x8,%esp
 8048e26:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8048e2d:	e8 6e fb ff ff       	call   80489a0 <entry_check>
 8048e32:	c7 04 24 47 9a 04 08 	movl   $0x8049a47,(%esp)
 8048e39:	e8 d6 f8 ff ff       	call   8048714 <puts@plt>
 8048e3e:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8048e45:	e8 96 fc ff ff       	call   8048ae0 <validate>
 8048e4a:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8048e51:	e8 4e f9 ff ff       	call   80487a4 <exit@plt>
 8048e56:	8d 76 00             	lea    0x0(%esi),%esi
 8048e59:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

08048e60 <Gets>:
 8048e60:	55                   	push   %ebp
 8048e61:	89 e5                	mov    %esp,%ebp
 8048e63:	57                   	push   %edi
 8048e64:	56                   	push   %esi
 8048e65:	53                   	push   %ebx
 8048e66:	31 db                	xor    %ebx,%ebx
 8048e68:	83 ec 0c             	sub    $0xc,%esp
 8048e6b:	8b 0d c8 a1 04 08    	mov    0x804a1c8,%ecx
 8048e71:	89 1d e0 a1 04 08    	mov    %ebx,0x804a1e0
 8048e77:	8b 75 08             	mov    0x8(%ebp),%esi
 8048e7a:	85 c9                	test   %ecx,%ecx
 8048e7c:	74 72                	je     8048ef0 <Gets+0x90>
 8048e7e:	bf 01 00 00 00       	mov    $0x1,%edi
 8048e83:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8048e8a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8048e90:	a1 c0 a1 04 08       	mov    0x804a1c0,%eax
 8048e95:	89 04 24             	mov    %eax,(%esp)
 8048e98:	e8 77 f9 ff ff       	call   8048814 <_IO_getc@plt>
 8048e9d:	83 f8 ff             	cmp    $0xffffffff,%eax
 8048ea0:	89 c3                	mov    %eax,%ebx
 8048ea2:	74 6c                	je     8048f10 <Gets+0xb0>
 8048ea4:	83 f8 0a             	cmp    $0xa,%eax
 8048ea7:	74 67                	je     8048f10 <Gets+0xb0>
 8048ea9:	e8 76 f9 ff ff       	call   8048824 <__ctype_b_loc@plt>
 8048eae:	8b 00                	mov    (%eax),%eax
 8048eb0:	f6 44 58 01 10       	testb  $0x10,0x1(%eax,%ebx,2)
 8048eb5:	74 d9                	je     8048e90 <Gets+0x30>
 8048eb7:	8d 43 d0             	lea    -0x30(%ebx),%eax
 8048eba:	83 f8 09             	cmp    $0x9,%eax
 8048ebd:	89 c2                	mov    %eax,%edx
 8048ebf:	76 0f                	jbe    8048ed0 <Gets+0x70>
 8048ec1:	8d 43 bf             	lea    -0x41(%ebx),%eax
 8048ec4:	83 f8 05             	cmp    $0x5,%eax
 8048ec7:	8d 53 c9             	lea    -0x37(%ebx),%edx
 8048eca:	76 04                	jbe    8048ed0 <Gets+0x70>
 8048ecc:	8d 53 a9             	lea    -0x57(%ebx),%edx
 8048ecf:	90                   	nop
 8048ed0:	85 ff                	test   %edi,%edi
 8048ed2:	74 5c                	je     8048f30 <Gets+0xd0>
 8048ed4:	31 ff                	xor    %edi,%edi
 8048ed6:	89 55 f0             	mov    %edx,-0x10(%ebp)
 8048ed9:	eb b5                	jmp    8048e90 <Gets+0x30>
 8048edb:	90                   	nop
 8048edc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8048ee0:	83 f8 0a             	cmp    $0xa,%eax
 8048ee3:	74 2b                	je     8048f10 <Gets+0xb0>
 8048ee5:	88 16                	mov    %dl,(%esi)
 8048ee7:	0f be c2             	movsbl %dl,%eax
 8048eea:	46                   	inc    %esi
 8048eeb:	e8 50 fa ff ff       	call   8048940 <save_char>
 8048ef0:	a1 c0 a1 04 08       	mov    0x804a1c0,%eax
 8048ef5:	89 04 24             	mov    %eax,(%esp)
 8048ef8:	e8 17 f9 ff ff       	call   8048814 <_IO_getc@plt>
 8048efd:	83 f8 ff             	cmp    $0xffffffff,%eax
 8048f00:	89 c2                	mov    %eax,%edx
 8048f02:	75 dc                	jne    8048ee0 <Gets+0x80>
 8048f04:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8048f0a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi
 8048f10:	c6 06 00             	movb   $0x0,(%esi)
 8048f13:	31 d2                	xor    %edx,%edx
 8048f15:	a1 e0 a1 04 08       	mov    0x804a1e0,%eax
 8048f1a:	88 94 40 00 a2 04 08 	mov    %dl,0x804a200(%eax,%eax,2)
 8048f21:	8b 45 08             	mov    0x8(%ebp),%eax
 8048f24:	83 c4 0c             	add    $0xc,%esp
 8048f27:	5b                   	pop    %ebx
 8048f28:	5e                   	pop    %esi
 8048f29:	5f                   	pop    %edi
 8048f2a:	5d                   	pop    %ebp
 8048f2b:	c3                   	ret    
 8048f2c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8048f30:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8048f33:	bf 01 00 00 00       	mov    $0x1,%edi
 8048f38:	c1 e0 04             	shl    $0x4,%eax
 8048f3b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8048f3e:	88 06                	mov    %al,(%esi)
 8048f40:	0f be c0             	movsbl %al,%eax
 8048f43:	46                   	inc    %esi
 8048f44:	e8 f7 f9 ff ff       	call   8048940 <save_char>
 8048f49:	e9 42 ff ff ff       	jmp    8048e90 <Gets+0x30>
 8048f4e:	89 f6                	mov    %esi,%esi

08048f50 <getbufn>:
 8048f50:	55                   	push   %ebp
 8048f51:	89 e5                	mov    %esp,%ebp
 8048f53:	81 ec 08 02 00 00    	sub    $0x208,%esp
 8048f59:	8d 85 00 fe ff ff    	lea    -0x200(%ebp),%eax
 8048f5f:	89 04 24             	mov    %eax,(%esp)
 8048f62:	e8 f9 fe ff ff       	call   8048e60 <Gets>
 8048f67:	b8 01 00 00 00       	mov    $0x1,%eax
 8048f6c:	c9                   	leave  
 8048f6d:	c3                   	ret    
 8048f6e:	89 f6                	mov    %esi,%esi

08048f70 <testn>:
 8048f70:	55                   	push   %ebp
 8048f71:	89 e5                	mov    %esp,%ebp
 8048f73:	83 ec 18             	sub    $0x18,%esp
 8048f76:	c7 45 fc ef be ad de 	movl   $0xdeadbeef,-0x4(%ebp)
 8048f7d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8048f84:	e8 17 fa ff ff       	call   80489a0 <entry_check>
 8048f89:	e8 c2 ff ff ff       	call   8048f50 <getbufn>
 8048f8e:	89 c2                	mov    %eax,%edx
 8048f90:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8048f93:	3d ef be ad de       	cmp    $0xdeadbeef,%eax
 8048f98:	74 0e                	je     8048fa8 <testn+0x38>
 8048f9a:	c7 04 24 b8 98 04 08 	movl   $0x80498b8,(%esp)
 8048fa1:	e8 6e f7 ff ff       	call   8048714 <puts@plt>
 8048fa6:	c9                   	leave  
 8048fa7:	c3                   	ret    
 8048fa8:	3b 15 cc a1 04 08    	cmp    0x804a1cc,%edx
 8048fae:	74 12                	je     8048fc2 <testn+0x52>
 8048fb0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8048fb4:	c7 04 24 62 9a 04 08 	movl   $0x8049a62,(%esp)
 8048fbb:	e8 a4 f7 ff ff       	call   8048764 <printf@plt>
 8048fc0:	c9                   	leave  
 8048fc1:	c3                   	ret    
 8048fc2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8048fc6:	c7 04 24 e4 98 04 08 	movl   $0x80498e4,(%esp)
 8048fcd:	e8 92 f7 ff ff       	call   8048764 <printf@plt>
 8048fd2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8048fd9:	e8 02 fb ff ff       	call   8048ae0 <validate>
 8048fde:	c9                   	leave  
 8048fdf:	c3                   	ret    

08048fe0 <getbuf>:
 8048fe0:	55                   	push   %ebp
 8048fe1:	89 e5                	mov    %esp,%ebp
 8048fe3:	83 ec 18             	sub    $0x18,%esp
 8048fe6:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8048fe9:	89 04 24             	mov    %eax,(%esp)
 8048fec:	e8 6f fe ff ff       	call   8048e60 <Gets>
 8048ff1:	b8 01 00 00 00       	mov    $0x1,%eax
 8048ff6:	c9                   	leave  
 8048ff7:	c3                   	ret    
 8048ff8:	90                   	nop
 8048ff9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

08049000 <test>:
 8049000:	55                   	push   %ebp
 8049001:	89 e5                	mov    %esp,%ebp
 8049003:	83 ec 18             	sub    $0x18,%esp
 8049006:	c7 45 fc ef be ad de 	movl   $0xdeadbeef,-0x4(%ebp)
 804900d:	c7 04 24 03 00 00 00 	movl   $0x3,(%esp)
 8049014:	e8 87 f9 ff ff       	call   80489a0 <entry_check>
 8049019:	e8 c2 ff ff ff       	call   8048fe0 <getbuf>
 804901e:	89 c2                	mov    %eax,%edx
 8049020:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8049023:	3d ef be ad de       	cmp    $0xdeadbeef,%eax
 8049028:	74 0e                	je     8049038 <test+0x38>
 804902a:	c7 04 24 b8 98 04 08 	movl   $0x80498b8,(%esp)
 8049031:	e8 de f6 ff ff       	call   8048714 <puts@plt>
 8049036:	c9                   	leave  
 8049037:	c3                   	ret    
 8049038:	3b 15 cc a1 04 08    	cmp    0x804a1cc,%edx
 804903e:	74 12                	je     8049052 <test+0x52>
 8049040:	89 54 24 04          	mov    %edx,0x4(%esp)
 8049044:	c7 04 24 9b 9a 04 08 	movl   $0x8049a9b,(%esp)
 804904b:	e8 14 f7 ff ff       	call   8048764 <printf@plt>
 8049050:	c9                   	leave  
 8049051:	c3                   	ret    
 8049052:	89 54 24 04          	mov    %edx,0x4(%esp)
 8049056:	c7 04 24 7e 9a 04 08 	movl   $0x8049a7e,(%esp)
 804905d:	e8 02 f7 ff ff       	call   8048764 <printf@plt>
 8049062:	c7 04 24 03 00 00 00 	movl   $0x3,(%esp)
 8049069:	e8 72 fa ff ff       	call   8048ae0 <validate>
 804906e:	c9                   	leave  
 804906f:	c3                   	ret    

08049070 <launch>:
 8049070:	55                   	push   %ebp
 8049071:	89 e5                	mov    %esp,%ebp
 8049073:	8d 4d bc             	lea    -0x44(%ebp),%ecx
 8049076:	81 e1 f8 3f 00 00    	and    $0x3ff8,%ecx
 804907c:	01 d1                	add    %edx,%ecx
 804907e:	ba f4 00 00 00       	mov    $0xf4,%edx
 8049083:	53                   	push   %ebx
 8049084:	89 c3                	mov    %eax,%ebx
 8049086:	8d 41 1e             	lea    0x1e(%ecx),%eax
 8049089:	83 ec 54             	sub    $0x54,%esp
 804908c:	83 e0 f0             	and    $0xfffffff0,%eax
 804908f:	29 c4                	sub    %eax,%esp
 8049091:	8d 44 24 1b          	lea    0x1b(%esp),%eax
 8049095:	83 e0 f0             	and    $0xfffffff0,%eax
 8049098:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 804909c:	89 54 24 04          	mov    %edx,0x4(%esp)
 80490a0:	89 04 24             	mov    %eax,(%esp)
 80490a3:	e8 1c f7 ff ff       	call   80487c4 <memset@plt>
 80490a8:	a1 c4 a1 04 08       	mov    0x804a1c4,%eax
 80490ad:	85 c0                	test   %eax,%eax
 80490af:	75 1f                	jne    80490d0 <launch+0x60>
 80490b1:	a1 c8 a1 04 08       	mov    0x804a1c8,%eax
 80490b6:	85 c0                	test   %eax,%eax
 80490b8:	75 4d                	jne    8049107 <launch+0x97>
 80490ba:	c7 04 24 c7 9a 04 08 	movl   $0x8049ac7,(%esp)
 80490c1:	e8 9e f6 ff ff       	call   8048764 <printf@plt>
 80490c6:	8d 76 00             	lea    0x0(%esi),%esi
 80490c9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 80490d0:	85 db                	test   %ebx,%ebx
 80490d2:	74 2c                	je     8049100 <launch+0x90>
 80490d4:	e8 97 fe ff ff       	call   8048f70 <testn>
 80490d9:	a1 d8 a1 04 08       	mov    0x804a1d8,%eax
 80490de:	85 c0                	test   %eax,%eax
 80490e0:	75 13                	jne    80490f5 <launch+0x85>
 80490e2:	c7 04 24 2c 99 04 08 	movl   $0x804992c,(%esp)
 80490e9:	e8 26 f6 ff ff       	call   8048714 <puts@plt>
 80490ee:	31 c0                	xor    %eax,%eax
 80490f0:	a3 d8 a1 04 08       	mov    %eax,0x804a1d8
 80490f5:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 80490f8:	c9                   	leave  
 80490f9:	c3                   	ret    
 80490fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8049100:	e8 fb fe ff ff       	call   8049000 <test>
 8049105:	eb d2                	jmp    80490d9 <launch+0x69>
 8049107:	c7 04 24 b6 9a 04 08 	movl   $0x8049ab6,(%esp)
 804910e:	e8 51 f6 ff ff       	call   8048764 <printf@plt>
 8049113:	eb bb                	jmp    80490d0 <launch+0x60>
 8049115:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8049119:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

08049120 <main>:
 8049120:	8d 4c 24 04          	lea    0x4(%esp),%ecx
 8049124:	83 e4 f0             	and    $0xfffffff0,%esp
 8049127:	ff 71 fc             	pushl  -0x4(%ecx)
 804912a:	b8 20 8a 04 08       	mov    $0x8048a20,%eax
 804912f:	55                   	push   %ebp
 8049130:	89 e5                	mov    %esp,%ebp
 8049132:	57                   	push   %edi
 8049133:	bf b0 89 04 08       	mov    $0x80489b0,%edi
 8049138:	56                   	push   %esi
 8049139:	53                   	push   %ebx
 804913a:	51                   	push   %ecx
 804913b:	83 ec 18             	sub    $0x18,%esp
 804913e:	8b 31                	mov    (%ecx),%esi
 8049140:	8b 59 04             	mov    0x4(%ecx),%ebx
 8049143:	89 44 24 04          	mov    %eax,0x4(%esp)
 8049147:	c7 04 24 0b 00 00 00 	movl   $0xb,(%esp)
 804914e:	e8 91 f5 ff ff       	call   80486e4 <signal@plt>
 8049153:	b8 50 8a 04 08       	mov    $0x8048a50,%eax
 8049158:	89 44 24 04          	mov    %eax,0x4(%esp)
 804915c:	c7 04 24 07 00 00 00 	movl   $0x7,(%esp)
 8049163:	e8 7c f5 ff ff       	call   80486e4 <signal@plt>
 8049168:	b8 e0 89 04 08       	mov    $0x80489e0,%eax
 804916d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8049171:	c7 04 24 0e 00 00 00 	movl   $0xe,(%esp)
 8049178:	e8 67 f5 ff ff       	call   80486e4 <signal@plt>
 804917d:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8049181:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8049188:	e8 57 f5 ff ff       	call   80486e4 <signal@plt>
 804918d:	a1 a0 a1 04 08       	mov    0x804a1a0,%eax
 8049192:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8049199:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 80491a0:	a3 c0 a1 04 08       	mov    %eax,0x804a1c0
 80491a5:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 80491a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 80491b0:	b8 03 9b 04 08       	mov    $0x8049b03,%eax
 80491b5:	89 44 24 08          	mov    %eax,0x8(%esp)
 80491b9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80491bd:	89 34 24             	mov    %esi,(%esp)
 80491c0:	e8 6f f5 ff ff       	call   8048734 <getopt@plt>
 80491c5:	3c ff                	cmp    $0xff,%al
 80491c7:	0f 84 0e 01 00 00    	je     80492db <main+0x1bb>
 80491cd:	2c 66                	sub    $0x66,%al
 80491cf:	3c 12                	cmp    $0x12,%al
 80491d1:	77 0d                	ja     80491e0 <main+0xc0>
 80491d3:	0f b6 c0             	movzbl %al,%eax
 80491d6:	ff 24 85 0c 9b 04 08 	jmp    *0x8049b0c(,%eax,4)
 80491dd:	8d 76 00             	lea    0x0(%esi),%esi
 80491e0:	8b 03                	mov    (%ebx),%eax
 80491e2:	e8 99 f8 ff ff       	call   8048a80 <usage>
 80491e7:	eb c7                	jmp    80491b0 <main+0x90>
 80491e9:	b9 01 00 00 00       	mov    $0x1,%ecx
 80491ee:	ba 01 00 00 00       	mov    $0x1,%edx
 80491f3:	b8 01 00 00 00       	mov    $0x1,%eax
 80491f8:	89 0d d4 a1 04 08    	mov    %ecx,0x804a1d4
 80491fe:	89 15 c4 a1 04 08    	mov    %edx,0x804a1c4
 8049204:	a3 70 a1 04 08       	mov    %eax,0x804a170
 8049209:	eb a5                	jmp    80491b0 <main+0x90>
 804920b:	b8 ec 9a 04 08       	mov    $0x8049aec,%eax
 8049210:	89 44 24 04          	mov    %eax,0x4(%esp)
 8049214:	a1 a4 a1 04 08       	mov    0x804a1a4,%eax
 8049219:	89 04 24             	mov    %eax,(%esp)
 804921c:	e8 b3 f5 ff ff       	call   80487d4 <fopen@plt>
 8049221:	85 c0                	test   %eax,%eax
 8049223:	a3 c0 a1 04 08       	mov    %eax,0x804a1c0
 8049228:	75 86                	jne    80491b0 <main+0x90>
 804922a:	a1 a4 a1 04 08       	mov    0x804a1a4,%eax
 804922f:	c7 04 24 ee 9a 04 08 	movl   $0x8049aee,(%esp)
 8049236:	89 44 24 04          	mov    %eax,0x4(%esp)
 804923a:	e8 25 f5 ff ff       	call   8048764 <printf@plt>
 804923f:	8b 03                	mov    (%ebx),%eax
 8049241:	e8 3a f8 ff ff       	call   8048a80 <usage>
 8049246:	e9 65 ff ff ff       	jmp    80491b0 <main+0x90>
 804924b:	90                   	nop
 804924c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8049250:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
 8049257:	c7 45 ec 05 00 00 00 	movl   $0x5,-0x14(%ebp)
 804925e:	89 f6                	mov    %esi,%esi
 8049260:	e9 4b ff ff ff       	jmp    80491b0 <main+0x90>
 8049265:	b8 01 00 00 00       	mov    $0x1,%eax
 804926a:	a3 c4 a1 04 08       	mov    %eax,0x804a1c4
 804926f:	e9 3c ff ff ff       	jmp    80491b0 <main+0x90>
 8049274:	b8 01 00 00 00       	mov    $0x1,%eax
 8049279:	a3 68 a1 04 08       	mov    %eax,0x804a168
 804927e:	e9 2d ff ff ff       	jmp    80491b0 <main+0x90>
 8049283:	a1 a4 a1 04 08       	mov    0x804a1a4,%eax
 8049288:	89 04 24             	mov    %eax,(%esp)
 804928b:	e8 f4 f4 ff ff       	call   8048784 <__strdup@plt>
 8049290:	a3 d0 a1 04 08       	mov    %eax,0x804a1d0
 8049295:	89 44 24 04          	mov    %eax,0x4(%esp)
 8049299:	c7 04 24 d4 9a 04 08 	movl   $0x8049ad4,(%esp)
 80492a0:	e8 bf f4 ff ff       	call   8048764 <printf@plt>
 80492a5:	a1 d0 a1 04 08       	mov    0x804a1d0,%eax
 80492aa:	89 04 24             	mov    %eax,(%esp)
 80492ad:	e8 be 01 00 00       	call   8049470 <gencookie>
 80492b2:	a3 cc a1 04 08       	mov    %eax,0x804a1cc
 80492b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 80492bb:	c7 04 24 de 9a 04 08 	movl   $0x8049ade,(%esp)
 80492c2:	e8 9d f4 ff ff       	call   8048764 <printf@plt>
 80492c7:	e9 e4 fe ff ff       	jmp    80491b0 <main+0x90>
 80492cc:	b8 01 00 00 00       	mov    $0x1,%eax
 80492d1:	a3 c8 a1 04 08       	mov    %eax,0x804a1c8
 80492d6:	e9 d5 fe ff ff       	jmp    80491b0 <main+0x90>
 80492db:	8b 3d d0 a1 04 08    	mov    0x804a1d0,%edi
 80492e1:	85 ff                	test   %edi,%edi
 80492e3:	0f 84 d5 00 00 00    	je     80493be <main+0x29e>
 80492e9:	a1 cc a1 04 08       	mov    0x804a1cc,%eax
 80492ee:	be 04 00 00 00       	mov    $0x4,%esi
 80492f3:	89 04 24             	mov    %eax,(%esp)
 80492f6:	e8 e9 f4 ff ff       	call   80487e4 <srandom@plt>
 80492fb:	e8 04 f4 ff ff       	call   8048704 <random@plt>
 8049300:	25 f8 0f 00 00       	and    $0xff8,%eax
 8049305:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8049308:	89 74 24 04          	mov    %esi,0x4(%esp)
 804930c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 804930f:	89 04 24             	mov    %eax,(%esp)
 8049312:	e8 9d f4 ff ff       	call   80487b4 <calloc@plt>
 8049317:	89 c7                	mov    %eax,%edi
 8049319:	8b 45 ec             	mov    -0x14(%ebp),%eax
 804931c:	83 e8 02             	sub    $0x2,%eax
 804931f:	85 c0                	test   %eax,%eax
 8049321:	7e 1e                	jle    8049341 <main+0x221>
 8049323:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8049326:	bb 01 00 00 00       	mov    $0x1,%ebx
 804932b:	8d 72 ff             	lea    -0x1(%edx),%esi
 804932e:	89 f6                	mov    %esi,%esi
 8049330:	e8 cf f3 ff ff       	call   8048704 <random@plt>
 8049335:	83 e0 38             	and    $0x38,%eax
 8049338:	89 44 9f fc          	mov    %eax,-0x4(%edi,%ebx,4)
 804933c:	43                   	inc    %ebx
 804933d:	39 de                	cmp    %ebx,%esi
 804933f:	75 ef                	jne    8049330 <main+0x210>
 8049341:	83 7d ec 01          	cmpl   $0x1,-0x14(%ebp)
 8049345:	7e 4d                	jle    8049394 <main+0x274>
 8049347:	8b 55 ec             	mov    -0x14(%ebp),%edx
 804934a:	8d 04 97             	lea    (%edi,%edx,4),%eax
 804934d:	c7 40 f8 38 00 00 00 	movl   $0x38,-0x8(%eax)
 8049354:	c7 40 fc 00 00 00 00 	movl   $0x0,-0x4(%eax)
 804935b:	a1 70 a1 04 08       	mov    0x804a170,%eax
 8049360:	89 04 24             	mov    %eax,(%esp)
 8049363:	e8 dc f4 ff ff       	call   8048844 <alarm@plt>
 8049368:	31 db                	xor    %ebx,%ebx
 804936a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8049370:	8b 0c 9f             	mov    (%edi,%ebx,4),%ecx
 8049373:	43                   	inc    %ebx
 8049374:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8049377:	8b 45 e8             	mov    -0x18(%ebp),%eax
 804937a:	01 ca                	add    %ecx,%edx
 804937c:	e8 ef fc ff ff       	call   8049070 <launch>
 8049381:	3b 5d ec             	cmp    -0x14(%ebp),%ebx
 8049384:	7c ea                	jl     8049370 <main+0x250>
 8049386:	83 c4 18             	add    $0x18,%esp
 8049389:	31 c0                	xor    %eax,%eax
 804938b:	59                   	pop    %ecx
 804938c:	5b                   	pop    %ebx
 804938d:	5e                   	pop    %esi
 804938e:	5f                   	pop    %edi
 804938f:	5d                   	pop    %ebp
 8049390:	8d 61 fc             	lea    -0x4(%ecx),%esp
 8049393:	c3                   	ret    
 8049394:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8049397:	31 db                	xor    %ebx,%ebx
 8049399:	89 5c 87 fc          	mov    %ebx,-0x4(%edi,%eax,4)
 804939d:	a1 70 a1 04 08       	mov    0x804a170,%eax
 80493a2:	89 04 24             	mov    %eax,(%esp)
 80493a5:	e8 9a f4 ff ff       	call   8048844 <alarm@plt>
 80493aa:	83 7d ec 01          	cmpl   $0x1,-0x14(%ebp)
 80493ae:	74 b8                	je     8049368 <main+0x248>
 80493b0:	83 c4 18             	add    $0x18,%esp
 80493b3:	31 c0                	xor    %eax,%eax
 80493b5:	59                   	pop    %ecx
 80493b6:	5b                   	pop    %ebx
 80493b7:	5e                   	pop    %esi
 80493b8:	5f                   	pop    %edi
 80493b9:	5d                   	pop    %ebp
 80493ba:	8d 61 fc             	lea    -0x4(%ecx),%esp
 80493bd:	c3                   	ret    
 80493be:	c7 04 24 04 99 04 08 	movl   $0x8049904,(%esp)
 80493c5:	e8 4a f3 ff ff       	call   8048714 <puts@plt>
 80493ca:	8b 03                	mov    (%ebx),%eax
 80493cc:	e8 af f6 ff ff       	call   8048a80 <usage>
 80493d1:	e9 13 ff ff ff       	jmp    80492e9 <main+0x1c9>
 80493d6:	90                   	nop
 80493d7:	90                   	nop
 80493d8:	90                   	nop
 80493d9:	90                   	nop
 80493da:	90                   	nop
 80493db:	90                   	nop
 80493dc:	90                   	nop
 80493dd:	90                   	nop
 80493de:	90                   	nop
 80493df:	90                   	nop

080493e0 <hash>:
 80493e0:	55                   	push   %ebp
 80493e1:	89 e5                	mov    %esp,%ebp
 80493e3:	8b 45 08             	mov    0x8(%ebp),%eax
 80493e6:	56                   	push   %esi
 80493e7:	31 f6                	xor    %esi,%esi
 80493e9:	53                   	push   %ebx
 80493ea:	0f b6 18             	movzbl (%eax),%ebx
 80493ed:	84 db                	test   %bl,%bl
 80493ef:	74 2b                	je     804941c <hash+0x3c>
 80493f1:	89 c1                	mov    %eax,%ecx
 80493f3:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 80493f9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8049400:	8d 04 76             	lea    (%esi,%esi,2),%eax
 8049403:	89 c2                	mov    %eax,%edx
 8049405:	c1 e2 04             	shl    $0x4,%edx
 8049408:	01 d0                	add    %edx,%eax
 804940a:	0f be d3             	movsbl %bl,%edx
 804940d:	0f b6 59 01          	movzbl 0x1(%ecx),%ebx
 8049411:	8d 04 46             	lea    (%esi,%eax,2),%eax
 8049414:	41                   	inc    %ecx
 8049415:	8d 34 10             	lea    (%eax,%edx,1),%esi
 8049418:	84 db                	test   %bl,%bl
 804941a:	75 e4                	jne    8049400 <hash+0x20>
 804941c:	5b                   	pop    %ebx
 804941d:	89 f0                	mov    %esi,%eax
 804941f:	5e                   	pop    %esi
 8049420:	5d                   	pop    %ebp
 8049421:	c3                   	ret    
 8049422:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8049429:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

08049430 <check>:
 8049430:	55                   	push   %ebp
 8049431:	89 e5                	mov    %esp,%ebp
 8049433:	8b 55 08             	mov    0x8(%ebp),%edx
 8049436:	89 d0                	mov    %edx,%eax
 8049438:	c1 e8 1c             	shr    $0x1c,%eax
 804943b:	74 23                	je     8049460 <check+0x30>
 804943d:	31 c9                	xor    %ecx,%ecx
 804943f:	90                   	nop
 8049440:	89 d0                	mov    %edx,%eax
 8049442:	d3 e8                	shr    %cl,%eax
 8049444:	25 ff 00 00 00       	and    $0xff,%eax
 8049449:	83 f8 0a             	cmp    $0xa,%eax
 804944c:	74 12                	je     8049460 <check+0x30>
 804944e:	83 c1 08             	add    $0x8,%ecx
 8049451:	83 f9 20             	cmp    $0x20,%ecx
 8049454:	75 ea                	jne    8049440 <check+0x10>
 8049456:	5d                   	pop    %ebp
 8049457:	b8 01 00 00 00       	mov    $0x1,%eax
 804945c:	c3                   	ret    
 804945d:	8d 76 00             	lea    0x0(%esi),%esi
 8049460:	5d                   	pop    %ebp
 8049461:	31 c0                	xor    %eax,%eax
 8049463:	c3                   	ret    
 8049464:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 804946a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

08049470 <gencookie>:
 8049470:	55                   	push   %ebp
 8049471:	89 e5                	mov    %esp,%ebp
 8049473:	53                   	push   %ebx
 8049474:	83 ec 04             	sub    $0x4,%esp
 8049477:	8b 45 08             	mov    0x8(%ebp),%eax
 804947a:	89 04 24             	mov    %eax,(%esp)
 804947d:	e8 5e ff ff ff       	call   80493e0 <hash>
 8049482:	89 04 24             	mov    %eax,(%esp)
 8049485:	e8 0a f3 ff ff       	call   8048794 <srand@plt>
 804948a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8049490:	e8 9f f3 ff ff       	call   8048834 <rand@plt>
 8049495:	89 c3                	mov    %eax,%ebx
 8049497:	89 04 24             	mov    %eax,(%esp)
 804949a:	e8 91 ff ff ff       	call   8049430 <check>
 804949f:	85 c0                	test   %eax,%eax
 80494a1:	74 ed                	je     8049490 <gencookie+0x20>
 80494a3:	5a                   	pop    %edx
 80494a4:	89 d8                	mov    %ebx,%eax
 80494a6:	5b                   	pop    %ebx
 80494a7:	5d                   	pop    %ebp
 80494a8:	c3                   	ret    
 80494a9:	90                   	nop
 80494aa:	90                   	nop
 80494ab:	90                   	nop
 80494ac:	90                   	nop
 80494ad:	90                   	nop
 80494ae:	90                   	nop
 80494af:	90                   	nop

080494b0 <__libc_csu_fini>:
 80494b0:	55                   	push   %ebp
 80494b1:	89 e5                	mov    %esp,%ebp
 80494b3:	57                   	push   %edi
 80494b4:	56                   	push   %esi
 80494b5:	53                   	push   %ebx
 80494b6:	e8 98 00 00 00       	call   8049553 <__i686.get_pc_thunk.bx>
 80494bb:	81 c3 25 0c 00 00    	add    $0xc25,%ebx
 80494c1:	83 ec 0c             	sub    $0xc,%esp
 80494c4:	8d 83 20 ff ff ff    	lea    -0xe0(%ebx),%eax
 80494ca:	8d bb 20 ff ff ff    	lea    -0xe0(%ebx),%edi
 80494d0:	29 f8                	sub    %edi,%eax
 80494d2:	c1 f8 02             	sar    $0x2,%eax
 80494d5:	8d 70 ff             	lea    -0x1(%eax),%esi
 80494d8:	83 fe ff             	cmp    $0xffffffff,%esi
 80494db:	74 0c                	je     80494e9 <__libc_csu_fini+0x39>
 80494dd:	8d 76 00             	lea    0x0(%esi),%esi
 80494e0:	ff 14 b7             	call   *(%edi,%esi,4)
 80494e3:	4e                   	dec    %esi
 80494e4:	83 fe ff             	cmp    $0xffffffff,%esi
 80494e7:	75 f7                	jne    80494e0 <__libc_csu_fini+0x30>
 80494e9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 80494f0:	e8 9f 00 00 00       	call   8049594 <_fini>
 80494f5:	83 c4 0c             	add    $0xc,%esp
 80494f8:	5b                   	pop    %ebx
 80494f9:	5e                   	pop    %esi
 80494fa:	5f                   	pop    %edi
 80494fb:	5d                   	pop    %ebp
 80494fc:	c3                   	ret    
 80494fd:	8d 76 00             	lea    0x0(%esi),%esi

08049500 <__libc_csu_init>:
 8049500:	55                   	push   %ebp
 8049501:	89 e5                	mov    %esp,%ebp
 8049503:	57                   	push   %edi
 8049504:	56                   	push   %esi
 8049505:	53                   	push   %ebx
 8049506:	e8 48 00 00 00       	call   8049553 <__i686.get_pc_thunk.bx>
 804950b:	81 c3 d5 0b 00 00    	add    $0xbd5,%ebx
 8049511:	83 ec 0c             	sub    $0xc,%esp
 8049514:	e8 83 f1 ff ff       	call   804869c <_init>
 8049519:	8d 83 20 ff ff ff    	lea    -0xe0(%ebx),%eax
 804951f:	8d 93 20 ff ff ff    	lea    -0xe0(%ebx),%edx
 8049525:	29 d0                	sub    %edx,%eax
 8049527:	c1 f8 02             	sar    $0x2,%eax
 804952a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 804952d:	74 1c                	je     804954b <__libc_csu_init+0x4b>
 804952f:	31 ff                	xor    %edi,%edi
 8049531:	89 d6                	mov    %edx,%esi
 8049533:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8049539:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8049540:	47                   	inc    %edi
 8049541:	ff 16                	call   *(%esi)
 8049543:	83 c6 04             	add    $0x4,%esi
 8049546:	39 7d f0             	cmp    %edi,-0x10(%ebp)
 8049549:	75 f5                	jne    8049540 <__libc_csu_init+0x40>
 804954b:	83 c4 0c             	add    $0xc,%esp
 804954e:	5b                   	pop    %ebx
 804954f:	5e                   	pop    %esi
 8049550:	5f                   	pop    %edi
 8049551:	5d                   	pop    %ebp
 8049552:	c3                   	ret    

08049553 <__i686.get_pc_thunk.bx>:
 8049553:	8b 1c 24             	mov    (%esp),%ebx
 8049556:	c3                   	ret    
 8049557:	90                   	nop
 8049558:	90                   	nop
 8049559:	90                   	nop
 804955a:	90                   	nop
 804955b:	90                   	nop
 804955c:	90                   	nop
 804955d:	90                   	nop
 804955e:	90                   	nop
 804955f:	90                   	nop

08049560 <__do_global_ctors_aux>:
 8049560:	55                   	push   %ebp
 8049561:	89 e5                	mov    %esp,%ebp
 8049563:	53                   	push   %ebx
 8049564:	bb 00 a0 04 08       	mov    $0x804a000,%ebx
 8049569:	83 ec 04             	sub    $0x4,%esp
 804956c:	a1 00 a0 04 08       	mov    0x804a000,%eax
 8049571:	83 f8 ff             	cmp    $0xffffffff,%eax
 8049574:	74 16                	je     804958c <__do_global_ctors_aux+0x2c>
 8049576:	8d 76 00             	lea    0x0(%esi),%esi
 8049579:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
 8049580:	83 eb 04             	sub    $0x4,%ebx
 8049583:	ff d0                	call   *%eax
 8049585:	8b 03                	mov    (%ebx),%eax
 8049587:	83 f8 ff             	cmp    $0xffffffff,%eax
 804958a:	75 f4                	jne    8049580 <__do_global_ctors_aux+0x20>
 804958c:	58                   	pop    %eax
 804958d:	5b                   	pop    %ebx
 804958e:	5d                   	pop    %ebp
 804958f:	90                   	nop
 8049590:	c3                   	ret    
 8049591:	90                   	nop
 8049592:	90                   	nop
 8049593:	90                   	nop

Disassembly of section .fini:

08049594 <_fini>:
 8049594:	55                   	push   %ebp
 8049595:	89 e5                	mov    %esp,%ebp
 8049597:	53                   	push   %ebx
 8049598:	83 ec 04             	sub    $0x4,%esp
 804959b:	e8 00 00 00 00       	call   80495a0 <_fini+0xc>
 80495a0:	5b                   	pop    %ebx
 80495a1:	81 c3 40 0b 00 00    	add    $0xb40,%ebx
 80495a7:	e8 34 f3 ff ff       	call   80488e0 <__do_global_dtors_aux>
 80495ac:	59                   	pop    %ecx
 80495ad:	5b                   	pop    %ebx
 80495ae:	c9                   	leave  
 80495af:	c3                   	ret    
