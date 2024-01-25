/*
Program Description: This program makes Interpreting as Signed vs. Unsigned

Author: Ian Miller

Date: 25/01/2024
*/


#include <stdio.h>
#include <math.h>

#define BITS_8 8
#define BITS_16 16

// Structure for the binary number
typedef struct BinaryNumber {
    char bits[BITS_16 + 1]; // +1 for null terminator
} BinaryNumber;

// Function to calculate the decimal value of the 8-bit signed (two's-complement) number
int calculateDecimalValue8BitSigned(BinaryNumber *number) {
    int decimalValue = 0;
    int signMultiplier = 1; // Initialize to positive

    // Check if the number is negative (if the leftmost bit is 1)
    if (number->bits[0] == '1') {
        // Convert the number to its positive counterpart by taking two's complement
        for (int i = BITS_8 - 1; i >= 0; i--) {
            if (number->bits[i] == '1') {
                // Invert the bits after the first '1'
                for (int j = i - 1; j >= 0; j--) {
                    number->bits[j] = (number->bits[j] == '1') ? '0' : '1';
                }
                break;
            }
        }
        signMultiplier = -1; // Set the sign multiplier to negative
    }

    // Calculate the decimal value using the binary representation
    for (int i = BITS_8 - 1; i > 0; i--) {
        if (number->bits[i] == '1') {
            decimalValue += 1 << (BITS_8 - 1 - i);
        }
    }

    // Apply the sign multiplier
    decimalValue *= signMultiplier;

    return decimalValue;
}

// Function to calculate the decimal value of the 8-bit unsigned number
unsigned int calculateDecimalValue8BitUnsigned(BinaryNumber *number) {
    unsigned int decimalValue = 0;

    // Calculate the decimal value using the binary representation
    for (int i = BITS_8 - 1; i >= 0; i--) {
        if (number->bits[i] == '1') {
            decimalValue += pow(2, BITS_8 - 1 - i);
        }
    }

    return decimalValue;
}

// Function to calculate the decimal value of the 16-bit signed (two's-complement) number
int calculateDecimalValue16BitSigned(BinaryNumber *number) {
    int decimalValue = 0;
    int signMultiplier = 1; // Initialize to positive

    // Check if the number is negative (if the leftmost bit is 1)
    if (number->bits[0] == '1') {
        // Convert the number to its positive counterpart by taking two's complement
        for (int i = BITS_16 - 1; i >= 0; i--) {
            if (number->bits[i] == '1') {
                // Invert the bits after the first '1'
                for (int j = i - 1; j >= 0; j--) {
                    number->bits[j] = (number->bits[j] == '1') ? '0' : '1';
                }
                break;
            }
        }
        signMultiplier = -1; // Set the sign multiplier to negative
    }

    // Calculate the decimal value using the binary representation
    for (int i = BITS_16 - 1; i > 0; i--) {
        if (number->bits[i] == '1') {
            decimalValue += 1 << (BITS_16 - 1 - i);
        }
    }

    // Apply the sign multiplier
    decimalValue *= signMultiplier;

    return decimalValue;
}

int main() {
    // Initialize the binary number
    BinaryNumber number = {"11010010"};

    // Calculate and print the decimal value as 8-bit signed (two's-complement)
    int decimalValue8BitSigned = calculateDecimalValue8BitSigned(&number);
    printf("Decimal value of 11010010 as an 8-bit signed (two's-complement) number: %d\n", decimalValue8BitSigned);

    // Calculate and print the decimal value as 8-bit unsigned
    unsigned int decimalValue8BitUnsigned = calculateDecimalValue8BitUnsigned(&number);
    printf("Decimal value of 11010010 as an 8-bit unsigned number: %u\n", decimalValue8BitUnsigned);

    // Calculate and print the decimal value as 16-bit signed (two's-complement)
    int decimalValue16BitSigned = calculateDecimalValue16BitSigned(&number);
    printf("Decimal value of 11010010 as a 16-bit signed (two's-complement) number: %d\n", decimalValue16BitSigned);

    return 0;
}