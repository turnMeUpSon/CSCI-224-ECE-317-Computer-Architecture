/*
Program Description: This program does task 6 from Assignment #3

Author: Ian Miller

Date: 30/01/2024
*/


#include <stdio.h>

int main() {
    int x; // Variable for x
    int y;

    // Prompt the user to enter the value of x
    printf("Enter the value of x: ");
    scanf("%d", &x); // Read the value of x from the user

    // Inline assembly block
    asm(
        "movl %1, %%eax\n\t"     // Move the value of x into the eax register
        "movl %%eax, %%ebx\n\t"  // Move the value in eax to ebx
        "shll $1, %%ebx\n\t"     // Shift the value in ebx left by 1 bit
        "addl %%eax, %%ebx\n\t"  // Add the value in eax to the value in ebx
        "shll $3, %%ebx\n\t"     // Shift the value in ebx left by 3 bits
        "subl %%ebx, %%eax\n\t"  // Subtract the value in ebx from the value in eax
        "movl %%eax, %0"         // Move the value in eax to the output operand y
        : "=r" (y)               // Output operand (y)
        : "r" (x)                // Input operand (x)
        : "%eax", "%ebx"         // Clobbers (registers that are modified)
    );

    // Print the value of y
    printf("Value of y: %d\n", y);

    return 0;
}
