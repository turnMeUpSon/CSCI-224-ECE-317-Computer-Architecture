# CSCI-224-ECE-317-Computer-Architecture

## Assignment #5: Intel x86 Assembly, Procedures, and the Stack Frame
 
<a  name="readme-top"></a>
   
<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/turnMeUpSon/CSCI-224-ECE-317-Computer-Architecture">
    <img src="https://github.com/turnMeUpSon/CSCI-224-ECE-317-Computer-Architecture/blob/main/ComputerSystems.jpeg" alt="Logo" width="80" height="80">
  </a>
</div>



<!-- Task 1 -->

## Task 1 ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Intel-x86-Assembly-Procedures-and-the-Stack-Frame/intel_x86_assembly_procedures_and_the_stack_frame_1.c)):
```
What operation is performed by the following sequence of instructions?

    pushw  %ax 
    pushw  %dx 
    popw   %ax 
    popw   %dx 
```

## Task 2 - Create an assembly program that computes the volume of a trapezoidal prism, given the integer sizes for A, B, H, and L. ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Intel-x86-Assembly-Procedures-and-the-Stack-Frame/intel_x86_assembly_procedures_and_the_stack_frame_2.c)):
```
Use a procedure to compute the volume, and have that procedure take four input arguments: length of the prism (L), the height of the trapezoidal cross-section (H), the base width of the trapezoid (B), and the top width of the trapezoid (A). The corresponding procedure declaration in C would look lie:

    int tpVol = volTrapPrism (int L, int H, int A, int B);

Assume: For this problem, use a variable size of 4 bytes (32 bits) for all variables.

Note: Be sure to use the C/C++ calling protocol for passing arguments and managing the stack frame.

You're welcome to use a similar program, like abs_asm.s, as a starting point for your answer. Remember, the commands to build an assembly file like abs_asm.s are:

      as --32 abs_asm.s -o abs_asm.o
      gcc -m2 abs_asm.o -o abs_asm

```

## Task 3 ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Intel-x86-Assembly-Procedures-and-the-Stack-Frame/intel_x86_assembly_procedures_and_the_stack_frame_3.c)):
```
Given the four major sections of a process' memory organization (Text, Data, Heap, and Stack), indicate which area each of the following are stored in:

local variables
program code
dynamically-allocated variables, instantiated via new or malloc()
global variables
```

## Task 4 ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Intel-x86-Assembly-Procedures-and-the-Stack-Frame/intel_x86_assembly_procedures_and_the_stack_frame_4.c)):
```
For this problem you are given the assembly code: hw5_code.s. This code contains a procedure, some_procedure(), which performs some computation over the elements in an array.

Given this code, answer the questions below:

In the procedure, which register holds the loop counter? How many iterations does the loop execute (i.e. how many times is the loop body executed) ?

Where is the array stored (in which area of memory, relative to the virtual memory organization for the process)? Within the procedure, which register holds the address of the array? Which register holds the value of an individual array element?

Why are there two imul instructions in the procedure?

What is the purpose of the  sarl $2, %eax  instruction?   Hint: There is some correlation with both the answer from part a), and the number of elements in the array...

What mathematical formula does this procedure compute?
What is the purpose of the  pushl %esi  and  pushl %ebx  instructions, and the  popl %ebx  and  popl %esi  instructions, at the top and bottom of some_procedure(), respectively?

(2 points)
Assuming the processor is currently executing the loop in some_procedure(), give a diagram showing the organization of the stack, including the stack frames for both main() and some_procedure(). As done in class, identify (via value or description) the contents of each element on the stack.
```

## Task 5 ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Intel-x86-Assembly-Procedures-and-the-Stack-Frame/intel_x86_assembly_procedures_and_the_stack_frame_5.c)):
```
Given the following code:

      SomeProcedure:
            cmpl  %ebx, %eax
            jle   L1
            subl  %ebx, %eax
            jmp   L2

         L1:
            subl  %eax, %ebx
            movl  %ebx, %eax

         L2:
            movl  $0, %ecx
            addl  %eax, %ecx
            addl  %ecx, %edx
            ret
(2 points)
What is the calling protocol for the procedure?   In other words...

With repect to input argument(s):   How many input args are there?   How are they passed in?
With repect to return argument(s):   How many are there?   How are they passed out?
    Hint: You might want to double-check your count on the number of input args...
(1 point)
What does this procedure do?   If possible, give an equation in terms of the inputs...

(5 points)
This implementation is fairly inefficient, and doesn't follow the C/C++ calling protocol. Modify the original version of SomeProcedure() to correct this, including:

Assume you have an abs() procedure in your libraries (such as the one in abs_asm.s). Use the abs() procedure to simplify SomeProcedure().
Modify SomeProcedure() to use the C/C++ calling protocol -- i.e. to use a stack frame and pass arguments as appropriate through either the stack or register(s).
In addition to the modified version of SomeProcedure(), give a snippet of code from a sample parent procedure that demonstrates a call to SomeProcedure(), with appropriate inputs.


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
