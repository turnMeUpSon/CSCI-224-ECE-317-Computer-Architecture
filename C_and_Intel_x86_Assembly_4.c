/*
Program Description: This program does task 4 from Assignment #3

Author: Ian Miller

Date: 30/01/2024
*/

#include <stdio.h>

int main() {
    int x = 20; // Example value for x
    int y;

    // Inline assembly block
    asm(
        "movl %1, %%eax\n\t"     // Move the value of x into the eax register
        "movl %%eax, %%ebx\n\t"  // Move the value in eax to ebx
        "shll $4, %%ebx\n\t"      // Shift the value in ebx left by 4 bits
        "sarl $2, %%eax\n\t"      // Shift the value in eax right by 2 bits (arithmetic right shift)
        "subl %%eax, %%ebx\n\t"  // Subtract the value in eax from ebx
        "movl %%ebx, %0"          // Move the value in ebx to the output operand y
        : "=r" (y)                // Output operand (y)
        : "r" (x)                 // Input operand (x)
        : "%eax", "%ebx"          // Clobbers (registers that are modified)
    );

    // Print the value of y
    printf("Value of y: %d\n", y);

    return 0;
}
