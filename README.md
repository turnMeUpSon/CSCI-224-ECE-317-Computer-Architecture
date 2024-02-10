# CSCI-224-ECE-317-Computer-Architecture

## Assignment #6: Processor Architecture, Datapaths, and Pipelining
 
<a  name="readme-top"></a>
   
<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/turnMeUpSon/CSCI-224-ECE-317-Computer-Architecture">
    <img src="https://github.com/turnMeUpSon/CSCI-224-ECE-317-Computer-Architecture/blob/main/ComputerSystems.jpeg" alt="Logo" width="80" height="80">
  </a>
</div>



<!-- Task 1 -->

## Task 2 ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Data-Representation-and-Operations/data_representation_and_operation_1.c)):
```
Repeat problem #1 for the instruction:      rmmovl %edi, 12(%ebp)

Be sure to turn in both the highlighted datapath diagram and the specific datapath processing results (in terms of icode, ifun, rA, rB, valA, valB, valC, valE, valP, etc., akin to the table in the Aside on p. 367)

Assume the following initial values:   PC = 0x7C2, %ecx %edi = -18, %esp %ebp = 0x914A

Also assume that the initial values for each 4-byte value in memory is the value equivalent to half of its address (e.g. the 4-byte value at M[0x200] is 0x100).


```

## Task 3 ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Data-Representation-and-Operations/data_representation_and_operation_2.c)):
```
Repeat problem #1 for the instruction:      jg L5

Be sure to turn in both the highlighted datapath diagram and the specific datapath processing results (in terms of icode, ifun, rA, rB, valA, valB, valC, valE, valP, etc., akin to the table in the Aside on p. 367)

Assume the following initial values:   PC = 0x4B13 and the address of L5 = 0x4B02

Also assume that condition codes (computed via cmpl in the previous instruction) evaluate to TRUE for jg


```

## Task 5 - **Interpreting as Signed vs. Unsigned** ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Data-Representation-and-Operations/data_representation_and_operation_5.c):
```
For the following sequence of code:

         popl     %esi
         subl     %esi, %eax
         irmovl   $0x16, %edx
         mrmovl   8(%esp), %ebx
         addl     %ebx, %eax
         addl     %edx, %esi
         xorl     %eax, %edx
Identify all the true (a.k.a. read-after-write) data dependencies. Identify them by drawing circles around the dependent operands and drawing arrows between them (i.e. draw an arrow from each register write to the next read of that register... in a fashion similar to that used in class, and demonstrated on p. 398).

Using a high-level pipeline representation (such as used in Figures 4.44 or 4.54), for the sequence of code given above, show the state of the pipeline from cycles t through t + 16 (i.e. until you run out of room on the paper). Assume the popl instruction is in the Fetch stage in cycle t. You are welcome to use the following high-level pipeline diagram.
     Note: Assume that forwarding/bypassing is being used.
     Hint: Be mindful of potential load-use hazards.

At the end of the t + 5 cycle of execution, which registers are being read and which are being written?


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

  

Your Name - [Ian Miller](https://www.linkedin.com/in/ian-miller-620a63245/) - milleryan2003@gmail.com

  

Project Link: [https://github.com/turnMeUpSon/CSCI-224-ECE-317-Computer-Architecture](https://github.com/turnMeUpSon/CSCI-224-ECE-317-Computer-Architecture)

  

<p  align="right">(<a  href="#readme-top">back to top</a>)</p>
