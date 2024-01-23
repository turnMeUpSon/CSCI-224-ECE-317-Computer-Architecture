/*
Program Description: This program makes conversion between Binary and Hexadecimal:

Author: Ian Miller

Date: 23/01/2024
*/


#include <stdio.h>
#include <string.h>


// Function prototypes
void hexToBinary(char hexNumber[], char binaryNumber[]);


int main()
{
    char hexNumber[] = "0x9EB36A";
    char binaryNumber[100] = "";
    hexToBinary(hexNumber, binaryNumber);
    printf("Hexadecimal number: %s\n", hexNumber);
    printf("Binary number: %s\n", binaryNumber);
    return 0;
}


// Function to convert hexadecimal to binary
void hexToBinary(char hexNumber[], char binaryNumber[])
{
    int i = 0;
    int j = 0;

    // Skip leading spaces
    while (hexNumber[i] == ' ' || hexNumber[i] == '\t') {
        i++;
    }

    // Skip '0x' or '0X' prefix
    if (hexNumber[i] == '0' && (hexNumber[i + 1] == 'x' || hexNumber[i + 1] == 'X')) {
        i += 2;
    }
    
    for (; hexNumber[i] != '\0'; i++)
    {
        switch (hexNumber[i])
        {
        case '0':
        {
            // 0 -> 0000
            strcat(binaryNumber, "0000");
            break;
        }
        case '1':
        {
            // 0001 -> 1 (2 ^ 0 = 1)
            strcat(binaryNumber, "0001");
            break;
        }
        case '2':
        {
            // 2 -> 0010 (2 ^ 1 = 2)
            strcat(binaryNumber, "0010"); 
            break;
        }
        case '3':
        {
            // 3 -> 0011 (2 ^ 0 + 2 ^ 1 = 3)
            strcat(binaryNumber, "0011"); 
            break;
        }
        case '4':
        {
            // 4 -> 0100 (2 ^ 2 = 4)
            strcat(binaryNumber, "0100"); 
            break;
        }
        case '5':
        {
            // 5 -> 0101 (2 ^ 0 + 2 ^ 2 = 5)
            strcat(binaryNumber, "0101");
            break;
        }
        case '6':
        {
            // 6 -> 0110 (2 ^ 1 + 2 ^ 2 = 6)
            strcat(binaryNumber, "0110");
            break;
        }
        case '7':
        {
            // 7 -> 0111 (2 ^ 0 + 2 ^ 1 + 2 ^ 2 = 7)
            strcat(binaryNumber, "0111");
            break;
        }
        case '8':
        {
            // 8 -> 1000 (2 ^ 3 = 8)
            strcat(binaryNumber, "1000");
            break;
        }
        case '9':
        {
            // 9 -> 1001 (2 ^ 0 + 2 ^ 3 = 9)
            strcat(binaryNumber, "1001");
            break;
        }
        case 'A':
        {
            // A -> 10 -> 1010 (2 ^ 1 + 2 ^ 3 = 10)
            strcat(binaryNumber, "1010");
            break;
        }
        case 'B':
        {
            // B -> 11 -> 1011 (2 ^ 0 + 2 ^ 1 + 2 ^ 3 = 11)
            strcat(binaryNumber, "1011");
            break;
        }
        case 'C':
        {
            // C -> 12 -> 1100 (2 ^ 2 + 2 ^ 3 = 12)
            strcat(binaryNumber, "1100");
            break;
        }
        case 'D':
        {
            // D -> 13 -> 1101 (2 ^ 0 + 2 ^ 2 + 2 ^ 3 = 13)
            strcat(binaryNumber, "1101");
            break;
        }
        case 'E':
        {
            // E -> 14 -> 1110 (2 ^ 1 + 2 ^ 2 + 2 ^ 3 = 14)
            strcat(binaryNumber, "1110");
            break;
        }
        case 'F':
        {
            // F -> 15 -> 1111 (2 ^ 0 + 2 ^ 1 + 2 ^ 2 + 2 ^ 3 = 14)
            strcat(binaryNumber, "1111");
            break;
        }
        default:
        {
            printf("Invalid hexadecimal digit %c\n", hexNumber[i]);
            return;
        }
        }
    }
}