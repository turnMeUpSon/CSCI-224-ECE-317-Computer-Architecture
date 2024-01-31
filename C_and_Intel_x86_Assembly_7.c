/*
Program Description: This program does task 7 from Assignment #3

Author: Ian Miller

Date: 31/01/2024
*/


int main()
{
    /*
    Operand 1:

    Data found/stored in: 
     - In the instruction addl $5, %eax, the value 5 is directly specified in the instruction. This means that the data (value 5) is part of the instruction itself.
    Size of data: 4 bytes:
    - In x86 assembly, immediate values are typically stored as 4-byte integers by default.
    Addressing mode: Immediate addressing mode
    - Immediate addressing mode means that the operand specifies a constant value (immediate data) directly within the instruction.
    
    Operand 2:

    Data found/stored in: register (%eax)
    - In the instruction addl $5, %eax, the data is found in the %eax register.
    Size of data: 4 bytes
    - Registers in x86 architecture are typically 32 bits or 4 bytes in size.
    Addressing mode: Register addressing mode
    - Register addressing mode means that the operand refers to a register containing the data needed for the instruction. In this case, %eax is the register used for the operand.
    */
   
    int result, operand1 = 10;
    int *ptr1;
    int *ptr2;

    ptr1 = &result;
    ptr2 = &operand1;

    asm(
        "movl %1, %%eax\n\t"
        "addl $5, %%eax\n\t" // Add 5 to %eax register
        "movl %eax, %0"
        : "=r" (*ptr1) // Output operand
        : "r" (*ptr2) // Input operand
    );

    printf("Result = %d", *ptr1);
}