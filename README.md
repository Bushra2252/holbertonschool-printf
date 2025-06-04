#  Building _printf

### Description
The printf function is a standard C library function that sends formatted output to the standard output (stdout). It processes a format string containing ordinary characters and format specifiers (marked by %), which indicate how subsequent arguments are formatted and inserted into the output.
This project is a collaborative effort by Raghad and Bushra to implement a simplified custom version called _printf for learning purposes. The goal is to replicate key functionalities of the standard printf function, focusing on:
•	Understanding how formatted output works internally in C.
•	Handling basic format specifiers such as:
o	Characters (%c)
o	Strings (%s)
o	Integers (%d / %i)
o	The percent sign (%%)
The _printf function uses variadic arguments (stdarg.h) and custom logic to parse the format string, select appropriate helper functions for each specifier, and print the corresponding output.
This project serves as a foundational exercise for C programmers to deepen their knowledge of:
•	Variadic functions
•	Format string parsing
•	Low-level output formatting without relying on the standard library internals
By building this function from scratch in pure C, we gain practical insight into the core mechanics of formatted output in C programming.

