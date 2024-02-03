/*
Program Description: This program does task 1 from Assignment #5

Author: Ian Miller

Date: 03/01/2024
*/

#include <stdio.h>


int main()
{   unsigned short ax = 0x1234;
    unsigned short dx = 0x5678;

    asm volatile (
        "pushw %ax\n\t"   // Pushes the value of AX onto the stack
        "pushw %dx\n\t"   // Pushes the value of DX onto the stack
        "popw %ax\n\t"    // Pops the top of the stack into AX
        "popw %dx"        // Pops the top of the stack into DX
    );

    printf("AX: %04X\n", ax);
    printf("DX: %04X\n", dx);

    return 0;
}