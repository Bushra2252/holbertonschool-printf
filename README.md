# Building _printf

### Description

The `printf` function is a standard C library function that sends formatted output to the standard output.  
This project is a collaborative effort by **Raghad** and **Bushra** to implement a simplified custom version of `printf`.

It demonstrates:
- Understanding how formatted output works internally in C
- Handling basic format specifiers:
  - Characters `%c`
  - Strings `%s`
  - Integers `%d` / `%i`
  - The percent sign `%%`
- Using **variadic arguments** via `<stdarg.h>`
- Custom logic to parse the format string and select the right output function

This project helps C programmers deepen their knowledge of:
- Variadic functions
- Format string parsing
- Low-level output formatting without relying on the standard library

By building this function from scratch in pure C, we gain practical insight into the core mechanics of formatted output.

---

###  Project Files

[![File](https://img.shields.io/badge/_printf.c-blue?style=flat-square)](#)
[![File](https://img.shields.io/badge/_putchar.c-green?style=flat-square)](#) 
[![File](https://img.shields.io/badge/format.c-purple?style=flat-square)](#)
[![File](https://img.shields.io/badge/get_format_func.c-orange?style=flat-square)](#) 
[![File](https://img.shields.io/badge/main.h-red?style=flat-square)](#)
[![File](https://img.shields.io/badge/README.md-brightgreen?style=flat-square)](#) 
[![File](https://img.shields.io/badge/man_3_printf-gray?style=flat-square)](#)
[![Folder](https://img.shields.io/badge/test/main.c-yellow?style=flat-square)](#)

main.h

‚->Contains function prototypes, macros, and the struct used for mapping format specifiers to handler functions.

main.c

‚->Contains the main test file that uses the _printf function to test various functionalities like printing characters, strings, integers, and the percent sign.

_printf.c

‚->Contains the implementation of the _printf function, which parses the format string and prints different types such as characters, strings, integers, and the percent sign using helper functions based on the format specifier.

_putchar.c

‚->Contains the _putchar function that prints a single character to the screen using the write function from the unistd.h library, returning the number of printed characters (1).

format.c

‚->Contains helper functions including:
‚‚≥  print_char ‚Äì prints a single character.
‚≥   print_string ‚Äì prints a string with handling for NULL cases.
     print_percent ‚Äì prints the percent % sign.
‚  ≥ print_number ‚Äì prints integers, including negative numbers.
‚≥   print_integer ‚Äì retrieves an integer from va_list and prints it using print_number.

get_format_func.c

‚-> Contains the get_format_func function, which returns a pointer to the correct print function based on the format specifier character.
‚It uses an array of structs to match specifiers to their corresponding functions ('c', 's', 'd', 'i', '%').
