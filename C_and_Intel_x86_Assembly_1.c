#include <stdio.h>

// Define task_1 function
int task_1(int x) {
    int y;

    // Inline assembly code
    asm (
        "movl %1, %%eax\n\t"    // Move the value of x into the %eax register
        "incl %%eax\n\t"        // Increment the value in %eax by 1
        "shll $3, %%eax\n\t"    // Shift left logical by 3 bits (multiply by 8)
        "subl $3, %%eax\n\t"    // Subtract 3 from the value in %eax
        "movl %%eax, %0"        // Move the value in %eax to y
        : "=r" (y)              // Output operand
        : "r" (x)               // Input operand
        : "%eax"                // Clobbers
    );

    return y; 
}


int main() {
    int x = 5;
    int y = task_1(x);

    printf("Value of y: %d\n", y);

    return 0;
}
