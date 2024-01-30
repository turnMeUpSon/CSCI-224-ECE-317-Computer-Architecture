/*
Program Description: This program does task 1 from Assignment #3

Author: Ian Miller

Date: 30/01/2024
*/


#include <stdio.h>

// Prototypes
int task_1(int x);


int main() {
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    int y = task_1(x);

    // Print the value of y
    printf("Value of y: %d\n", y);

    return 0;
}


int task_1(int x) {
    int y;

    // Inline assembly block
    asm(
        "movl %1, %%eax\n\t"   // Move the value of x into the eax register
        "incl %%eax\n\t"       // Increment the value in the eax register by 1
        "shll $3, %%eax\n\t"   // Shift the value in the eax register left by 3 bits (multiply by 8)
        "subl $3, %%eax\n\t"   // Subtract 3 from the value in the eax register
        "movl %%eax, %0"       // Move the value in the eax register to the output operand y
        : "=r" (y)             // Output operand (y)
        : "r" (x)              // Input operand (x)
        : "%eax"               // Clobbers (registers that are modified)
    );

    return y;
}