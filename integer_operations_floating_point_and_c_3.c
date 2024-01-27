/*
Program Description: This program does Shifts and Bit Manipulation for Fast Multiplies and Divides:

Author: Ian Miller

Date: 27/01/2024
*/


#include <stdio.h>


// Prototypes
void task_3_a(int x);
void task_3_b(int x);
void task_3_c(int x);
void task_3_d(int x);


int main()
{
    task_3_a(11);
    task_3_b(7);
    task_3_c(35);
    task_3_d(102);

    return 0;
}


void task_3_a(int x)
{
    printf("\n3.a The following code corresponds to the mathematical equation: y = K * x, for some fixed value of K. In this case, what is K?\n");
    printf("x = 11, y = (x << 4) - x\n");
    
    int y;
    int res;

    y = (x << 4) - x;
    res  = y / x;

    printf("K = %d\n", res);
}


void task_3_b(int x)
{
    printf("\n3.b The following code similarly corresponds to: y = K * x, but for what value of K?\n");
    printf("x = 7, y = (x << 5) - (x << 2) + x\n");

    int y;
    int res;

    y = (x << 5) - (x << 2) + x;
    res = y / x;

    printf("K = %d\n", res); 
}


void task_3_c(int x)
{
    printf("\n3.c The following code corresponds to the mathematical equation: y = K * x, for some fixed value of K < 1. What is the value of K?\n");
    printf("x = 35, y = (x >> 1) - (x >> 3)\n");

    int y;
    int res;

    y = (x >> 1) - (x >> 3);
    res = y / x;

    printf("K = %d\n", res);
}


void task_3_d(int x)
{
    printf("\n3.d Relative to multiplication and division, what mathematical equation does the following code produce?\n");
    printf("x = 102, y = x & 0x0f\n");

    int y;
    y = x & 0x0f;
    printf("y = %d\n", y);
}