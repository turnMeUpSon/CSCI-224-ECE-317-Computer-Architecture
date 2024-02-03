/*
Program Description: This program does task 2 from Assignment #5: calculate  the volume of a trapezoidal prism, given the integer sizes for A, B, H, and L.

Author: Ian Miller

Date: 03/01/2024
*/


#include <stdio.h>
#include <stdint.h>


// Structures
typedef struct TrapPrism
{
    uint32_t a;
    uint32_t b;
    uint32_t h;
    uint32_t l;
} TrapPrism;


// Prototypes
uint32_t volTrapPrism(TrapPrism prism);


int main()
{   uint32_t a;
    uint32_t b;
    uint32_t h;
    uint32_t l;
    uint32_t prism_volume;

    printf("Enter base a of prism: \n");
    scanf("%u", &a);

    printf("Enter base b of prism: \n");
    scanf("%u", &b);

    printf("Enter height h of prism: \n");
    scanf("%u", &h);

    printf("Enter length l of prism: \n");
    scanf("%u", &l);

    TrapPrism prism;
    prism.a = a;
    prism.b = b;
    prism.h = h;
    prism.l = l;

    prism_volume = volTrapPrism(prism);

    printf("The volume of prism = %u", prism_volume);

    return 0;
}


uint32_t volTrapPrism(TrapPrism prism)
{
    uint32_t vol;

    asm volatile (
        "movl %1, %%eax\n" // Move base a of prism to eax register
        "addl %2, %%eax\n" // Add base b of prism to eax register
        "imul %3, %%eax\n" // Add h to eax register
        "imul %4, %%eax\n" // Add l to eax register
        "shrl $1, %%eax\n" // Divide eax register by 2
        "movl %%eax, %0\n" // Move the calculated result from eax register to ptr_prism_volume
        : "=r" (vol)
        : "r" (prism.a), "r" (prism.b), "r" (prism.h), "r" (prism.l)
        : "%eax"
    );

    return vol;
}