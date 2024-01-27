/*
Program Description: This program does Pseudocode using Integer Operations

Author: Ian Miller

Date: 27/01/2024
*/


#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter the value of a: ");
    scanf("%d", &a);
    
    printf("Enter the value of b: ");
    scanf("%d", &b);
    
    c = 0;
    while (b >= a) {
        b = b - a;
        c = c + 1;
    }
    
    printf("Final value of c: %d\n", c);
    printf("Final value of b: %d\n", b);
    
    return 0;
}
