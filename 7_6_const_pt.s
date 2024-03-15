	.file	"7_6_const_pt.cpp"
	.intel_syntax noprefix
 # GNU C++17 (x86_64-posix-seh, Built by MinGW-Builds project) version 11.4.0 (x86_64-w64-mingw32)
 #	compiled by GNU C version 11.4.0, GMP version 6.2.1, MPFR version 4.1.0, MPC version 1.2.1, isl version isl-0.25-GMP

 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed: -masm=intel -mtune=core2 -march=nocona -fno-asynchronous-unwind-tables
	.text
.lcomm _ZStL8__ioinit,1,1
	.def	__main;	.scl	2;	.type	32;	.endef
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
main:
	push	rbp	 #
	mov	rbp, rsp	 #,
	sub	rsp, 48	 #,
 # D:/workspace/c_project/CPP_PRIME/7_6_const_pt.cpp:4: {
	call	__main	 #
 # D:/workspace/c_project/CPP_PRIME/7_6_const_pt.cpp:9: 	char str[3] = {"hi"};
	mov	WORD PTR -11[rbp], 26984	 # str,
	mov	BYTE PTR -9[rbp], 0	 # str,
 # D:/workspace/c_project/CPP_PRIME/7_6_const_pt.cpp:10: 	char *p = str;
	lea	rax, -11[rbp]	 # tmp88,
	mov	QWORD PTR -8[rbp], rax	 # p, tmp88
 # D:/workspace/c_project/CPP_PRIME/7_6_const_pt.cpp:11: 	++*p;
	mov	rax, QWORD PTR -8[rbp]	 # tmp89, p
	movzx	eax, BYTE PTR [rax]	 # _1, *p_7
 # D:/workspace/c_project/CPP_PRIME/7_6_const_pt.cpp:11: 	++*p;
	add	eax, 1	 # _3,
	mov	edx, eax	 # _4, _3
	mov	rax, QWORD PTR -8[rbp]	 # tmp90, p
	mov	BYTE PTR [rax], dl	 # *p_7, _4
 # D:/workspace/c_project/CPP_PRIME/7_6_const_pt.cpp:12: }
	mov	eax, 0	 # _10,
	leave	
	ret	
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
__tcf_0:
	push	rbp	 #
	mov	rbp, rsp	 #,
	sub	rsp, 32	 #,
 # D:/Program/RedPanda-CPP/MinGW64/lib/gcc/x86_64-w64-mingw32/11.4.0/include/c++/iostream:74:   static ios_base::Init __ioinit;
	lea	rax, _ZStL8__ioinit[rip]	 # tmp82,
	mov	rcx, rax	 #, tmp82
	call	_ZNSt8ios_base4InitD1Ev	 #
	leave	
	ret	
	.def	_Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
_Z41__static_initialization_and_destruction_0ii:
	push	rbp	 #
	mov	rbp, rsp	 #,
	sub	rsp, 32	 #,
	mov	DWORD PTR 16[rbp], ecx	 # __initialize_p, __initialize_p
	mov	DWORD PTR 24[rbp], edx	 # __priority, __priority
 # D:/workspace/c_project/CPP_PRIME/7_6_const_pt.cpp:12: }
	cmp	DWORD PTR 16[rbp], 1	 # __initialize_p,
	jne	.L6	 #,
 # D:/workspace/c_project/CPP_PRIME/7_6_const_pt.cpp:12: }
	cmp	DWORD PTR 24[rbp], 65535	 # __priority,
	jne	.L6	 #,
 # D:/Program/RedPanda-CPP/MinGW64/lib/gcc/x86_64-w64-mingw32/11.4.0/include/c++/iostream:74:   static ios_base::Init __ioinit;
	lea	rax, _ZStL8__ioinit[rip]	 # tmp82,
	mov	rcx, rax	 #, tmp82
	call	_ZNSt8ios_base4InitC1Ev	 #
	lea	rax, __tcf_0[rip]	 # tmp83,
	mov	rcx, rax	 #, tmp83
	call	atexit	 #
.L6:
 # D:/workspace/c_project/CPP_PRIME/7_6_const_pt.cpp:12: }
	nop	
	leave	
	ret	
	.def	_GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
_GLOBAL__sub_I_main:
	push	rbp	 #
	mov	rbp, rsp	 #,
	sub	rsp, 32	 #,
 # D:/workspace/c_project/CPP_PRIME/7_6_const_pt.cpp:12: }
	mov	edx, 65535	 #,
	mov	ecx, 1	 #,
	call	_Z41__static_initialization_and_destruction_0ii	 #
	leave	
	ret	
	.section	.ctors,"w"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.ident	"GCC: (x86_64-posix-seh, Built by MinGW-Builds project) 11.4.0"
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
