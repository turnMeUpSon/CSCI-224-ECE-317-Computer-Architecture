/*
A. Registers holding program values:

x: %esi
n: %ebx
result: %eax
mask: %edi
B. Initial values:

result: not explicitly specified, likely initialized elsewhere
mask: initialized to -1 (%edi, $-1)
C. Test condition for mask:

The test condition for mask is performed with testl %edx, %edx instruction, which checks if the value in %edx (which is 1) is zero. This checks if the last bit is set or not.
D. Updating mask:

Inside the loop, mask is left-shifted by one bit (sall $1, %edx), effectively doubling its value.
E. Updating result:

Result is XORed with mask (result ^= mask).

*/

int loop(int x, int n) {
    int result; // Not specified in assembly, assuming initialized elsewhere
    int mask = -1;

    for (mask = -1; mask != 0; mask <<= 1) {
        result ^= mask;
    }

    return result;
}
