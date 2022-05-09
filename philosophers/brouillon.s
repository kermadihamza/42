	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
	.globl	_routine                ## -- Begin function routine
	.p2align	4, 0x90
_routine:                               ## @routine
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	$0, -12(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	$100000, -12(%rbp)      ## imm = 0x186A0
	jge	LBB0_4
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	movl	_mails(%rip), %eax
	addl	$1, %eax
	movl	%eax, _mails(%rip)
## %bb.3:                               ##   in Loop: Header=BB0_1 Depth=1
	movl	-12(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -12(%rbp)
	jmp	LBB0_1
LBB0_4:
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_routine2               ## -- Begin function routine2
	.p2align	4, 0x90
_routine2:                              ## @routine2
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$2, %edi
	callq	_sleep
	movl	_x(%rip), %esi
	leaq	L_.str(%rip), %rdi
	movl	%eax, -12(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movq	-8(%rbp), %rdi
	movl	%eax, -16(%rbp)         ## 4-byte Spill
	movq	%rdi, %rax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	xorl	%eax, %eax
	movl	%eax, %ecx
	leaq	_routine(%rip), %rdx
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	leaq	-24(%rbp), %rdi
	movq	%rcx, %rsi
	callq	_pthread_create
	cmpl	$0, %eax
	je	LBB2_2
## %bb.1:
	movl	$1, -4(%rbp)
	jmp	LBB2_9
LBB2_2:
	xorl	%eax, %eax
	movl	%eax, %ecx
	leaq	_routine(%rip), %rdx
	leaq	-32(%rbp), %rdi
	movq	%rcx, %rsi
	callq	_pthread_create
	cmpl	$0, %eax
	je	LBB2_4
## %bb.3:
	movl	$2, -4(%rbp)
	jmp	LBB2_9
LBB2_4:
	xorl	%eax, %eax
	movl	%eax, %esi
	movq	-24(%rbp), %rdi
	callq	_pthread_join
	cmpl	$0, %eax
	je	LBB2_6
## %bb.5:
	movl	$3, -4(%rbp)
	jmp	LBB2_9
LBB2_6:
	xorl	%eax, %eax
	movl	%eax, %esi
	movq	-32(%rbp), %rdi
	callq	_pthread_join
	cmpl	$0, %eax
	je	LBB2_8
## %bb.7:
	movl	$4, -4(%rbp)
	jmp	LBB2_9
LBB2_8:
	movl	_mails(%rip), %esi
	leaq	L_.str.1(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	$0, -4(%rbp)
	movl	%eax, -36(%rbp)         ## 4-byte Spill
LBB2_9:
	movl	-4(%rbp), %eax
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__DATA,__data
	.globl	_x                      ## @x
	.p2align	2
_x:
	.long	2                       ## 0x2

	.globl	_mails                  ## @mails
.zerofill __DATA,__common,_mails,4,2
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Value of x: %d\n"

L_.str.1:                               ## @.str.1
	.asciz	"Number of mails: %d\n"


.subsections_via_symbols
