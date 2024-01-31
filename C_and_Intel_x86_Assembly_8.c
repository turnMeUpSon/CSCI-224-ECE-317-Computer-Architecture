/*
Program Description: This program does task 8 from Assignment #3

Author: Ian Miller

Date: 31/01/2024
*/


#include <stdio.h>

int main() {
    int num1;
    int num2;
    int result;
    int *ptr_num1;
    int *ptr_num2;
    int *ptr_result;
    
    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);
    
    ptr_num1 = &num1;
    ptr_num2 = &num2;
    ptr_result = &result;

    asm(
        "movl %1, %%eax\n\t" // Move num1 to eax register
        "subl %2, %%eax\n\t" // Subtract num2 from eax's value
        "movl %%eax, %0" // Store the value from eax to result variable
        : "=r" (*ptr_result) // Output result
        : "r" (*ptr_num1), "r" (*ptr_num2) // Input num1, num2
        : "%eax"
    );

    printf("Result: %d\n", *ptr_result);

    return 0;
}