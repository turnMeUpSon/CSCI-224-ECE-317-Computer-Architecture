/*
Program Description: This program does task 10 from Assignment #3

Author: Ian Miller

Date: 31/01/2024
*/


#include <stdio.h>

int main() {
    char value = 'A'; // Example value to move
    char target[10]; // Target location

    // Inline Assembly to move value into target location
    asm(
        "movb %0, 8(%1)" // Move value to 8 bytes offset from target
        : // No output operands specified
        : "c" (value), "r" (target) // Input operands
        : // No clobbered registers specified
    );

    // Check if the value has been moved successfully
    printf("Value moved to target: %c\n", target[8]);

    return 0;
}