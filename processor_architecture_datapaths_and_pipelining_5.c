/*
1. popl     %esi       // This instruction pops a value from the stack and stores it in the %esi register. It effectively removes the topmost value from the stack and places it in the %esi register.
2. subl     %esi, %eax // This instruction subtracts the value in the %esi register from the value in the %eax register and stores the result back in %eax. It reads the value from %esi and writes the result to %eax.
3. irmovl   $0x16, %edx// This instruction loads the immediate value 0x16 into the %edx register. It writes the value 0x16 into %edx.
4. mrmovl   8(%esp), %ebx // This instruction loads a value from memory into the %ebx register. It reads the value stored at the address 8 + (%esp) and writes it into %ebx.
5. addl     %ebx, %eax // This instruction adds the value in the %ebx register to the value in the %eax register and stores the result back in %eax. It reads the value from %ebx and %eax, and writes the result to %eax.
6. addl     %edx, %esi //  This instruction adds the value in the %edx register to the value in the %esi register and stores the result back in %esi. It reads the value from %edx and %esi, and writes the result to %esi.
7. xorl     %eax, %edx //  This instruction performs a bitwise XOR operation between the values in the %eax and %edx registers and stores the result back in %edx. It reads the values from %eax and %edx, and writes the result to %edx.

*/

/*
  %esi
    |
    v
  %eax <----- %esi
    |
    v
  %ebx <----- 8(%esp)
    |
    v
  %edx
    |
    v
  %eax <----- %ebx
    |
    v
  %esi <----- %edx
    |
    v
  %edx <----- %eax

*/