/*
Program Description: This program makes Operations on Data:

Author: Ian Miller

Date: 25/01/2024
*/


#include <stdio.h>
#include <string.h>

#define BINARY_NUMBER_SIZE 400


// Structures
typedef struct BinaryNumbers
{
    char first_binary_number[BINARY_NUMBER_SIZE];
    char second_binary_number[BINARY_NUMBER_SIZE];
} BinaryNumbers;


typedef struct AddHexNumbers
{
    int num1;
    int num2;
} AddHexNumbers;


// Function prototype
void add_two_binary_numbers(const BinaryNumbers* numbers);
int add_two_hex_numbers(AddHexNumbers* numbers);
void bitwise_or(const BinaryNumbers* numbers);
void bitwise_and(const BinaryNumbers* numbers);


int main() {
    BinaryNumbers numbers;

    // Initialize binary numbers
    strcpy(numbers.first_binary_number, "1101011110110110");
    strcpy(numbers.second_binary_number, "0001011100001011");

    // Add two binary numbers and print the result
    printf("Binary addition result:\n");
    add_two_binary_numbers(&numbers);


    // Initialize hexadecimal numbers
    AddHexNumbers hexNumbers;
    hexNumbers.num1 = 0x8F3C5;
    hexNumbers.num2 = 0x3AB2;

    // Add two hexadecimal numbers and print the result
    printf("\nHexadecimal addition result:\n");
    int hexResult = add_two_hex_numbers(&hexNumbers);
    printf("Decimal result: %d\n", hexResult);


    // Initialize binary numbers
    BinaryNumbers numbers_for_bitwise_or;
    strcpy(numbers_for_bitwise_or.first_binary_number, "000000010100");
    strcpy(numbers_for_bitwise_or.second_binary_number, "000100010010");

    // Perform bitwise OR operation and print the result
    printf("Bitwise OR operation result:\n");
    bitwise_or(&numbers_for_bitwise_or);


    // Initialize binary numbers
    BinaryNumbers numbers_for_bitwise_and;
    strcpy(numbers_for_bitwise_and.first_binary_number, "000000010100");
    strcpy(numbers_for_bitwise_and.second_binary_number, "000100010010");

    // Perform bitwise AND operation and print the result
    printf("Bitwise AND result:\n");
    bitwise_and(&numbers);

    return 0;
}

// Function to add two binary numbers
void add_two_binary_numbers(const BinaryNumbers* numbers) {
    int carry = 0;
    char result[BINARY_NUMBER_SIZE + 2]; // Extra space for potential carry and null-termination

    int length = strlen(numbers->first_binary_number);
    int i;
    for (i = length - 1; i >= 0; i--) {
        int sum = (numbers->first_binary_number[i] - '0') + (numbers->second_binary_number[i] - '0') + carry;
        result[i + 1] = (sum % 2) + '0';
        carry = sum / 2;
    }
    result[0] = carry + '0'; // Store the final carry
    result[length + 1] = '\0'; // Null-terminate the result string

    // Print the result
    printf("%s + %s = ", numbers->first_binary_number, numbers->second_binary_number);
    if (result[0] == '0') {
        printf("%s\n", result + 1); // Skip the leading zero if no carry
    } else {
        printf("%s\n", result); // Print the full result including carry
    }
}


int add_two_hex_numbers(AddHexNumbers* numbers)
{
    return numbers->num1 + numbers->num2;
}


// Function to perform bitwise OR operation on two binary numbers
void bitwise_or(const BinaryNumbers* numbers) {
    char result[BINARY_NUMBER_SIZE + 1]; // Extra space for null-termination

    int length = strlen(numbers->first_binary_number);
    int i;
    for (i = 0; i < length; i++) {
        if (numbers->first_binary_number[i] == '1' || numbers->second_binary_number[i] == '1') {
            result[i] = '1';
        } else {
            result[i] = '0';
        }
    }
    result[length] = '\0'; // Null-terminate the result string

    // Print the result
    printf("%s | %s = %s\n", numbers->first_binary_number, numbers->second_binary_number, result);
}


void bitwise_and(const BinaryNumbers* numbers)
{
    char result[BINARY_NUMBER_SIZE + 1]; // Extra space for null-termination
    int length = strlen(numbers->first_binary_number);
    int i;

    for (i = 0; i < length; i++) {
        if (numbers->first_binary_number[i] == '1' && numbers->second_binary_number[i] == '1') {
            result[i] = '1';
        } else {
            result[i] = '0';
        }
    }
    result[length] = '\0'; // Null-terminate the result string

    // Print the result
    printf("%s & %s = %s\n", numbers->first_binary_number, numbers->second_binary_number, result);
}