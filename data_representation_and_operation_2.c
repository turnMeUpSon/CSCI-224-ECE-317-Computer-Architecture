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
#define BASE 7
#define HEX 16
#define BASE_7_NUMBER_SIZE 10


// Structures
typedef struct BinaryToDecimal {
    char binary_number[BINARY_NUMBER_SIZE];
} BinaryToDecimal;


typedef struct HexToDecimal {
    char hex_number[HEX_NUMBER_SIZE];
    int decimal;
} HexToDecimal;


typedef struct Base7ToDecimal {
    char base7_number[BASE_7_NUMBER_SIZE];
    int decimal;
} Base7ToDecimal;


// Function prototypes
int binary_to_decimal(BinaryToDecimal* converter);
int hex_to_decimal(HexToDecimal* convetrter);
int base7_to_decimal(Base7ToDecimal* converter);


int main()
{
    // 2.a - Convert the binary number 10100101110012 into decimal.
    // Binary number: 1010010111001 -> Decimal number: 5305
    BinaryToDecimal task_2_a;
    strcpy(task_2_a.binary_number, "1010010111001");
    int task_2_a_res = binary_to_decimal(&task_2_a);
    printf("\nRadix-r to Decimal Conversion:\n");
    printf("\n2.a - Convert the binary number 1010010111001 into decimal.\n");
    printf("Binary number: %s\n", task_2_a.binary_number);
    printf("Decimal number: %d\n", task_2_a_res);


    // 2.b - Convert the hexadecimal number 0x6FB5 into decimal.
    // Hexadecimal number:  0x6FB5 -> Decimal number: 28597
    printf("\n2.b - Convert the hexadecimal number 0x6FB5 into decimal.\n");
    HexToDecimal task_2_b;
    snprintf(task_2_b.hex_number, HEX_NUMBER_SIZE, "6FB5");
    if (hex_to_decimal(&task_2_b))
    {
        printf("Hexadecimal number: 0x%s\n", task_2_b.hex_number);
        printf("Decimal value: %d\n", task_2_b.decimal);
    }
    else
    {
        printf("Error: Invalid hexadecimal format\n");
    }


    // 2.c - Convert the base-7 number 31562 into decimal.
    // Base-7 number: 31562 -> Decimal number: 7835
    printf("\n2.c - Convert the base-7 number 31562 into decimal.\n");
    Base7ToDecimal task_2_c;
    strcpy(task_2_c.base7_number, "31562");
    if (base7_to_decimal(&task_2_c))
    {   printf("Base-7 number: %s\n", task_2_c.base7_number);
        printf("Decimal value: %d\n", task_2_c.decimal);
    }
    else
    {
        printf("Error: Invalid base-7 number\n");
    }

    return 0;
}


int binary_to_decimal(BinaryToDecimal* converter)
{
    int length = strlen(converter->binary_number);
    int decimal_num = 0;

    for (int i = length - 1; i >= 0; i--)
    {
        if (converter->binary_number[i] == '1')
        {
            decimal_num += pow(2, length - 1 - i);
        }
    }

    return decimal_num;
}


int hex_to_decimal(HexToDecimal* converter)
{
    converter->decimal = strtol(converter->hex_number, NULL, HEX);
    if (converter->decimal == 0 && converter->hex_number[0] != '0' && converter->hex_number[1] != '\0')
    {
        return 0;
    }
    return 1;
}


int base7_to_decimal(Base7ToDecimal* converter)
{
    converter->decimal = strtol(converter->base7_number, NULL, BASE);
    if (converter->decimal == 0 && converter->base7_number[0] != '0' && converter->base7_number[1] != '\0')
    {
        return 0;
    }
    return 1;
}