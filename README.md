# <a> <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/C_Programming_Language.svg/1200px-C_Programming_Language.svg.png" width=3% heigth=3% ></img></a> _printf 
<p align="center">
  <img src="https://readme-typing-svg.herokuapp.com?center=true&size=28&duration=3000&pause=1000&color=36BCF7&width=435&lines=Welcome+to+_printf+Project!;Custom+C+Printf+Function;" alt="Typing SVG" />
</p>
  
<h2 align="center">Description</h2>
<table>
  <tr>
    <td style="text-align:left;">
      The <code>_printf</code> project is the first group project at <a href="https://www.holbertonschool.com/">Holberton School</a>, developed by Raghad and Bushra.<br>
    It’s a simplified version of the C <code>printf</code> function, built to understand how formatted output works internally.<br><br> 
      It replicates basic functionality using variadic arguments from <code>&lt;stdarg.h&gt;</code>, without relying on the standard library.<br><br>
      <strong>Format specifiers handled:</strong> <code>%c</code> (char), <code>%s</code> (string), <code>%d</code> / <code>%i</code> (integers), <code>%%</code> (percent sign)<br>
      <strong>Practical skills gained:</strong> variadic functions,format string parsing,low-level output formatting in C
    </td>
    <td style="width:150px; text-align:right; vertical-align:top;">
      <img src="https://github.com/user-attachments/assets/5f8d33ce-fed8-438a-935c-a9916afef26e" width="130">
    </td>
  </tr>
</table>

---

 Prototype     `int _printf(const char *format, ...);`                          [View Flowchart](https://github.com/Bushra2252/holbertonschool-printf/blob/3167a6d5069cd8df140589074a2f6ca67b2a804d/photo_2025-06-06_17-56-19.jpg)


<h2 align="center">Project files</h2>


<p align="center">
  <a href="#"><img src="https://img.shields.io/badge/_printf.c-blue?style=flat-square" /></a>
  <a href="#"><img src="https://img.shields.io/badge/_putchar.c-green?style=flat-square" /></a>
  <a href="#"><img src="https://img.shields.io/badge/format.c-purple?style=flat-square" /></a>
  <a href="#"><img src="https://img.shields.io/badge/get_format_func.c-orange?style=flat-square" /></a>
  <a href="#"><img src="https://img.shields.io/badge/main.h-red?style=flat-square" /></a>
  <a href="#"><img src="https://img.shields.io/badge/README.md-brightgreen?style=flat-square" /></a>
  <a href="#"><img src="https://img.shields.io/badge/man_3_printf-gray?style=flat-square" /></a>
  <a href="#"><img src="https://img.shields.io/badge/test/main.c-yellow?style=flat-square" /></a>
</p>


**main.h**             → Contains function prototypes, macros, and the struct used for mapping format specifiers to handler functions.  
**main.c**             → Contains the main test file that uses the _printf function to test various functionalities like printing characters, strings, integers, and the percent sign.  
**_printf.c**          → Contains the implementation of the _printf function, which parses the format string and prints different types such as characters, strings, integers, and the percent sign using helper functions based on the format specifier.  
**_putchar.c**         → Contains the _putchar function that prints a single character to the screen using the write function from the <unistd.h> library, returning the number of printed characters (1).  
**format.c**           → Contains helper functions including: print_char, print_string, print_percent, print_number, and print_integer. These handle printing characters, strings (with NULL cases), the percent sign, and integers (including negatives).  
**get_format_func.c**  → Contains the get_format_func function, which returns a pointer to the correct print function based on the format specifier character. It uses an array of structs to map specifiers ('c', 's', 'd', 'i', '%') to their corresponding handlers.


<h2 align="center">Installation & Compilation</h2>
To use this `_printf` function in your project:

1. Clone the repository:
   ```bash
   git clone <repository_url>
   cd <repository_name>
   
   git clone https://github.com/Bushra2252/holbertonschool-printf.git
   cd holbertonschool-printf
   ```
2. Compile the project:
   ```bash
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o my_printf
   ```
3. Include the header file in your source code:
   ```c
   #include "main.h"
   ```

<h2 align="center">Requirements</h2> 

This project was developed and tested in the Holberton School Sandbox environment.

- Developed and tested in Holberton sandbox on Ubuntu 22.04 LTS.
- Programs and functions will be compiled with  gcc version 11.4.0 using the flags `-Wall -Werror -Wextra -pedantic`.
- Follows the Betty style.
- No use of global variables.
- Prototypes of the functions are in the `main.h` header file.

<h2 align="center">Examples</h2>

<table>
  <thead>
    <tr>
      <th>Input</th>
      <th>Output</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><code>_printf("Hello, Holberton\n")</code></td>
      <td><code>Hello, Holberton</code></td>
    </tr>
    <tr>
      <td><code>_printf("%s", "Hello")</code></td>
      <td><code>Hello</code></td>
    </tr>
    <tr>
      <td><code>_printf("This is a number: %d", 98)</code></td>
      <td><code>This is a number: 98</code></td>
    </tr>
    <tr>
      <td><code>_printf("This is a character: %c\n", 'H')</code></td>
      <td><code>This is a character: H</code></td>
    </tr>
    <tr>
      <td><code>_printf("%s\n", "This is a String")</code></td>
      <td><code>This is a String</code></td>
    </tr>
    <tr>
      <td><code>_printf("We are the Cohort %d\n", 20)</code></td>
      <td><code>We are the Cohort 20</code></td>
    </tr>
    <tr>
      <td><code>_printf("This is not a format specifier: %k.\n")</code></td>
      <td><code>This is not a format specifier: %k.</code></td>
    </tr>
    <tr>
      <td><code>_printf("This is a character: %c. This is a digit: %d.\n", 'H', 4)</code></td>
      <td><code>This is a character: H. This is a digit: 4.</code></td>
    </tr>
  </tbody>
</table>

<h2 align="center">Testing</h2>

The `_printf` function was tested by comparing its output with the original `printf` using various format specifiers.

### Example Test Cases 

```c
_printf("Character: %c\n", 'R');
printf("Character: %c\n", 'R');

_printf("String: %s\n", "Hello");
printf("String: %s\n", "Hello");

_printf("Number: %d\n", 42);
printf("Number: %d\n", 42);
```
If both functions return the same output for all test cases, the implementation is considered correct.

##  Authors

[![GitHub – Raghad Albeladi](https://img.shields.io/badge/GitHub-Raghad_Albeladi1-lightblue?style=flat-square&logo=github)](https://github.com/RaghadAlbeladi1)  
[![GitHub – Bushra2252](https://img.shields.io/badge/GitHub-Bushra2252-lightblue?style=flat-square&logo=github)](https://github.com/Bushra2252)
