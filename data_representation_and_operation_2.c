/*
Program Description: This program makes Radix-r to Decimal Conversion

Author: Ian Miller

Date: 24/01/2024
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

#define BINARY_NUMBER_SIZE 400


// Function prototypes
int binary_to_decimal(char binary_number[]);
void hex_to_decimal(char hex_number, int decimal);
void base7_to_decimal(char base7_number[], int decimal);


typedef struct BinaryToDecimal {
    char binary_number[BINARY_NUMBER_SIZE];
} BinaryToDecimal;


int main()
{
    // 2.a - Convert the binary number 10100101110012 into decimal.
    // Binary number: 1010010111001 -> Decimal number: 5305
    BinaryToDecimal task_2_a;
    strcpy(task_2_a.binary_number, "1010010111001");
    int task_2_a_res = binary_to_decimal(task_2_a.binary_number);
    printf("\nRadix-r to Decimal Conversion:\n");
    printf("\n2.a - Convert the binary number 1010010111001 into decimal.\n");
    printf("Binary number: %s\n", task_2_a.binary_number);
    printf("Decimal number: %d\n", task_2_a_res);

    return 0;
}


int binary_to_decimal(char binary_number[])
{
    int length = strlen(binary_number);
    int decimal_num = 0;

    for (int i = length - 1; i >= 0; i--)
    {
        if (binary_number[i] == '1')
        {
            decimal_num += pow(2, length - 1 - i);
        }
    }

    return decimal_num;
}