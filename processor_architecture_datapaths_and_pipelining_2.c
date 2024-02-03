/*
Program Description: This program does task 1 from Assignment #6

Author: Ian Miller

Date: 03/01/2024
*/


/*
1. Fetch Stage:
PC = 0x7C2
Fetch from memory at address 0x7C2: 0x60 (instruction byte)
Increment PC to 0x7C3

2. Decode Stage:
icode = 6 (rmmovl)
ifun = 0 (default for rmmovl)
rA = 6 (none)
rB = 7 (none)

3. Execute Stage:
valP = 0x7C3
valB = %ebp + 12 = 0x914A + 12 = 0x9156

4. Memory Stage:
No memory access for this instruction.

5. Write-back Stage:
No register to update.

Summary:
Signal	Value
icode	6
ifun	0
rA	6
rB	7
valA	-18
valB	0x9156
valC	0x9156
valE	-18
valM	(not used)
dstE	(not used)
dstM	(not used)
srcA	6
srcB	7
PC	0x7C3


                +--------------+
                |  Instruction |
                |    Memory    |
                +--------------+
                        |
                        v
                   +--------+
                   |  Fetch |
                   +--------+
                        |
                        v
                   +--------+
                   | Decode |
                   +--------+
                        |
                        v
                   +--------+
                   | Execute|
                   +--------+
                        |
                        v
                   +--------+
                   | Memory |
                   +--------+
                        |
                        v
                   +--------+
                   |Wrt Back|
                   +--------+
*/