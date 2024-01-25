/*
Program Description: This program makes Decimal to Radix-r Conversion:

Author: Ian Miller

Date: 25/01/2024
*/

#include <stdio.h>
#include <string.h>


#define BINARY_NUMBER_SIZE 400
#define HEX_NUMBER_SIZE 100
#define BASE_5_NUMBER_SIZE 20


// Structures
typedef struct DecimalToBinary
{
    int decimal;
    char binary_number[BINARY_NUMBER_SIZE];
} DecimalToBinary;


typedef struct DecimalToHex
{
    int decimal;
    char hex_number[HEX_NUMBER_SIZE];
} DecimalToHex;


typedef struct DecimalToBase5
{
    int decimal;
    char base5_number[BASE_5_NUMBER_SIZE];
} DecimalToBase5;


// Prototypes
int decimal_to_binary(DecimalToBinary* converter);
int decimal_to_hex(DecimalToHex* converter);
int decimal_to_base5(DecimalToBase5* converter);


int main()
{   // 3.a - Convert the decimal number 215 into binary.
    // Decimal number: 215 -> Binary number: 11010111
    printf("\nDecimal to Radix-r Conversion:\n");
    printf("\n3.a - Convert the decimal number 215 into binary.\n");
    DecimalToBinary task_3_a;
    task_3_a.decimal = 215;
    if (decimal_to_binary(&task_3_a))
    {
        printf("Decimal number: %d\n", task_3_a.decimal);
        printf("Binary representation: %s\n", task_3_a.binary_number);
    }
    else
    {
        printf("Error: Conversion failed.\n");
    }


    // 3.b - Convert the decimal number 3576 into hexadecimal.
    // Decimal number: 3576 -> Hexadecimal number: DF8
    printf("\n3.b - Convert the decimal number 3576 into hexadecimal.\n");
    DecimalToHex task_3_b;
    task_3_b.decimal = 3576;
    if (decimal_to_hex(&task_3_b))
    {
        printf("Decimal number: %d\n", task_3_b.decimal);
        printf("Hexadecimal representation: %s\n", task_3_b.hex_number);
    }
    else
    {
        printf("Error: Conversion failed.\n");
    }


    // 3.c - Convert the decimal number 171 into base-5.
    // Decimal number: 171 -> Base-5 number:
    printf("\n3.c - Convert the decimal number 171 into base-5.\n");
    DecimalToBase5 task_3_c;
    task_3_c.decimal = 171;
    if (decimal_to_base5(&task_3_c))
    {
        printf("Decimal number: %d\n", task_3_c.decimal);
        printf("Base-5 number: %s\n", task_3_c.base5_number);
    }
    else
    {
        printf("Error: Unable to convert to base-5\n");
    }
    
    return 0;
}


// We use like Euclidean Algoritm
int decimal_to_binary(DecimalToBinary* converter)
{
    if (converter->decimal < 0)
    {
        return 0;
    }

    int remainder;
    int quotient = converter->decimal;
    int index = 0;

    do
    {
        remainder = quotient % 2;
        converter->binary_number[index++] = (char)(remainder + '0');
        quotient = quotient / 2;
    } while (quotient > 0);
    
    // Reverse the binary string
    int start = 0;
    int end = index - 1;

    while (start < end)
    {
        char tmp = converter->binary_number[start];
        converter->binary_number[start] = converter->binary_number[end];
        converter->binary_number[end] = tmp;
        start++;
        end--;
    }

    converter->binary_number[index] = '\0';
    return 1;
}


// We use like Euclidean Algoritm
int decimal_to_hex(DecimalToHex* converter)
{
    int result = sprintf(converter->hex_number, "%X", converter->decimal);
    if (result < 0)
    {
        return 0;
    }
    return 1;   
}


// We use Euclidean Algoritm
int decimal_to_base5(DecimalToBase5* converter)
{
    if (converter->decimal < 0)
    {
        return 0;
    }

    int quotient = converter -> decimal;
    int remainder;
    int index = 0;

    do
    {
        remainder = quotient % 5;
        converter->base5_number[index++] = '0' + remainder;  // Convert to character
        quotient /= 5;
    } while (quotient > 0);
    
    // Reverse the characters in the base5_number array
    int start = 0;
    int end = index - 1;
    while (start < end) {
        char temp = converter->base5_number[start];
        converter->base5_number[start] = converter->base5_number[end];
        converter->base5_number[end] = temp;
        start++;
        end--;
    }

    // Null-terminate the string
    converter->base5_number[index] = '\0';
    return 1;
}