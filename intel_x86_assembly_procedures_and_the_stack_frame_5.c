/*
Program Description: This program does task 5 from Assignment #5:

Author: Ian Miller

Date: 03/01/2024
*/



#include <stdlib.h>
#include <stdio.h>

int SomeProcedure(int a, int b) {
    int result;

    // Calculate the absolute differences between a and b
    int diff = abs(a - b);

    // Add the absolute difference to result
    result = diff;

    return result;
}


int main() {
    int a = 10;
    int b = 5;
    int result;

    // Call SomeProcedure with appropriate inputs
    result = SomeProcedure(a, b);

    printf("Result: %d\n", result);

    return 0;
}
