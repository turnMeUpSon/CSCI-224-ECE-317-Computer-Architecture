/*
Program Description: This program makes Radix-r to Decimal Conversion

Author: Ian Miller

Date: 24/01/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


#define BINARY_NUMBER_SIZE 400
#define HEX_NUMBER_SIZE 100


// Function prototypes
int binary_to_decimal(char binary_number[]);
int hex_to_decimal(const char* hex_number, int* decimal);
int base7_to_decimal(char base7_number[], int decimal);


typedef struct BinaryToDecimal {
    char binary_number[BINARY_NUMBER_SIZE];
} BinaryToDecimal;


typedef struct HexToDecimal {
    char hex_number[HEX_NUMBER_SIZE];
} HexToDecimal;


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


    // 2.b - Convert the hexadecimal number 0x6FB5 into decimal.
    // Hexadecimal number:  0x6FB5 -> Decimal number: 
    printf("\n2.b - Convert the hexadecimal number 0x6FB5 into decimal.\n");
    HexToDecimal task_2_b;
    snprintf(task_2_b.hex_number, HEX_NUMBER_SIZE, "6FB5");
    int decimal_res;
    int task_2_b_success = hex_to_decimal(task_2_b.hex_number, &decimal_res);
    if (task_2_b_success)
    {
        printf("Hexadecimal number: %s\n", task_2_b.hex_number);
        printf("Decimal number: %d\n", decimal_res);
    }
    else 
    {
        printf("Invalid hexadecimal format\n");
    }
    

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


int hex_to_decimal(const char* hex_number, int* decimal)
{
    *decimal = strtol(hex_number, NULL, 16);
    if (decimal == 0 && hex_number[0] != '0' && hex_number[1] != '\0')
    {
        return 0;
    }
    return 1;
}