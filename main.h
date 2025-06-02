#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>



/**
 * struct specifier_type - format specifier and its function
 * @spec: specifier
 * @func: function
 */

typedef struct specifier_type

{

char spec;

int (*func)(va_list);

} specifier_type;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_integer(va_list args);
int print_number(int n);
int (*get_format_func(char c))(va_list);

#endif
