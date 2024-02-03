/*
Given:

Initial values:
PC = 0x4B13
Address of L5 = 0x4B02
Condition codes evaluate to TRUE for jg.
Let's proceed with the computation:

1. Fetch Stage:
PC = 0x4B13
Fetch from memory at address 0x4B13: 0x7F (opcode for jg)
Increment PC to 0x4B14
2. Decode Stage:
icode = 7 (jXX)
ifun = (to be determined based on opcode)
rA = (none)
rB = (none)
3. Execute Stage:
valC = 0x4B02 (address of L5)
valP = 0x4B14 (next instruction address)
4. Memory Stage:
No memory access for this instruction.
5. Write-back Stage:
No register to update.
*/