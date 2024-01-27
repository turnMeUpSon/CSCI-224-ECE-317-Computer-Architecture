/*
Program Description: This program does Floating-Point Representations

Author: Ian Miller

Date: 27/01/2024
*/


#include <stdio.h>
#include <stdint.h>


// Structures
typedef union {
    double value;
    uint64_t bits;
} DoubleUnion;


// Prototypes
float task_2_a(uint32_t bits);
void task_2_b(double num, char *binary);


int main() {
    // Task 1.a
    // Given binary representation
    uint32_t binary_representation = 0b01000111001101001101000000000000;

    // Convert binary representation to float
    float decimal_value = task_2_a(binary_representation);

    printf("Binary representation: %u\n", binary_representation);
    printf("Decimal value: %f\n", decimal_value);


    // Task 1.b
    // Decimal number
    double decimal = -936.4375;

    // Binary representation
    char binary[65];
    task_2_b(decimal, binary);
    printf("Binary representation: %s\n", binary);

    return 0;
}


float task_2_a(uint32_t bits)
{
    // 1-st step: 0 is indicating a positive number
    // 2-nd step: 10001110 is exponent with 8 bits => decimal is 142
    // 3-rd step: subtracting the exponent with bias value used in IEEE 754 single-precision floating point representation => 142 - 127 = 15
    // 4-th step: Add leading bit 1 to the left of mantissa => 1.01101001101
    // 5-th step: result = (-1) ^ sign * 1.M * 2 ^ (E - 127), where E = decimal value of exponent's binary representation
    // 6-th step: result = (-1) ^ 0 * (2 ^ 0 + 2 ^ -2 + 2 ^ -3 + 2 ^ -5 + 2 ^ -8 + 2 ^ -9 + 2 ^ -11) * 2 ^ 15 = 46288
    printf("\n2.a Given the following 32-bit single-precision floating-point representation, give its equivalent decimal value: 01000111 00110100 11010000 00000000\n");

    union {
        uint32_t i;
        float f;
    } value;

    value.i = bits;

    return value.f;
}


void task_2_b(double num, char *binary)
{
    printf("\n2.b Convert the decimal number -936.4375 into double-precision floating-point.\n");
    // 1st step - Convert 936 to binary = 1110101000
    // 2nd step - Convert 0.4375 to binary:
    // 0.4375 * 2 = 0.875 -> take 0
    // 0.875 * 2 = 1.75 -> take 1
    // 0.75 * 2 = 1.5 -> take 1
    // 0.5 * 2 = 1 -> take 1
    // 0 * 2 = 0 -> take 0
    // 3rd step: Add 01110 to 1110101000 => 1110101000.01110
    // 4th step: We have exp = 9 and sign = 1 because -936.4375
    // Move this part 01110 to 9 positions => 1.11010100001110
    // 5th step: Add bias 1023 to exp => 1023 + 9 = 1032 -> 1032 in binary = 10000001000
    // 6th step: connect sign = 1 with 10321 binary = 10000001000 and fraction = 11010100001110
    // Result =  1 10000001000 1101010000111000000000000000000000000000000000000000

    union {
        double f;
        uint64_t i;
    } converter;
    converter.f = num;

    for (int i = 63; i >= 0; i--) {
        if (converter.i & ((uint64_t)1 << i))
            binary[63 - i] = '1';
        else
            binary[63 - i] = '0';
    }
    binary[64] = '\0'; // Null terminator
}