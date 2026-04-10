	.file	"main.cc"
	.text
	.section	.text._ZSt23__is_constant_evaluatedv,"axG",@progbits,_ZSt23__is_constant_evaluatedv,comdat
	.weak	_ZSt23__is_constant_evaluatedv
	.type	_ZSt23__is_constant_evaluatedv, @function
_ZSt23__is_constant_evaluatedv:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	_ZSt23__is_constant_evaluatedv, .-_ZSt23__is_constant_evaluatedv
	.section	.text._ZnwmPv,"axG",@progbits,_ZnwmPv,comdat
	.weak	_ZnwmPv
	.type	_ZnwmPv, @function
_ZnwmPv:
.LFB40:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE40:
	.size	_ZnwmPv, .-_ZnwmPv
	.section	.text._ZNSt11char_traitsIcE2ltERKcS2_,"axG",@progbits,_ZNSt11char_traitsIcE2ltERKcS2_,comdat
	.weak	_ZNSt11char_traitsIcE2ltERKcS2_
	.type	_ZNSt11char_traitsIcE2ltERKcS2_, @function
_ZNSt11char_traitsIcE2ltERKcS2_:
.LFB113:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	setb	%al
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE113:
	.size	_ZNSt11char_traitsIcE2ltERKcS2_, .-_ZNSt11char_traitsIcE2ltERKcS2_
	.section	.text._ZNSt11char_traitsIcE7compareEPKcS2_m,"axG",@progbits,_ZNSt11char_traitsIcE7compareEPKcS2_m,comdat
	.weak	_ZNSt11char_traitsIcE7compareEPKcS2_m
	.type	_ZNSt11char_traitsIcE7compareEPKcS2_m, @function
_ZNSt11char_traitsIcE7compareEPKcS2_m:
.LFB114:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	cmpq	$0, -40(%rbp)
	jne	.L8
	movl	$0, %eax
	jmp	.L9
.L8:
	call	_ZSt23__is_constant_evaluatedv
	testb	%al, %al
	je	.L10
	movq	$0, -8(%rbp)
	jmp	.L11
.L14:
	movq	-32(%rbp), %rdx
	movq	-8(%rbp), %rax
	addq	%rax, %rdx
	movq	-24(%rbp), %rcx
	movq	-8(%rbp), %rax
	addq	%rcx, %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt11char_traitsIcE2ltERKcS2_
	testb	%al, %al
	je	.L12
	movl	$-1, %eax
	jmp	.L9
.L12:
	movq	-24(%rbp), %rdx
	movq	-8(%rbp), %rax
	addq	%rax, %rdx
	movq	-32(%rbp), %rcx
	movq	-8(%rbp), %rax
	addq	%rcx, %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt11char_traitsIcE2ltERKcS2_
	testb	%al, %al
	je	.L13
	movl	$1, %eax
	jmp	.L9
.L13:
	addq	$1, -8(%rbp)
.L11:
	movq	-8(%rbp), %rax
	cmpq	-40(%rbp), %rax
	jb	.L14
	movl	$0, %eax
	jmp	.L9
.L10:
	movq	-40(%rbp), %rdx
	movq	-32(%rbp), %rcx
	movq	-24(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcmp@PLT
	nop
.L9:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE114:
	.size	_ZNSt11char_traitsIcE7compareEPKcS2_m, .-_ZNSt11char_traitsIcE7compareEPKcS2_m
	.section	.text._ZNSt11char_traitsIcE6lengthEPKc,"axG",@progbits,_ZNSt11char_traitsIcE6lengthEPKc,comdat
	.weak	_ZNSt11char_traitsIcE6lengthEPKc
	.type	_ZNSt11char_traitsIcE6lengthEPKc, @function
_ZNSt11char_traitsIcE6lengthEPKc:
.LFB115:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	call	_ZSt23__is_constant_evaluatedv
	testb	%al, %al
	je	.L16
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
	jmp	.L17
.L16:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	nop
.L17:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE115:
	.size	_ZNSt11char_traitsIcE6lengthEPKc, .-_ZNSt11char_traitsIcE6lengthEPKc
#APP
	.globl _ZSt21ios_base_library_initv
#NO_APP
	.section	.text._ZNSt8__detail17_List_node_headerC2Ev,"axG",@progbits,_ZNSt8__detail17_List_node_headerC5Ev,comdat
	.align 2
	.weak	_ZNSt8__detail17_List_node_headerC2Ev
	.type	_ZNSt8__detail17_List_node_headerC2Ev, @function
_ZNSt8__detail17_List_node_headerC2Ev:
.LFB2006:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt8__detail17_List_node_header7_M_initEv
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2006:
	.size	_ZNSt8__detail17_List_node_headerC2Ev, .-_ZNSt8__detail17_List_node_headerC2Ev
	.weak	_ZNSt8__detail17_List_node_headerC1Ev
	.set	_ZNSt8__detail17_List_node_headerC1Ev,_ZNSt8__detail17_List_node_headerC2Ev
	.section	.text._ZNSt8__detail17_List_node_header7_M_initEv,"axG",@progbits,_ZNSt8__detail17_List_node_header7_M_initEv,comdat
	.align 2
	.weak	_ZNSt8__detail17_List_node_header7_M_initEv
	.type	_ZNSt8__detail17_List_node_header7_M_initEv, @function
_ZNSt8__detail17_List_node_header7_M_initEv:
.LFB2012:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 8(%rax)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movq	$0, 16(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2012:
	.size	_ZNSt8__detail17_List_node_header7_M_initEv, .-_ZNSt8__detail17_List_node_header7_M_initEv
	.section	.text._ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev,"axG",@progbits,_ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD5Ev,comdat
	.align 2
	.weak	_ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
	.type	_ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev, @function
_ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev:
.LFB2180:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt15__new_allocatorISt10_List_nodeIiEED2Ev
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2180:
	.size	_ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev, .-_ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
	.weak	_ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD1Ev
	.set	_ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD1Ev,_ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
	.section	.text._ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev,"axG",@progbits,_ZNSt7__cxx1110_List_baseIiSaIiEEC5Ev,comdat
	.align 2
	.weak	_ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
	.type	_ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev, @function
_ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev:
.LFB2182:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2182:
	.size	_ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev, .-_ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
	.weak	_ZNSt7__cxx1110_List_baseIiSaIiEEC1Ev
	.set	_ZNSt7__cxx1110_List_baseIiSaIiEEC1Ev,_ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
	.section	.text._ZNSt7__cxx114listIiSaIiEEC2Ev,"axG",@progbits,_ZNSt7__cxx114listIiSaIiEEC5Ev,comdat
	.align 2
	.weak	_ZNSt7__cxx114listIiSaIiEEC2Ev
	.type	_ZNSt7__cxx114listIiSaIiEEC2Ev, @function
_ZNSt7__cxx114listIiSaIiEEC2Ev:
.LFB2184:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2184:
	.size	_ZNSt7__cxx114listIiSaIiEEC2Ev, .-_ZNSt7__cxx114listIiSaIiEEC2Ev
	.weak	_ZNSt7__cxx114listIiSaIiEEC1Ev
	.set	_ZNSt7__cxx114listIiSaIiEEC1Ev,_ZNSt7__cxx114listIiSaIiEEC2Ev
	.section	.text._ZNSt7__cxx114listIiSaIiEED2Ev,"axG",@progbits,_ZNSt7__cxx114listIiSaIiEED5Ev,comdat
	.align 2
	.weak	_ZNSt7__cxx114listIiSaIiEED2Ev
	.type	_ZNSt7__cxx114listIiSaIiEED2Ev, @function
_ZNSt7__cxx114listIiSaIiEED2Ev:
.LFB2187:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2187:
	.size	_ZNSt7__cxx114listIiSaIiEED2Ev, .-_ZNSt7__cxx114listIiSaIiEED2Ev
	.weak	_ZNSt7__cxx114listIiSaIiEED1Ev
	.set	_ZNSt7__cxx114listIiSaIiEED1Ev,_ZNSt7__cxx114listIiSaIiEED2Ev
	.section	.rodata
.LC0:
	.string	"push_front"
.LC1:
	.string	"push_back"
.LC2:
	.string	"pop_front"
.LC3:
	.string	"error"
.LC4:
	.string	"pop_back"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2174:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA2174
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$104, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev@PLT
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx114listIiSaIiEEC1Ev
	leaq	-104(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt14_List_iteratorIiEC1Ev
	jmp	.L25
.L42:
	leaq	-64(%rbp), %rax
	leaq	.LC0(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB0:
	call	_ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
	testb	%al, %al
	je	.L26
	leaq	-108(%rbp), %rax
	movq	%rax, %rsi
	leaq	_ZSt3cin(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSirsERi@PLT
	leaq	-108(%rbp), %rdx
	leaq	-96(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt7__cxx114listIiSaIiEE10push_frontERKi
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt7__cxx114listIiSaIiEE4sizeEv
	cmpq	$1, %rax
	sete	%al
	testb	%al, %al
	je	.L27
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx114listIiSaIiEE5beginEv
	movq	%rax, -104(%rbp)
	jmp	.L25
.L27:
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt7__cxx114listIiSaIiEE4sizeEv
	andl	$1, %eax
	testq	%rax, %rax
	setne	%al
	testb	%al, %al
	je	.L25
	leaq	-104(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	_ZNSt14_List_iteratorIiEmmEi
	jmp	.L25
.L26:
	leaq	-64(%rbp), %rax
	leaq	.LC1(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
	testb	%al, %al
	je	.L30
	leaq	-108(%rbp), %rax
	movq	%rax, %rsi
	leaq	_ZSt3cin(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSirsERi@PLT
	leaq	-108(%rbp), %rdx
	leaq	-96(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt7__cxx114listIiSaIiEE9push_backERKi
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt7__cxx114listIiSaIiEE4sizeEv
	cmpq	$1, %rax
	sete	%al
	testb	%al, %al
	je	.L31
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx114listIiSaIiEE5beginEv
	movq	%rax, -104(%rbp)
	jmp	.L25
.L31:
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt7__cxx114listIiSaIiEE4sizeEv
	andl	$1, %eax
	testq	%rax, %rax
	setne	%al
	testb	%al, %al
	je	.L25
	leaq	-104(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	_ZNSt14_List_iteratorIiEppEi
	jmp	.L25
.L30:
	leaq	-64(%rbp), %rax
	leaq	.LC2(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
	testb	%al, %al
	je	.L33
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt7__cxx114listIiSaIiEE5emptyEv
	testb	%al, %al
	je	.L34
	leaq	.LC3(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	jmp	.L25
.L34:
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx114listIiSaIiEE9pop_frontEv
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt7__cxx114listIiSaIiEE5emptyEv
	xorl	$1, %eax
	testb	%al, %al
	je	.L35
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt7__cxx114listIiSaIiEE4sizeEv
	andl	$1, %eax
	testq	%rax, %rax
	je	.L35
	movl	$1, %eax
	jmp	.L36
.L35:
	movl	$0, %eax
.L36:
	testb	%al, %al
	je	.L25
	leaq	-104(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	_ZNSt14_List_iteratorIiEppEi
	jmp	.L25
.L33:
	leaq	-64(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
	testb	%al, %al
	je	.L37
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt7__cxx114listIiSaIiEE5emptyEv
	testb	%al, %al
	je	.L38
	leaq	.LC3(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	jmp	.L25
.L38:
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx114listIiSaIiEE8pop_backEv
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt7__cxx114listIiSaIiEE5emptyEv
	xorl	$1, %eax
	testb	%al, %al
	je	.L39
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt7__cxx114listIiSaIiEE4sizeEv
	andl	$1, %eax
	testq	%rax, %rax
	je	.L39
	movl	$1, %eax
	jmp	.L40
.L39:
	movl	$0, %eax
.L40:
	testb	%al, %al
	je	.L25
	leaq	-104(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	_ZNSt14_List_iteratorIiEmmEi
	jmp	.L25
.L37:
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt7__cxx114listIiSaIiEE4sizeEv
	andl	$1, %eax
	testq	%rax, %rax
	sete	%al
	testb	%al, %al
	je	.L41
	leaq	.LC3(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	jmp	.L25
.L41:
	leaq	-104(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt14_List_iteratorIiEdeEv
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSolsEi@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
.L25:
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	leaq	_ZSt3cin(%rip), %rax
	movq	%rax, %rdi
	call	_ZStrsIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EE@PLT
	movq	(%rax), %rdx
	subq	$24, %rdx
	movq	(%rdx), %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	_ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv@PLT
.LEHE0:
	testb	%al, %al
	jne	.L42
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx114listIiSaIiEED1Ev
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	movl	$0, %eax
	movq	-24(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L46
	jmp	.L48
.L47:
	endbr64
	movq	%rax, %rbx
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx114listIiSaIiEED1Ev
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	movq	%rbx, %rax
	movq	-24(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L45
	call	__stack_chk_fail@PLT
.L45:
	movq	%rax, %rdi
.LEHB1:
	call	_Unwind_Resume@PLT
.LEHE1:
.L48:
	call	__stack_chk_fail@PLT
.L46:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2174:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA2174:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2174-.LLSDACSB2174
.LLSDACSB2174:
	.uleb128 .LEHB0-.LFB2174
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L47-.LFB2174
	.uleb128 0
	.uleb128 .LEHB1-.LFB2174
	.uleb128 .LEHE1-.LEHB1
	.uleb128 0
	.uleb128 0
.LLSDACSE2174:
	.text
	.size	main, .-main
	.section	.text._ZN9__gnu_cxx11char_traitsIcE6lengthEPKc,"axG",@progbits,_ZN9__gnu_cxx11char_traitsIcE6lengthEPKc,comdat
	.align 2
	.weak	_ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
	.type	_ZN9__gnu_cxx11char_traitsIcE6lengthEPKc, @function
_ZN9__gnu_cxx11char_traitsIcE6lengthEPKc:
.LFB2189:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	$0, -16(%rbp)
	jmp	.L50
.L51:
	addq	$1, -16(%rbp)
.L50:
	movb	$0, -17(%rbp)
	movq	-40(%rbp), %rdx
	movq	-16(%rbp), %rax
	addq	%rax, %rdx
	leaq	-17(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
	xorl	$1, %eax
	testb	%al, %al
	jne	.L51
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L53
	call	__stack_chk_fail@PLT
.L53:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2189:
	.size	_ZN9__gnu_cxx11char_traitsIcE6lengthEPKc, .-_ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
	.section	.text._ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev,"axG",@progbits,_ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC5Ev,comdat
	.align 2
	.weak	_ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
	.type	_ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev, @function
_ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev:
.LFB2447:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, -8(%rbp)
	nop
	nop
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt8__detail17_List_node_headerC1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2447:
	.size	_ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev, .-_ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
	.weak	_ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC1Ev
	.set	_ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC1Ev,_ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
	.section	.text._ZNSt7__cxx1110_List_baseIiSaIiEED2Ev,"axG",@progbits,_ZNSt7__cxx1110_List_baseIiSaIiEED5Ev,comdat
	.align 2
	.weak	_ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
	.type	_ZNSt7__cxx1110_List_baseIiSaIiEED2Ev, @function
_ZNSt7__cxx1110_List_baseIiSaIiEED2Ev:
.LFB2453:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2453:
	.size	_ZNSt7__cxx1110_List_baseIiSaIiEED2Ev, .-_ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
	.weak	_ZNSt7__cxx1110_List_baseIiSaIiEED1Ev
	.set	_ZNSt7__cxx1110_List_baseIiSaIiEED1Ev,_ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
	.section	.text._ZNSt14_List_iteratorIiEC2Ev,"axG",@progbits,_ZNSt14_List_iteratorIiEC5Ev,comdat
	.align 2
	.weak	_ZNSt14_List_iteratorIiEC2Ev
	.type	_ZNSt14_List_iteratorIiEC2Ev, @function
_ZNSt14_List_iteratorIiEC2Ev:
.LFB2456:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	$0, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2456:
	.size	_ZNSt14_List_iteratorIiEC2Ev, .-_ZNSt14_List_iteratorIiEC2Ev
	.weak	_ZNSt14_List_iteratorIiEC1Ev
	.set	_ZNSt14_List_iteratorIiEC1Ev,_ZNSt14_List_iteratorIiEC2Ev
	.section	.text._ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_,"axG",@progbits,_ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_,comdat
	.weak	_ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
	.type	_ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_, @function
_ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_:
.LFB2459:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv@PLT
	movq	%rax, %rbx
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt11char_traitsIcE6lengthEPKc
	cmpq	%rax, %rbx
	jne	.L58
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv@PLT
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv@PLT
	movq	%rax, %rcx
	movq	-32(%rbp), %rax
	movq	%rbx, %rdx
	movq	%rax, %rsi
	movq	%rcx, %rdi
	call	_ZNSt11char_traitsIcE7compareEPKcS2_m
	testl	%eax, %eax
	jne	.L58
	movl	$1, %eax
	jmp	.L59
.L58:
	movl	$0, %eax
.L59:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2459:
	.size	_ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_, .-_ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
	.section	.text._ZNSt7__cxx114listIiSaIiEE10push_frontERKi,"axG",@progbits,_ZNSt7__cxx114listIiSaIiEE10push_frontERKi,comdat
	.align 2
	.weak	_ZNSt7__cxx114listIiSaIiEE10push_frontERKi
	.type	_ZNSt7__cxx114listIiSaIiEE10push_frontERKi, @function
_ZNSt7__cxx114listIiSaIiEE10push_frontERKi:
.LFB2460:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx114listIiSaIiEE5beginEv
	movq	%rax, %rcx
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2460:
	.size	_ZNSt7__cxx114listIiSaIiEE10push_frontERKi, .-_ZNSt7__cxx114listIiSaIiEE10push_frontERKi
	.section	.text._ZNKSt7__cxx114listIiSaIiEE4sizeEv,"axG",@progbits,_ZNKSt7__cxx114listIiSaIiEE4sizeEv,comdat
	.align 2
	.weak	_ZNKSt7__cxx114listIiSaIiEE4sizeEv
	.type	_ZNKSt7__cxx114listIiSaIiEE4sizeEv, @function
_ZNKSt7__cxx114listIiSaIiEE4sizeEv:
.LFB2461:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA2461
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt7__cxx114listIiSaIiEE13_M_node_countEv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2461:
	.section	.gcc_except_table
.LLSDA2461:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2461-.LLSDACSB2461
.LLSDACSB2461:
.LLSDACSE2461:
	.section	.text._ZNKSt7__cxx114listIiSaIiEE4sizeEv,"axG",@progbits,_ZNKSt7__cxx114listIiSaIiEE4sizeEv,comdat
	.size	_ZNKSt7__cxx114listIiSaIiEE4sizeEv, .-_ZNKSt7__cxx114listIiSaIiEE4sizeEv
	.section	.text._ZNSt7__cxx114listIiSaIiEE5beginEv,"axG",@progbits,_ZNSt7__cxx114listIiSaIiEE5beginEv,comdat
	.align 2
	.weak	_ZNSt7__cxx114listIiSaIiEE5beginEv
	.type	_ZNSt7__cxx114listIiSaIiEE5beginEv, @function
_ZNSt7__cxx114listIiSaIiEE5beginEv:
.LFB2462:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-24(%rbp), %rax
	movq	(%rax), %rdx
	leaq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt14_List_iteratorIiEC1EPNSt8__detail15_List_node_baseE
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L66
	call	__stack_chk_fail@PLT
.L66:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2462:
	.size	_ZNSt7__cxx114listIiSaIiEE5beginEv, .-_ZNSt7__cxx114listIiSaIiEE5beginEv
	.section	.text._ZNSt14_List_iteratorIiEmmEi,"axG",@progbits,_ZNSt14_List_iteratorIiEmmEi,comdat
	.align 2
	.weak	_ZNSt14_List_iteratorIiEmmEi
	.type	_ZNSt14_List_iteratorIiEmmEi, @function
_ZNSt14_List_iteratorIiEmmEi:
.LFB2463:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	8(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L69
	call	__stack_chk_fail@PLT
.L69:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2463:
	.size	_ZNSt14_List_iteratorIiEmmEi, .-_ZNSt14_List_iteratorIiEmmEi
	.section	.text._ZNSt7__cxx114listIiSaIiEE9push_backERKi,"axG",@progbits,_ZNSt7__cxx114listIiSaIiEE9push_backERKi,comdat
	.align 2
	.weak	_ZNSt7__cxx114listIiSaIiEE9push_backERKi
	.type	_ZNSt7__cxx114listIiSaIiEE9push_backERKi, @function
_ZNSt7__cxx114listIiSaIiEE9push_backERKi:
.LFB2464:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx114listIiSaIiEE3endEv
	movq	%rax, %rcx
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2464:
	.size	_ZNSt7__cxx114listIiSaIiEE9push_backERKi, .-_ZNSt7__cxx114listIiSaIiEE9push_backERKi
	.section	.text._ZNSt14_List_iteratorIiEppEi,"axG",@progbits,_ZNSt14_List_iteratorIiEppEi,comdat
	.align 2
	.weak	_ZNSt14_List_iteratorIiEppEi
	.type	_ZNSt14_List_iteratorIiEppEi, @function
_ZNSt14_List_iteratorIiEppEi:
.LFB2465:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L73
	call	__stack_chk_fail@PLT
.L73:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2465:
	.size	_ZNSt14_List_iteratorIiEppEi, .-_ZNSt14_List_iteratorIiEppEi
	.section	.text._ZNKSt7__cxx114listIiSaIiEE5emptyEv,"axG",@progbits,_ZNKSt7__cxx114listIiSaIiEE5emptyEv,comdat
	.align 2
	.weak	_ZNKSt7__cxx114listIiSaIiEE5emptyEv
	.type	_ZNKSt7__cxx114listIiSaIiEE5emptyEv, @function
_ZNKSt7__cxx114listIiSaIiEE5emptyEv:
.LFB2466:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdx
	movq	-8(%rbp), %rax
	cmpq	%rax, %rdx
	sete	%al
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2466:
	.size	_ZNKSt7__cxx114listIiSaIiEE5emptyEv, .-_ZNKSt7__cxx114listIiSaIiEE5emptyEv
	.section	.text._ZNSt7__cxx114listIiSaIiEE9pop_frontEv,"axG",@progbits,_ZNSt7__cxx114listIiSaIiEE9pop_frontEv,comdat
	.align 2
	.weak	_ZNSt7__cxx114listIiSaIiEE9pop_frontEv
	.type	_ZNSt7__cxx114listIiSaIiEE9pop_frontEv, @function
_ZNSt7__cxx114listIiSaIiEE9pop_frontEv:
.LFB2470:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx114listIiSaIiEE5beginEv
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt7__cxx114listIiSaIiEE8_M_eraseESt14_List_iteratorIiE
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2470:
	.size	_ZNSt7__cxx114listIiSaIiEE9pop_frontEv, .-_ZNSt7__cxx114listIiSaIiEE9pop_frontEv
	.section	.text._ZNSt7__cxx114listIiSaIiEE8pop_backEv,"axG",@progbits,_ZNSt7__cxx114listIiSaIiEE8pop_backEv,comdat
	.align 2
	.weak	_ZNSt7__cxx114listIiSaIiEE8pop_backEv
	.type	_ZNSt7__cxx114listIiSaIiEE8pop_backEv, @function
_ZNSt7__cxx114listIiSaIiEE8pop_backEv:
.LFB2471:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-24(%rbp), %rax
	movq	8(%rax), %rdx
	leaq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt14_List_iteratorIiEC1EPNSt8__detail15_List_node_baseE
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt7__cxx114listIiSaIiEE8_M_eraseESt14_List_iteratorIiE
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L78
	call	__stack_chk_fail@PLT
.L78:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2471:
	.size	_ZNSt7__cxx114listIiSaIiEE8pop_backEv, .-_ZNSt7__cxx114listIiSaIiEE8pop_backEv
	.section	.text._ZNKSt14_List_iteratorIiEdeEv,"axG",@progbits,_ZNKSt14_List_iteratorIiEdeEv,comdat
	.align 2
	.weak	_ZNKSt14_List_iteratorIiEdeEv
	.type	_ZNKSt14_List_iteratorIiEdeEv, @function
_ZNKSt14_List_iteratorIiEdeEv:
.LFB2472:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	_ZNSt10_List_nodeIiE9_M_valptrEv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2472:
	.size	_ZNKSt14_List_iteratorIiEdeEv, .-_ZNKSt14_List_iteratorIiEdeEv
	.section	.text._ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_,"axG",@progbits,_ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_,comdat
	.weak	_ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
	.type	_ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_, @function
_ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_:
.LFB2473:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movzbl	(%rax), %edx
	movq	-16(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	sete	%al
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2473:
	.size	_ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_, .-_ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
	.section	.text._ZNSt15__new_allocatorISt10_List_nodeIiEED2Ev,"axG",@progbits,_ZNSt15__new_allocatorISt10_List_nodeIiEED5Ev,comdat
	.align 2
	.weak	_ZNSt15__new_allocatorISt10_List_nodeIiEED2Ev
	.type	_ZNSt15__new_allocatorISt10_List_nodeIiEED2Ev, @function
_ZNSt15__new_allocatorISt10_List_nodeIiEED2Ev:
.LFB2576:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2576:
	.size	_ZNSt15__new_allocatorISt10_List_nodeIiEED2Ev, .-_ZNSt15__new_allocatorISt10_List_nodeIiEED2Ev
	.weak	_ZNSt15__new_allocatorISt10_List_nodeIiEED1Ev
	.set	_ZNSt15__new_allocatorISt10_List_nodeIiEED1Ev,_ZNSt15__new_allocatorISt10_List_nodeIiEED2Ev
	.section	.text._ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv,"axG",@progbits,_ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv,comdat
	.align 2
	.weak	_ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
	.type	_ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv, @function
_ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv:
.LFB2578:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%rdi, -72(%rbp)
	movq	-72(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -56(%rbp)
	jmp	.L85
.L86:
	movq	-56(%rbp), %rax
	movq	%rax, -48(%rbp)
	movq	-48(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -56(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt10_List_nodeIiE9_M_valptrEv
	movq	%rax, -40(%rbp)
	movq	-72(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
	movq	%rax, -32(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	nop
	nop
	movq	-48(%rbp), %rdx
	movq	-72(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
.L85:
	movq	-72(%rbp), %rax
	cmpq	%rax, -56(%rbp)
	jne	.L86
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2578:
	.size	_ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv, .-_ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
	.section	.text._ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_,"axG",@progbits,_ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_,comdat
	.align 2
	.weak	_ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_
	.type	_ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_, @function
_ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_:
.LFB2582:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE
	movq	%rax, %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRKiEEEPSt10_List_nodeIiEDpOT_
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt8__detail15_List_node_base7_M_hookEPS0_@PLT
	movq	-24(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2582:
	.size	_ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_, .-_ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_
	.section	.text._ZNKSt7__cxx114listIiSaIiEE13_M_node_countEv,"axG",@progbits,_ZNKSt7__cxx114listIiSaIiEE13_M_node_countEv,comdat
	.align 2
	.weak	_ZNKSt7__cxx114listIiSaIiEE13_M_node_countEv
	.type	_ZNKSt7__cxx114listIiSaIiEE13_M_node_countEv, @function
_ZNKSt7__cxx114listIiSaIiEE13_M_node_countEv:
.LFB2583:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2583:
	.size	_ZNKSt7__cxx114listIiSaIiEE13_M_node_countEv, .-_ZNKSt7__cxx114listIiSaIiEE13_M_node_countEv
	.section	.text._ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE,"axG",@progbits,_ZNSt14_List_iteratorIiEC5EPNSt8__detail15_List_node_baseE,comdat
	.align 2
	.weak	_ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
	.type	_ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE, @function
_ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE:
.LFB2585:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2585:
	.size	_ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE, .-_ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
	.weak	_ZNSt14_List_iteratorIiEC1EPNSt8__detail15_List_node_baseE
	.set	_ZNSt14_List_iteratorIiEC1EPNSt8__detail15_List_node_baseE,_ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
	.section	.text._ZNSt7__cxx114listIiSaIiEE3endEv,"axG",@progbits,_ZNSt7__cxx114listIiSaIiEE3endEv,comdat
	.align 2
	.weak	_ZNSt7__cxx114listIiSaIiEE3endEv
	.type	_ZNSt7__cxx114listIiSaIiEE3endEv, @function
_ZNSt7__cxx114listIiSaIiEE3endEv:
.LFB2587:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-24(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt14_List_iteratorIiEC1EPNSt8__detail15_List_node_baseE
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L93
	call	__stack_chk_fail@PLT
.L93:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2587:
	.size	_ZNSt7__cxx114listIiSaIiEE3endEv, .-_ZNSt7__cxx114listIiSaIiEE3endEv
	.section	.text._ZNSt7__cxx114listIiSaIiEE8_M_eraseESt14_List_iteratorIiE,"axG",@progbits,_ZNSt7__cxx114listIiSaIiEE8_M_eraseESt14_List_iteratorIiE,comdat
	.align 2
	.weak	_ZNSt7__cxx114listIiSaIiEE8_M_eraseESt14_List_iteratorIiE
	.type	_ZNSt7__cxx114listIiSaIiEE8_M_eraseESt14_List_iteratorIiE, @function
_ZNSt7__cxx114listIiSaIiEE8_M_eraseESt14_List_iteratorIiE:
.LFB2591:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$72, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -72(%rbp)
	movq	%rsi, -80(%rbp)
	movq	-72(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_dec_sizeEm
	movq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt8__detail15_List_node_base9_M_unhookEv@PLT
	movq	-80(%rbp), %rax
	movq	%rax, -56(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt10_List_nodeIiE9_M_valptrEv
	movq	%rax, %rbx
	movq	-72(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
	movq	%rax, -48(%rbp)
	movq	%rbx, -40(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, -24(%rbp)
	nop
	nop
	movq	-72(%rbp), %rax
	movq	-56(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2591:
	.size	_ZNSt7__cxx114listIiSaIiEE8_M_eraseESt14_List_iteratorIiE, .-_ZNSt7__cxx114listIiSaIiEE8_M_eraseESt14_List_iteratorIiE
	.section	.text._ZNSt10_List_nodeIiE9_M_valptrEv,"axG",@progbits,_ZNSt10_List_nodeIiE9_M_valptrEv,comdat
	.align 2
	.weak	_ZNSt10_List_nodeIiE9_M_valptrEv
	.type	_ZNSt10_List_nodeIiE9_M_valptrEv, @function
_ZNSt10_List_nodeIiE9_M_valptrEv:
.LFB2592:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$16, %rax
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2592:
	.size	_ZNSt10_List_nodeIiE9_M_valptrEv, .-_ZNSt10_List_nodeIiE9_M_valptrEv
	.section	.text._ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv,"axG",@progbits,_ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv,comdat
	.align 2
	.weak	_ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
	.type	_ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv, @function
_ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv:
.LFB2661:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2661:
	.size	_ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv, .-_ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
	.section	.text._ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE,"axG",@progbits,_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE,comdat
	.align 2
	.weak	_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
	.type	_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE, @function
_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE:
.LFB2663:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	$1, -8(%rbp)
	movq	-8(%rbp), %rdx
	movq	-16(%rbp), %rcx
	movq	-24(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2663:
	.size	_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE, .-_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
	.section	.text._ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE,"axG",@progbits,_ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE,comdat
	.weak	_ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE
	.type	_ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE, @function
_ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE:
.LFB2665:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2665:
	.size	_ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE, .-_ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE
	.section	.text._ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRKiEEEPSt10_List_nodeIiEDpOT_,"axG",@progbits,_ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRKiEEEPSt10_List_nodeIiEDpOT_,comdat
	.align 2
	.weak	_ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRKiEEEPSt10_List_nodeIiEDpOT_
	.type	_ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRKiEEEPSt10_List_nodeIiEDpOT_, @function
_ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRKiEEEPSt10_List_nodeIiEDpOT_:
.LFB2666:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$120, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -120(%rbp)
	movq	%rsi, -128(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	-120(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_get_nodeEv
	movq	%rax, -112(%rbp)
	movq	-120(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
	movq	%rax, -104(%rbp)
	movq	-112(%rbp), %rdx
	movq	-104(%rbp), %rcx
	leaq	-48(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC1ERS2_PS1_
	movq	-128(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE
	movq	%rax, %rbx
	movq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt10_List_nodeIiE9_M_valptrEv
	movq	-104(%rbp), %rdx
	movq	%rdx, -96(%rbp)
	movq	%rax, -88(%rbp)
	movq	%rbx, -80(%rbp)
	movq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE
	movq	-96(%rbp), %rdx
	movq	%rdx, -72(%rbp)
	movq	-88(%rbp), %rdx
	movq	%rdx, -64(%rbp)
	movq	%rax, -56(%rbp)
	movq	-64(%rbp), %rax
	movq	%rax, %rsi
	movl	$4, %edi
	call	_ZnwmPv
	movq	%rax, %rbx
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE
	movl	(%rax), %eax
	movl	%eax, (%rbx)
	nop
	nop
	leaq	-48(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEaSEDn
	movq	-112(%rbp), %rbx
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED1Ev
	movq	%rbx, %rax
	movq	-24(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L104
	call	__stack_chk_fail@PLT
.L104:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2666:
	.size	_ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRKiEEEPSt10_List_nodeIiEDpOT_, .-_ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRKiEEEPSt10_List_nodeIiEDpOT_
	.section	.text._ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm,"axG",@progbits,_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm,comdat
	.align 2
	.weak	_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
	.type	_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm, @function
_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm:
.LFB2667:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rdx
	movq	-16(%rbp), %rax
	addq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 16(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2667:
	.size	_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm, .-_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
	.section	.text._ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv,"axG",@progbits,_ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv,comdat
	.align 2
	.weak	_ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv
	.type	_ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv, @function
_ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv:
.LFB2668:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2668:
	.size	_ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv, .-_ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv
	.section	.text._ZNSt7__cxx1110_List_baseIiSaIiEE11_M_dec_sizeEm,"axG",@progbits,_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_dec_sizeEm,comdat
	.align 2
	.weak	_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_dec_sizeEm
	.type	_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_dec_sizeEm, @function
_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_dec_sizeEm:
.LFB2670:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	subq	-16(%rbp), %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 16(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2670:
	.size	_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_dec_sizeEm, .-_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_dec_sizeEm
	.section	.text._ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv,"axG",@progbits,_ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv,comdat
	.align 2
	.weak	_ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
	.type	_ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv, @function
_ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv:
.LFB2671:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2671:
	.size	_ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv, .-_ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
	.section	.text._ZNSt7__cxx1110_List_baseIiSaIiEE11_M_get_nodeEv,"axG",@progbits,_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_get_nodeEv,comdat
	.align 2
	.weak	_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_get_nodeEv
	.type	_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_get_nodeEv, @function
_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_get_nodeEv:
.LFB2726:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	$1, -8(%rbp)
	movq	-8(%rbp), %rcx
	movq	-16(%rbp), %rax
	movl	$0, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2726:
	.size	_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_get_nodeEv, .-_ZNSt7__cxx1110_List_baseIiSaIiEE11_M_get_nodeEv
	.section	.text._ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_,"axG",@progbits,_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC5ERS2_PS1_,comdat
	.align 2
	.weak	_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
	.type	_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_, @function
_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_:
.LFB2728:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt11__addressofISaISt10_List_nodeIiEEEPT_RS3_
	movq	-8(%rbp), %rdx
	movq	%rax, (%rdx)
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 8(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2728:
	.size	_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_, .-_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
	.weak	_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC1ERS2_PS1_
	.set	_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC1ERS2_PS1_,_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
	.section	.text._ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev,"axG",@progbits,_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED5Ev,comdat
	.align 2
	.weak	_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
	.type	_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev, @function
_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev:
.LFB2731:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	je	.L117
	movq	-40(%rbp), %rax
	movq	8(%rax), %rax
	movq	-40(%rbp), %rdx
	movq	(%rdx), %rdx
	movq	%rdx, -24(%rbp)
	movq	%rax, -16(%rbp)
	movq	$1, -8(%rbp)
	movq	-8(%rbp), %rdx
	movq	-16(%rbp), %rcx
	movq	-24(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
	nop
.L117:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2731:
	.size	_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev, .-_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
	.weak	_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED1Ev
	.set	_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED1Ev,_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
	.section	.text._ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEaSEDn,"axG",@progbits,_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEaSEDn,comdat
	.align 2
	.weak	_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEaSEDn
	.type	_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEaSEDn, @function
_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEaSEDn:
.LFB2734:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	$0, 8(%rax)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2734:
	.size	_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEaSEDn, .-_ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEaSEDn
	.section	.text._ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv,"axG",@progbits,_ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv,comdat
	.align 2
	.weak	_ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
	.type	_ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv, @function
_ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv:
.LFB2735:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2735:
	.size	_ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv, .-_ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
	.section	.text._ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m,"axG",@progbits,_ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m,comdat
	.align 2
	.weak	_ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
	.type	_ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m, @function
_ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m:
.LFB2756:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZdlPvm@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2756:
	.size	_ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m, .-_ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
	.section	.text._ZSt11__addressofISaISt10_List_nodeIiEEEPT_RS3_,"axG",@progbits,_ZSt11__addressofISaISt10_List_nodeIiEEEPT_RS3_,comdat
	.weak	_ZSt11__addressofISaISt10_List_nodeIiEEEPT_RS3_
	.type	_ZSt11__addressofISaISt10_List_nodeIiEEEPT_RS3_, @function
_ZSt11__addressofISaISt10_List_nodeIiEEEPT_RS3_:
.LFB2758:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2758:
	.size	_ZSt11__addressofISaISt10_List_nodeIiEEEPT_RS3_, .-_ZSt11__addressofISaISt10_List_nodeIiEEEPT_RS3_
	.section	.text._ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv,"axG",@progbits,_ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv,comdat
	.align 2
	.weak	_ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
	.type	_ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv, @function
_ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv:
.LFB2768:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	movabsq	$384307168202282325, %rax
	cmpq	-32(%rbp), %rax
	setb	%al
	movzbl	%al, %eax
	testq	%rax, %rax
	setne	%al
	testb	%al, %al
	je	.L128
	movabsq	$768614336404564650, %rax
	cmpq	-32(%rbp), %rax
	jnb	.L129
	call	_ZSt28__throw_bad_array_new_lengthv@PLT
.L129:
	call	_ZSt17__throw_bad_allocv@PLT
.L128:
	movq	-32(%rbp), %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdi
	call	_Znwm@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2768:
	.size	_ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv, .-_ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
	.section	.rodata
	.type	_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE, @object
	.size	_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE, 1
_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE:
	.byte	1
	.type	_ZNSt8__detail30__integer_to_chars_is_unsignedImEE, @object
	.size	_ZNSt8__detail30__integer_to_chars_is_unsignedImEE, 1
_ZNSt8__detail30__integer_to_chars_is_unsignedImEE:
	.byte	1
	.type	_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE, @object
	.size	_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE, 1
_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE:
	.byte	1
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.ident	"GCC: (Ubuntu 13.3.0-6ubuntu2~24.04) 13.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
