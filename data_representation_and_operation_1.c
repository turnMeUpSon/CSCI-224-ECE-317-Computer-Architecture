/*
Program Description: This program makes conversion between Binary and Hexadecimal:

Author: Ian Miller

Date: 23/01/2024
*/


#include <stdio.h>
#include <string.h>


#define BINARY_NUMBER_SIZE 400
#define HEX_NUMBER_SIZE 100


// Function prototypes
void hex_to_binary(char hex_number[], char binary_number[]);
void binary_to_hex(char binary_number[], char hex_number[]);


typedef struct ConversionBetweenHexAndBinary
{
    char hex_mumber[HEX_NUMBER_SIZE];
    char binary_number[BINARY_NUMBER_SIZE];
} ConversionBetweenHexAndBinary;


int main()
{
    // 1.a - Convert the hexadecimal number 0x9EB36A into binary.
    // Hexadecimal number: 0x9EB36A -> Binary number: 100111101011001101101010
    ConversionBetweenHexAndBinary task_1_a;
    strcpy(task_1_a.hex_mumber, "0x9EB36A");
    hex_to_binary(task_1_a.hex_mumber, task_1_a.binary_number);
    printf("\nConversion between Binary and Hexadecimal:\n");
    printf("\n1.a - Convert the hexadecimal number 0x9EB36A into binary.\n");
    printf("Hexadecimal number: %s\n", task_1_a.hex_mumber);
    printf("Binary number: %s\n", task_1_a.binary_number);

    // 1.b - Convert the binary number 111010110001011001 into hexadecimal.
    // Binary number: 111010110001011001 -> Hexadecimal number: 0x9EB36A
    ConversionBetweenHexAndBinary task_1_b;
    strcpy(task_1_b.binary_number, "111010110001011001");
    binary_to_hex(task_1_b.binary_number, task_1_b.hex_mumber);
    printf("\n1.b - Convert the binary number 111010110001011001 into hexadecimal.\n");
    printf("Binary number: %s\n", task_1_b.binary_number);
    printf("Hexadecimal number: %s\n", task_1_b.hex_mumber);

    return 0;
}


// Function to convert hexadecimal to binary
void hex_to_binary(char hex_number[], char binary_number[])
{
    int i = 0;
    int j = 0;

    // Skip leading spaces
    while (hex_number[i] == ' ' || hex_number[i] == '\t') {
        i++;
    }

    // Skip '0x' or '0X' prefix
    if (hex_number[i] == '0' && (hex_number[i + 1] == 'x' || hex_number[i + 1] == 'X')) {
        i += 2;
    }
    
    for (; hex_number[i] != '\0'; i++)
    {
        switch (hex_number[i])
        {
        case '0':
        {
            // 0 -> 0000
            strcat(binary_number, "0000");
            break;
        }
        case '1':
        {
            // 0001 -> 1 (2 ^ 0 = 1)
            strcat(binary_number, "0001");
            break;
        }
        case '2':
        {
            // 2 -> 0010 (2 ^ 1 = 2)
            strcat(binary_number, "0010"); 
            break;
        }
        case '3':
        {
            // 3 -> 0011 (2 ^ 0 + 2 ^ 1 = 3)
            strcat(binary_number, "0011"); 
            break;
        }
        case '4':
        {
            // 4 -> 0100 (2 ^ 2 = 4)
            strcat(binary_number, "0100"); 
            break;
        }
        case '5':
        {
            // 5 -> 0101 (2 ^ 0 + 2 ^ 2 = 5)
            strcat(binary_number, "0101");
            break;
        }
        case '6':
        {
            // 6 -> 0110 (2 ^ 1 + 2 ^ 2 = 6)
            strcat(binary_number, "0110");
            break;
        }
        case '7':
        {
            // 7 -> 0111 (2 ^ 0 + 2 ^ 1 + 2 ^ 2 = 7)
            strcat(binary_number, "0111");
            break;
        }
        case '8':
        {
            // 8 -> 1000 (2 ^ 3 = 8)
            strcat(binary_number, "1000");
            break;
        }
        case '9':
        {
            // 9 -> 1001 (2 ^ 0 + 2 ^ 3 = 9)
            strcat(binary_number, "1001");
            break;
        }
        case 'A':
        {
            // A -> 10 -> 1010 (2 ^ 1 + 2 ^ 3 = 10)
            strcat(binary_number, "1010");
            break;
        }
        case 'B':
        {
            // B -> 11 -> 1011 (2 ^ 0 + 2 ^ 1 + 2 ^ 3 = 11)
            strcat(binary_number, "1011");
            break;
        }
        case 'C':
        {
            // C -> 12 -> 1100 (2 ^ 2 + 2 ^ 3 = 12)
            strcat(binary_number, "1100");
            break;
        }
        case 'D':
        {
            // D -> 13 -> 1101 (2 ^ 0 + 2 ^ 2 + 2 ^ 3 = 13)
            strcat(binary_number, "1101");
            break;
        }
        case 'E':
        {
            // E -> 14 -> 1110 (2 ^ 1 + 2 ^ 2 + 2 ^ 3 = 14)
            strcat(binary_number, "1110");
            break;
        }
        case 'F':
        {
            // F -> 15 -> 1111 (2 ^ 0 + 2 ^ 1 + 2 ^ 2 + 2 ^ 3 = 14)
            strcat(binary_number, "1111");
            break;
        }
        default:
        {
            printf("Invalid hexadecimal digit %c\n", hex_number[i]);
            return;
        }
        }
    }
}


// Function to convert binary to hexadecimal
void binary_to_hex(char binary_number[], char hex_number[])
{
    int binary_num_len = strlen(binary_number);


    // calculate the number of hexadecimal digits required to represent a binary number of length len.
    int hex_digits = (binary_num_len + 3) / 4;


    // determine how many leading zeros need to be added to the binary representation so that it aligns with the nearest multiple of 4 bits. 
    int leading_zeroes = 4 * hex_digits - binary_num_len;


    int i;


    // Push the leading zeros to binary number
    char binary_num_with_zeroes[100];
    strcpy(binary_num_with_zeroes, "");
    for (i = 0; i < leading_zeroes; i++)
    {
        strcat(binary_num_with_zeroes, "0");
    }
    strcat(binary_num_with_zeroes, binary_number);


    // Convert each group of 4 bits to a hexadecimal digit
    for (i = 0; i < hex_digits; i++)
    {
        char hex_digit[5];
        strncpy(hex_digit, binary_num_with_zeroes + i * 4, 4);
        hex_digit[4] = '\0';

        if (strcmp(hex_digit, "0000") == 0)
        {
            strcat(hex_number, "0");
        }
        else if (strcmp(hex_digit, "0001") == 0)
        {
            strcat(hex_number, "1");
        }
        else if (strcmp(hex_digit, "0010") == 0)
        {
            strcat(hex_number, "2");
        }
        else if (strcmp(hex_digit, "0011") == 0)
        {
            strcat(hex_number, "3");
        }
        else if (strcmp(hex_digit, "0100") == 0)
        {
            strcat(hex_number, "4");
        }
        else if (strcmp(hex_digit, "0101") == 0)
        {
            strcat(hex_number, "5");
        }
        else if (strcmp(hex_digit, "0110") == 0)
        {
            strcat(hex_number, "6");
        }
        else if (strcmp(hex_digit, "0111") == 0)
        {
            strcat(hex_number, "7");
        }
        else if (strcmp(hex_digit, "1000") == 0)
        {
            strcat(hex_number, "8");
        }
        else if (strcmp(hex_digit, "1001") == 0)
        {
            strcat(hex_number, "9");
        }
        else if (strcmp(hex_digit, "1010") == 0)
        {
            strcat(hex_number, "A");
        }
        else if (strcmp(hex_digit, "1011") == 0)
        {
            strcat(hex_number, "B");
        }
        else if (strcmp(hex_digit, "1100") == 0)
        {
            strcat(hex_number, "C");
        }
        else if (strcmp(hex_digit, "1101") == 0)
        {
            strcat(hex_number, "D");
        }
        else if (strcmp(hex_digit, "1110") == 0)
        {
            strcat(hex_number, "E");
        }
        else if (strcmp(hex_digit, "1111") == 0)
        {
            strcat(hex_number, "F");
        }
        else
        {
            printf("Invalid binary number\n");
            return;
        }
    }
}