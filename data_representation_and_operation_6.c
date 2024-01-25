/*
Program Description: This program makes Characters & Strings:

Author: Ian Miller

Date: 25/01/2024
*/


#include <stdio.h>

#define MAX_STRING_LENGTH 100

// Function prototypes
void ascii_to_string(unsigned char* asciiValues);
void string_to_ascii(const char* str);

int main() {
    // ASCII values
    unsigned char asciiValues[] = {0x54, 0x68, 0x69, 0x73, 0x20, 0x69, 0x73, 0x20,
                                    0x41, 0x53, 0x43, 0x49, 0x49, 0x21, 0x00};

    // Convert ASCII values to string
    printf("String corresponding to ASCII values: ");
    ascii_to_string(asciiValues);
    
    // Convert string "Billikens rule!" to ASCII
    const char* str = "Billikens rule!";
    printf("\n\nASCII values corresponding to string \"%s\": ", str);
    string_to_ascii(str);

    return 0;
}

// Function to convert ASCII values to string
void ascii_to_string(unsigned char* asciiValues) {
    int i = 0;
    while (asciiValues[i] != 0x00) {
        printf("%c", asciiValues[i]);
        i++;
    }
}

// Function to convert string to ASCII values
void string_to_ascii(const char* str) {
    int i = 0;
    while (str[i] != '\0') {
        printf("0x%X ", str[i]);
        i++;
    }
}
