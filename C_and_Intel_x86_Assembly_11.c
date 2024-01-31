/*
Program Description: This program does task 11 from Assignment #3

Author: Ian Miller

Date: 31/01/2024
*/


#include <stdio.h>

int main() {
    unsigned short operand1 = 10; // Example data for operand 1
    unsigned short operand2 = 5;  // Example data for operand 2
    unsigned short result = 0;    // Initialize result to avoid undefined behavior

    // Inline Assembly to perform the addition operation
    asm(
        "addw 6(%%ebx, %%eax, 4), %%si" // Perform addition
        : "=S" (result)                   // Output: result stored in %si
        : "b" (&operand1), "a" (operand2) // Inputs: operand1 in %ebx, operand2 in %eax
        :                                   // No clobbered registers specified
    );

    // Check the result of the addition
    printf("Result of the addition: %hu\n", result);

    return 0;
}
