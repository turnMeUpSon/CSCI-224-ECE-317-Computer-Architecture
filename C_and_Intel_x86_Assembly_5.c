/*
Program Description: This program does task 5 from Assignment #3

Author: Ian Miller

Date: 30/01/2024
*/


#include <stdio.h>

int main() {
    int x = 10; // Example value for x
    int y;

    // Inline assembly block
    asm(
        "movl %1, %%eax\n\t"     // Move the value of x into the eax register
        "movl %%eax, %%ecx\n\t"  // Move the value in eax to ecx
        "subl $3, %%eax\n\t"      // Subtract 3 from the value in eax
        "shll %%cl, %%eax\n\t"   // Shift the value in eax left by the value in cl (cl is 8 bits -> multiply by 2^8=256)
        "movl %%eax, %0"          // Move the value in eax to the output operand y
        : "=r" (y)                // Output operand (y)
        : "r" (x)                 // Input operand (x)
        : "%eax", "%ecx"          // Clobbers (registers that are modified)
    );

    // Print the value of y
    printf("Value of y: %d\n", y);

    return 0;
}