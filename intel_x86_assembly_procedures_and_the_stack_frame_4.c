/*
Program Description: This program does task 4 from Assignment #5:

Author: Ian Miller

Date: 03/01/2024
*/

/*
.text
.global main

some_procedure:
	pushl  %ebp
	movl   %esp,%ebp

	pushl  %esi
	pushl  %ebx

	movl   8(%ebp), %ecx
	movl   12(%ebp), %esi
	movl   $0x0, %eax
	test   %esi, %esi
	jle    L2

	movl   $0x0, %edx

  L1:	movl   (%ecx,%edx,4), %ebx
	imull  4(%ecx,%edx,4), %ebx
	imull  8(%ecx,%edx,4), %ebx
	addl   %ebx, %eax
	addl   $0x3, %edx
	cmpl   %edx, %esi
	jg     L1

   L2:	sarl   $2, %eax

	popl   %ebx
	popl   %esi
	leave
	ret    


main:
	pushl  %ebp
	movl   %esp,%ebp

	// local var(s)
	pushl	$0x6
	pushl	$0x15
	pushl	$0x9
	pushl	$0x7
	pushl	$0x29
	pushl	$0xc
	pushl	$0x3e
	pushl	$0x4
	pushl	$0x12
	pushl	$0x1e
	pushl	$0xd
	pushl	$0x19

	// call to some_procedure
	pushl	$12
	leal   4(%esp), %eax
	pushl	%eax
	call   some_procedure
	addl	$8, %esp

	// call to printf
	pushl	%eax
	pushl	$prtString
	call   printf
	addl	$8, %esp

	leave  
	ret    

.section	.rodata
    prtString:
	.string	"\nresult is %d\n"
*/


/*
1. Loop Counter:
In the procedure some_procedure(), the loop counter is held in the register %edx.

2. Number of Iterations:
The loop executes esi iterations. This is determined by the comparison cmp %edx, %esi and the jump jg L1 (greater than).

3. Array Storage:
The array is stored in the data section of memory, which is typically in the static memory area.

4. Register for Array Address:
The register %ecx holds the address of the array.

5. Register for Array Element Value:
The register %ebx holds the value of an individual array element.

6. Purpose of Two imul Instructions:
The two imul instructions are used for multiplication operations within the loop. They are likely performing some computation over the elements of the array.

7. Purpose of sarl $2, %eax Instruction:
The sarl $2, %eax instruction performs arithmetic right shift by 2 bits on the value in register %eax. This is equivalent to dividing %eax by 4. It likely calculates the average of the values computed in the loop.

8. Mathematical Formula Computed:
The procedure likely computes the sum of products of three consecutive elements of the array divided by 4.

9.Purpose of pushl %esi and pushl %ebx, popl %ebx and popl %esi Instructions:
These instructions are used to preserve the values of the registers %esi and %ebx at the beginning and end of the some_procedure() function. This is done to ensure that the callee does not modify the values of these registers which might be used by the caller.

10. Stack Organization:
In the stack diagram, the stack grows downward. At the top, we have the elements pushed in main(), followed by the return address and base pointer for main() stack frame. Below that, we have the elements pushed in some_procedure(), followed by the base pointer and return address for some_procedure() stack frame. Finally, we have the local variables and saved registers.

The mathematical formula computed by the procedure appears to be the sum of the products of three consecutive elements of the array, divided by 4. The sarl $2, %eax instruction likely computes the average of these products.
*/