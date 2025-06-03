#include "main.h"

/**
* get_format_func - finds the correct print function for specifier
* @c: format specifier character
* Return: pointer to corresponding function, or NULL if not found
*/
int (*get_format_func(char c))(va_list)
{
specifier_type formats[] = {
{'c', print_char},
{'s', print_string},
{'d', print_integer},
{'i', print_integer},
{'%', print_percent},
{0, NULL}
};
int i = 0;

while (formats[i].spec)
{
if (formats[i].spec == c)
return (formats[i].func);
i++;
}
return (NULL);
}
