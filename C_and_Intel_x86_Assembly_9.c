/*
Program Description: This program does task 9 from Assignment #3

Author: Ian Miller

Date: 31/01/2024
*/


#include <stdio.h>

int main()
{
    int num;
    int *ptr;
    int res;

    printf("Enetr number: ");
    scanf("%d", &num);

    ptr = &num;

    asm(
        "movl %1, %%edx\n\t"
        "movl %%edx, %0"
        : "=r" (res)
        : "r" (*ptr)
        : "%edx"
    );

    printf("Result = %d", res);

    return 0;
}