/*
Program Description: This program does task 3 from Assignment #5:

Author: Ian Miller

Date: 03/01/2024
*/


#include <stdio.h>
#include <stdlib.h>

int global_var; // Global variable

int main() {
    int local_var; // Local variable
    int *dynamic_var = (int *)malloc(sizeof(int)); // Dynamically allocated variable

    // Output the addresses of the variables
    printf("Address of global_var: %p\n", &global_var);
    printf("Address of local_var: %p\n", &local_var);
    printf("Address of dynamic_var: %p\n", dynamic_var);

    // Inline assembly to get the address of the program code
    void *code_address;
    __asm__("leaq (%%rip), %0" : "=r" (code_address));
    printf("Address of program code: %p\n", code_address);

    free(dynamic_var); // Free dynamically allocated memory
    
    return 0;
}