/*
Program Description: This program does task 2 from Assignment #3

Author: Ian Miller

Date: 30/01/2024
*/


#include <stdio.h>

int task_2();


int main() {
    int y = calculate_y();  // Call the function to perform the inline assembly operations

    // Print the value of y
    printf("Value of y: %d\n", y);

    return 0;
}


// Function to perform the inline assembly operations and return the result
int task_2() {
    int y;

    // Inline assembly block
    asm(
        "movl $25, %%eax\n\t"   // Move the immediate value 25 into the eax register
        "sarl $3, %%eax\n\t"    // Perform arithmetic right shift by 3 bits
        "addl $-2, %%eax\n\t"   // Subtract 2 from the value in eax
        "movl %%eax, %0"        // Move the value in eax to the output operand y
        : "=r" (y)              // Output operand (y)
        :                        // No input operands needed
        : "%eax"                // Clobbers (registers that are modified)
    );

    return y;
}