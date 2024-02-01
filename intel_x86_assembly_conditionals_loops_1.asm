    movl    %eax, %edx      # Move a to edx
    subl    $3, %edx        # Subtract 3 from a and store the result in edx
    cmpl    %ebx, %edx      # Compare edx (a - 3) with b
    jle     .else_block     # Jump to else_block if a - 3 <= b

    # If (a - 3 > b)
    addl    $7, %eax        # Add 7 to a and store the result in eax
    movl    %eax, %ecx      # Move the result to c
    jmp     .end            # Jump to the end

.else_block:
    movl    %ecx, %edx      # Move c to edx
    andl    $7, %edx        # Perform c & 7 and store the result in edx
    cmpl    %ebx, %edx      # Compare edx with b
    jle     .else_if_block  # Jump to else_if_block if c & 7 <= b

    # If (b > (c & 7))
    shrl    $3, %ebx        # Right shift b by 3 and store the result in ebx
    movl    %ebx, %ecx      # Move the result to c
    jmp     .end            # Jump to the end

.else_if_block:
    # Else
    movl    $-1, %ecx       # Move -1 to c

.end:
