# CSCI-224-ECE-317-Computer-Architecture

## Assignment #7: Pipelining and Hazards, Virtual vs. Physical Memory, and Cache and Memory Hierarchies
 
<a  name="readme-top"></a>
   
<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/turnMeUpSon/CSCI-224-ECE-317-Computer-Architecture">
    <img src="https://github.com/turnMeUpSon/CSCI-224-ECE-317-Computer-Architecture/blob/main/ComputerSystems.jpeg" alt="Logo" width="80" height="80">
  </a>
</div>



<!-- Task 1 -->

## Task 1 ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Pipelining-and-Hazards-Virtual-Physical-Memory-and-Cache-and-Memory-Hierarchies/pipelining_and_hazards_virtual_vs_physical_memory_and_cache_and_memory_hierarchies_1.c)):
```
Using the same example from Section 9.6.4 for mapping 64-byte (26) pages from a 14-bit virtual address space to 12-bit physical memory,

The table from Fig. 9.20(b) on p. 796 shows a potential mapping of virtual pages (VPN) to physical pages (PPN).

Given this table, for the following virtual addresses, determine their mapping and indicate either the corresponding physical address or page fault (if the page is not in memory):

0x02AD
0x015A
0x011E
```
## Task 2 ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Pipelining-and-Hazards-Virtual-Physical-Memory-and-Cache-and-Memory-Hierarchies/pipelining_and_hazards_virtual_vs_physical_memory_and_cache_and_memory_hierarchies_2.c))
```
The following table gives the parameters for a number of different caches. For each cache, fill in the missing fields in the table. Recall that m is the number of physical address bits, C is the cache size (number of data bytes), B is the block size in bytes, E is the associativity, S is the number of cache sets, t is the number of tag bits, s is the number of set index bits, and b is the number of block offset bits.
Cache m   C    B E   S   t   s   b
1.    32 1024  4 4
2.    32 1024  4 256 
3.    32 1024  8 1 
4.    32 1024  8 128 
5.    32 1024  32 1 
6.    32 1024  32 4
```

## Task 3 ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Pipelining-and-Hazards-Virtual-Physical-Memory-and-Cache-and-Memory-Hierarchies/pipelining_and_hazards_virtual_vs_physical_memory_and_cache_and_memory_hierarchies_3.c)):
### a.
```
Suppose we have a system with the following properties:
. The memory is byte addressable.
. Memory accesses are to 1-byte words (not to 4-byte words).
. Addresses are 13 bits wide.
. The cache is four-way set associative (E = 4), with a 4-byte block size (B = 4) and eight sets (S = 8).
Consider the following cache state. All addresses, tags, and values are given in hexadecimal format. The Index column contains the set index for each set of four lines. The Tag columns contain the tag value for each line. The V columns contain the valid bit for each line. The Bytes 0–3 columns contain the data for each line, numbered left-to-right starting with byte 0 on the left.
4-way set associative cache
Bytes 0–3 Tag V Bytes 0–3 Tag V Bytes 0–3 Tag V Bytes 0–3
0 F0 1 ED320AA2 8A 1 BF801DFC 14 1 EF09862A BC 0 25446F1A 1 BC 0 033ECD38 A0 0 167BED5A BC 1 8E4CDF18 E4 1 FBB71202 2 BC 1 549E1EFA B6 1 DC81B214 00 0 B61F7B44 74 0 10F5B82E 3 BE 0 2F7E3DA8 C0 1 2795A474 C4 0 07116BD8 BC 0 C7B7AFC2 4 7E 1 32211C2C 8A 1 22C2DC34 BC 1 BADD37D8 DC 0 E7A239BA 5 98 0 A9762BEE 54 0 BC91D592 98 1 80BA9BF6 BC 1 4816810A 6 38 0 5D4DF7DA BC 1 69C28C74 8A 1 A8CE7FDA 38 1 FA93EB48 7 8A 1 042A326A 9E 0 B186560E CC 1 963047F2 BC 1 F81D4230
A. What is size (C) of this cache in bytes?
B. The box that follows shows the format of an address (one bit per box). Indicate (by labeling the diagram) the fields that would be used to determine the following:
CO The cache block offset CI The cache set index CT The cache tag
       12    11    10    9    8    7    6    5    4    3    2    1    0

```
### b
```
Supppose that a program using the cache in Problem 6.31 references the 1-byte word at address 0x071A. Indicate the cache entry accessed and the cache byte value returned in hex. Indicate whether a cache miss occurs. If there is a cache miss, enter “–” for “Cache byte returned”. Hint: Pay attention to those valid bits!
A. Address format (one bit per box):
       12    11    10    9    8    7    6    5    4    3    2    1    0

B. Memory reference: Parameter Value
Block offset (CO) 0x Index (CI) 0x Cache tag (CT) 0x Cache hit? (Y/N)
Cache byte returned 0x

Repeat Problem #6.32 for the address 0x13DE

Repeat Problem #6.32 for the address 0x16C9
```

## Task 4 ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Pipelining-and-Hazards-Virtual-Physical-Memory-and-Cache-and-Memory-Hierarchies/pipelining_and_hazards_virtual_vs_physical_memory_and_cache_and_memory_hierarchies_4.c)):
```
A given computer system has the following cache access times:
L1 cache: 3 processor cycles
L2 cache: 10 processor cycles
L3 cache: 30 processor cycles
Main memory: 120 processor cycles
Program A has the following miss rates:

L1 cache: 4%
L2 cache: 30%
L3 cache: 50%
Main memory: (assume it always hits in main memory; i.e. miss rate is 0%)
What are the hit rates for each cache level?

What is the average memory access time (AMAT) for Program A?

Program B has the following hit rates:

L1 cache: 93%
L2 cache: 80%
L3 cache: 65%
Main memory: (assume it always hits in main memory; i.e. hit rate is 100%)
What are the miss rates for each cache level?

What is the average memory access time (AMAT) for Program B?

Oftentimes, the program with the lower L1 cache miss rate has the better (lower) average memory access time (AMAT)? Is that true in this case? If not, why?

For Program A, what speedup would be achieved if you were able to optimize the program to achieve an 85% hit rate in L2 cache?
     Note: "Speedup" refers to the ratio (fraction) of the original AMAT (with 30% miss rate) to the new AMAT (with 80% 85% hit rate).

For Program B, if the L1 cycle access time was increased from 3 cycles to 4 cycles (during architecture design), what minimum hit rate would be needed in the L1 cache to achieve the same AMAT?


```

## Task 5 ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Pipelining-and-Hazards-Virtual-Physical-Memory-and-Cache-and-Memory-Hierarchies/pipelining_and_hazards_virtual_vs_physical_memory_and_cache_and_memory_hierarchies_5.txt)):
```
Using the following assembly code
      some_proc:
           mrmovl   4(%esp), %ecx
           mrmovl   8(%esp), %edx
           mrmovl   12(%esp), %ebx
      
        LOOP:
           mrmovl   0(%ecx), %edi
           mrmovl   0(%edx), %eax
           addl     %eax, %edi
           rmmovl   %edi, 0(%edx)
           iaddl    $4, %ecx
           iaddl    $4, %edx
           iaddl    $-1, %ebx
           jne      LOOP

           ret
Identify all the true (a.k.a. read-after-write) data dependencies. Identify them by drawing circles around the dependent operands and drawing arrows between them (i.e. draw an arrow from each register write to the next read of that register... in a fashion similar to that used in class, and demonstrated on p. 398).

     Hint: Be mindful of loop-based dependencies.

Using a high-level pipeline diagram (such as used in Figures 4.44 or 4.54), for the sequence of code given above, show the state of the pipeline from cycles t through t + 16 (i.e. until you run out of room on the paper).

Assume the   mrmovl 0(%ecx), %edi   instruction is in the Fetch stage in cycle t.

Watch out for Load-Use data hazards and Branch Mispredict control hazards.

     Note 1: Assume that the conditional branch is predicted as not taken (i.e. condition is False), but upon execution, it resolves as taken (i.e. condition is True).
     Note 2: Assume that forwarding/bypassing is being used in the pipeline.
     Note 3: This example assumes the existence of an iaddl instruction (which is just like addl, but allows an immediate for first source).

At the end of the t + 4 cycle of execution, which registers are being read and which are being written?
```

<p  align="right">(<a  href="#readme-top">back to top</a>)</p>

  
  
  

### Built With
All code is written on C and Assembly


## Getting Started

  

Make sure you have successfully installed [CMake](https://marketplace.visualstudio.com/items?itemName=twxs.cmake), [CMake Tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools) and [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)


<!-- LICENSE -->

## License

  

Distributed under the MIT License.

  

<p  align="right">(<a  href="#readme-top">back to top</a>)</p>

  
  
  

<!-- CONTACT -->

## Contact

  

Your Name - [Ian Miller](https://www.linkedin.com/in/ian-miller-620a63245/) - email@example.com

  

Project Link: [https://github.com/turnMeUpSon/CSCI-224-ECE-317-Computer-Architecture](https://github.com/turnMeUpSon/CSCI-224-ECE-317-Computer-Architecture)

  

<p  align="right">(<a  href="#readme-top">back to top</a>)</p>