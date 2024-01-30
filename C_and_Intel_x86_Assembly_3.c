/*
Program Description: This program does task 3 from Assignment #3

Author: Ian Miller

Date: 30/01/2024
*/


#include <stdio.h>


// Prototypes
void task_3(int x);


int main()
{   int x;

    printf("Enter any number of x: ");
    scanf("%d", &x);

    task_3(x);

    return 0;
}


void task_3(int x)
{
    int y;
    asm(
        "movl %1, %%eax\n\t"       // Move the value of x into the eax register
        "xorl $0xffffffff, %%eax\n\t" // Perform XOR operation with 0xffffffff (bitwise negation) on eax
        "movl %%eax, %0"           // Move the value in eax to the output operand y
        : "=r" (y)                 // Output operand (y)
        : "r" (x)                  // Input operand (x)
        : "%eax"                   // Clobbers (registers that are modified)
    );

    printf("value of y = %d\n", y);
}