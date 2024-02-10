# CSCI-224-ECE-317-Computer-Architecture

## Assignment #1: C and Intel x86 Assembly
 
<a  name="readme-top"></a>
   
<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/turnMeUpSon/CSCI-224-ECE-317-Computer-Architecture">
    <img src="https://github.com/turnMeUpSon/CSCI-224-ECE-317-Computer-Architecture/blob/main/ComputerSystems.jpeg" alt="Logo" width="80" height="80">
  </a>
</div>



<!-- Task 1 -->

## Task 1 - Match the following assembly code sections with their equivalent C expressions ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/C-And-Intel-x86-Assembly/C_and_Intel_x86_Assembly_1.c)):
```
(1)
movl x, %eax
 incl %eax
 shll $3, %eax
 subl $3, %eax
 movl %eax, y
```

## Task 2 - ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/C-And-Intel-x86-Assembly/C_and_Intel_x86_Assembly_2.c)):
```
(2)
 movl $25, %eax
 sarl $3, %eax
 addl $-2, %eax
 movl %eax, y
```

## Task 3 - ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/C-And-Intel-x86-Assembly/C_and_Intel_x86_Assembly_3.c)):
```
(3)
 movl x, %eax
 xorl $0xffffffff, %eax
 movl %eax, y
```

## Task 4 - ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/C-And-Intel-x86-Assembly/C_and_Intel_x86_Assembly_4.c)):
```
(4)
 movl x, %eax
 movl %eax, %ebx
 shll $4, %ebx
 sarl $2, %eax
 subl %eax, %ebx
 movl %ebx, y
```

## Task 5 - ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/C-And-Intel-x86-Assembly/C_and_Intel_x86_Assembly_5.c)):
```
(5)
 movl x, %eax
 movl %eax, %ecx
 subl $3, %eax
 shll %cl, %eax
 movl %eax, y
```

## Task 6 - ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/C-And-Intel-x86-Assembly/C_and_Intel_x86_Assembly_6.c)):
```
(6)
 movl x, %eax
 movl %eax, %ebx
 shll $1, %ebx
 addl %eax, %ebx
 shll $3, %ebx
 subll %ebx, %eax
 movl %eax, y
```

## Task 7 - ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/C-And-Intel-x86-Assembly/C_and_Intel_x86_Assembly_7.c)):
```
addl $5, %eax
```

## Task 8 - ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/C-And-Intel-x86-Assembly/C_and_Intel_x86_Assembly_8.c)):
```
subw var, %cx
```

## Task 9 - ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/C-And-Intel-x86-Assembly/C_and_Intel_x86_Assembly_9.c)):
```
movl $ptr, %edx
```

## Task 10 - ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/C-And-Intel-x86-Assembly/C_and_Intel_x86_Assembly_10.c)):
```
movb %cl, 8(%esp)
```

## Task 11 ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/C-And-Intel-x86-Assembly/C_and_Intel_x86_Assembly_11.c)):
```
addw 6(%ebx, %eax, 4), %si
```
  
<p  align="right">(<a  href="#readme-top">back to top</a>)</p>

### Built With
All code is written on C and Assembly

## Getting Started

I run my code with [C online compiler](https://www.programiz.com/c-programming/online-compiler/)


<!-- LICENSE -->

## License

  

Distributed under the MIT License.

  

<p  align="right">(<a  href="#readme-top">back to top</a>)</p>

  
  
  

<!-- CONTACT -->

## Contact

  

Your Name - [Ian Miller](https://www.linkedin.com/in/ian-miller-620a63245/) - milleryan2003@gmail.com

  

Project Link: [https://github.com/turnMeUpSon/CSCI-224-ECE-317-Computer-Architecture](https://github.com/turnMeUpSon/CSCI-224-ECE-317-Computer-Architecture)

  

<p  align="right">(<a  href="#readme-top">back to top</a>)</p>
