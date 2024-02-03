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

## Task 1 ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Data-Representation-and-Operations/data_representation_and_operation_1.c)):
```
Using the same example from Section 9.6.4 for mapping 64-byte (26) pages from a 14-bit virtual address space to 12-bit physical memory,

The table from Fig. 9.20(b) on p. 796 shows a potential mapping of virtual pages (VPN) to physical pages (PPN).

Given this table, for the following virtual addresses, determine their mapping and indicate either the corresponding physical address or page fault (if the page is not in memory):

0x02AD
0x015A
0x011E
```
## Task 2 - **Radix-_r_  to Decimal Conversion** ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Data-Representation-and-Operations/data_representation_and_operation_2.c))
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

## Task 3 - **Decimal to Radix-_r_  Conversion** ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Data-Representation-and-Operations/data_representation_and_operation_3.c):
### a.  Convert the decimal number 215 into binary.
### b.  Convert the decimal number 3576 into hexadecimal.
### c.  Convert the decimal number 171 into base-_5_.

## Task 4 - **Converting Decimal to Signed Representation** ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Data-Representation-and-Operations/data_representation_and_operation_4.c):
### a.  Convert the decimal number -89 into 8-bit signed (two's-complement) representation.
### b.  Convert the decimal number 274 into 16-bit signed (two's-complement) representation.
### c.  Convert the decimal number -195 into 16-bit signed (two's-complement) representation.

## Task 5 - **Interpreting as Signed vs. Unsigned** ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Data-Representation-and-Operations/data_representation_and_operation_5.c):
### a.  If 110100102  is interpreted as an 8-bit signed (two's-complement) number, what is its decimal value?
### b.  If 110100102  is interpreted as an 8-bit unsigned number, what is its decimal value?
### c.  If 110100102  is interpreted as a 16-bit signed (two's-complement) number, what is its decimal value?

## Task 6 - **Characters & Strings** ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Data-Representation-and-Operations/data_representation_and_operation_6.c):
### a. What is the string corresponding to the following series of ASCII values:  
        0x54 0x68 0x69 0x73 0x20 0x69 0x73 0x20 0x41 0x53 0x43 0x49 0x49 0x21 0x00  
        
### b. Convert the string "Billikens rule!" into ASCII.
## Task 7 - **Operations on Data** ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Data-Representation-and-Operations/data_representation_and_operation_7.c)):
### Show the results for the following data operations:
    a.  11010111101101102  + 00010111000010112
    b.  0x8F3C5 - 0x3AB2
    c.  0000000101002  | 0001000100102
    d.  0000000101002  & 0001000100102
  

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