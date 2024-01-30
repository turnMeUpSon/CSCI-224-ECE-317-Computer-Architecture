#include <stdio.h>

int main() {
    int x, a, b; // Variables for x, a, and b
    int y;

    // Prompt the user to enter the value of x
    printf("Enter the value of x: ");
    scanf("%d", &x); // Read the value of x from the user

    // Prompt the user to enter the value of a
    printf("Enter the value of a: ");
    scanf("%d", &a); // Read the value of a from the user

    // Prompt the user to enter the value of b
    printf("Enter the value of b: ");
    scanf("%d", &b); // Read the value of b from the user

    // Inline assembly block
    asm(
        "movl %1, %%eax\n\t"     // Move the value of x into the eax register
        "movl %2, %%ecx\n\t"     // Move the value of a into the ecx register
        "movl %3, %%edx\n\t"     // Move the value of b into the edx register
        "movl %%eax, %%ebx\n\t"  // Move the value in eax to ebx
        "shll %%ecx, %%ebx\n\t"  // Shift the value in ebx left by the value in ecx
        "addl %%eax, %%ebx\n\t"  // Add the value in eax to the value in ebx
        "shll %%edx, %%ebx\n\t"  // Shift the value in ebx left by the value in edx
        "subl %%ebx, %%eax\n\t"  // Subtract the value in ebx from the value in eax
        "movl %%eax, %0"         // Move the value in eax to the output operand y
        : "=r" (y)               // Output operand (y)
        : "r" (x), "r" (a), "r" (b) // Input operands (x, a, b)
        : "%eax", "%ebx", "%ecx", "%edx" // Clobbers (registers that are modified)
    );

    // Print the value of y
    printf("Value of y: %d\n", y);

    return 0;
}
