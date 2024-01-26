/*
Program Description: This program does Operations on Data

Author: Ian Miller

Date: 26/01/2024
*/

#include <stdio.h>


// Prototypes
void task_1_a();
void task_1_b();
void task_1_c();
void task_1_d();
void task_1_e();


int main()
{
    task_1_a();
    task_1_b();
    task_1_c();
    task_1_d();
    task_1_e();
    return 0;
}


// 1.a 0x6E42B - 0x37CA
void task_1_a()
{
    int num1 = 0x6E42B;
    int num2 = 0x37CA;
    int result = num1 - num2;

    printf("\n1.a 0x6E42B - 0x37CA\n");
    printf("Hex value: %X - %X = %X\n", num1, num2, result);
    printf("Decimal value: %d - %d = %d\n", num1, num2, result);
}


// 1.b 10011010001012 >> 5
void task_1_b()
{
    unsigned int number = 0b1001101000101;
    unsigned int shifted_number = number >> 5;
    printf("\n1.b 1001101000101 >> 5\n");
    printf("Result of 1001101000101 >> 5 is: %u\n", shifted_number);
}


// 1.c 0x07AD4 ^ 0x03B5D
void task_1_c()
{
    unsigned int num1 = 0x07AD4;
    unsigned int num2 = 0x03B5D;
    unsigned int result = num1 ^ num2;
    printf("\n1.c 0x07AD4 ^ 0x03B5D");
    printf("Result of 0x07AD4 XOR 0x03B5D is: 0x%X\n", result);
}


// 1.d (23 << 4) - 0xFF
void task_1_d()
{
    int result;      
    int shifted_value = 23 << 4;
    // Subtract 0xFF (255) directly
    result = shifted_value - 0xFF;
    printf("\n1.d (23 << 4) - 0xFF\n");
    printf("(23 << 4) - 0xFF = %d\n", result);
}


// 1.e 0x9C % 6
void task_1_e()
{
    int result;
    result = 0x9C % 6;
    printf("0x9C %% 6 = %d\n", result);
}