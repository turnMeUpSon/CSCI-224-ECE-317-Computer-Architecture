    movl  $0, %eax         # a = 0
    movl  $1, %ebx         # b = 1
    movl  $2, %ecx         # i = 2

WHILE_LOOP:
    cmpl  %edi, %ecx       # Compare i with n
    jge   END_WHILE        # If i >= n, exit loop

    movl  %ebx, %edx       # c = b
    addl  %eax, %edx       # c = b + a
    movl  %ebx, %eax       # a = b
    movl  %edx, %ebx       # b = c

    addl  $1, %ecx         # Increment i
    jmp   WHILE_LOOP       # Repeat loop

END_WHILE:
    # Result is stored in %ebx
