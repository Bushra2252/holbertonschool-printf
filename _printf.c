#include "main.h"

/**
 * _printf - Custom implementation of printf
 * @format: The format string
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
va_list args;

int i = 0, count = 0;

int (*func)(va_list);
if (!format || (format[0] == '%' && !format[1]))

return (-1);

va_start(args, format);

while (format[i])
{
if (format[i] == '%' && format[i + 1])
{
func = get_format_func(format[i + 1]);
if (func)
{
count += func(args);
i += 2;
continue;
}
_putchar('%');
_putchar(format[i + 1]);
count += 2;
i += 2;
continue;
}
count += _putchar(format[i]);
i++;
}
va_end(args);

return (count);

}
