# CSCI-224-ECE-317-Computer-Architecture

## Assignment #2: Integer Operations, Floating-Point, and C
 
<a  name="readme-top"></a>
   
<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/turnMeUpSon/CSCI-224-ECE-317-Computer-Architecture">
    <img src="https://github.com/turnMeUpSon/CSCI-224-ECE-317-Computer-Architecture/blob/main/ComputerSystems.jpeg" alt="Logo" width="80" height="80">
  </a>
</div>



<!-- Task 1 -->

## Task 1 - Operations on Data ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Integer-Operations-Floating-Point-And-C/integer_operations_floating_point_and_c_1.c)):
### a. 0x6E42B - 0x37CA
### b. 1001101000101 >> 5
### c. 0x07AD4 ^ 0x03B5D
### d. (23 << 4) - 0xFF
### e. 0x9C % 6

## Task 2 -  Floating-Point Representations: ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Integer-Operations-Floating-Point-And-C/integer_operations_floating_point_and_c_2.c)):
### a.  Given the following 32-bit single-precision floating-point representation, give its equivalent decimal value: 01000111 00110100 11010000 00000000
### b. Convert the decimal number -936.4375 into double-precision floating-point.

## Task 3 - Shifts and Bit Manipulation for Fast Multiplies and Divides: ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Integer-Operations-Floating-Point-And-C/integer_operations_floating_point_and_c_3.c)):
### a. The following code corresponds to the mathematical equation: y = K * x, for some fixed value of K. In this case, what is K? x = 11, y = (x << 4) - x
### b. The following code similarly corresponds to: y = K * x, but for what value of K? x = 7, y = (x << 5) - (x << 2) + x;
### c. The following code corresponds to the mathematical equation: y = K * x, for some fixed value of K < 1. What is the value of K? x = 35, y = (x >> 1) - (x >> 3)
### d. Relative to multiplication and division, what mathematical equation does the following code produce? x = 102, y = x & 0x0f

## Task 4 - Pseudocode using Integer Operations ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Integer-Operations-Floating-Point-And-C/integer_operations_floating_point_and_c_4.c)):
```
      a = 8
      b = 29
      c = 0

      while (b >= a)
      {
         b = b - a;
         c = c + 1;
      }

      print c
      print b
For the given values of a and b, what is printed?
If the initial values of a and b were instead a = 4 and b = 17, what would be printed?
How about if the initial values of a and b were a = 8 and b = 4 ?
How about if the initial values of a and b were a = 5 and b = 25 ?
What mathematical operation does this pseudocode perform? For arbitrary values of a and b, what does the final result in b correspond to? How about the final c value?
Create a C program that asks the user to enter values for a and b, then computes the values for b and c, as shown in pseudocode above, and finally print out these two results.
```

## Task 5 ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Integer-Operations-Floating-Point-And-C/integer_operations_floating_point_and_c_5.c)):
```
In image processing, a smoothing mask is sometimes used to soften hard edges and smooth out random noise. This is done by taking a weighted average of the pixel itself with its nearest neighbors.

For example, given the following common 3x3 smoothing filter like the following, when centered over a pixel at p[y][x]
the equation/code for smoothing that pixel is expressed as:

      p[y][x] = (4 * p[y][x] + p[y][x-1] + p[y][x+1] + p[y-1][x] + p[y+1][x]) / 8; 
Since multiplies and divides are time-consuming operations, give a version of this equation/code that uses much more efficient (i.e faster) operations.

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