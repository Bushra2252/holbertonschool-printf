#include "main.h"



/**

 * print_char - print char

 * @args: va_list

 * Return: printed length

 */

int print_char(va_list args)

{

return (_putchar(va_arg(args, int)));

}



/**

 * print_string - print string

 * @args: va_list

 * Return: printed length

 */

int print_string(va_list args)

{

char *str = va_arg(args, char *);

int i = 0;



if (!str)

str = "(null)";

while (str[i])

_putchar(str[i++]);

return (i);

}



/**

 * print_percent - print %

 * @args: unused

 * Return: 1

 */

int print_percent(va_list args)

{

(void)args;

return (_putchar('%'));

}



/**

 * print_number - print int

 * @n: number

 * Return: printed length

 */

int print_number(int n)

{

int count = 0;

unsigned int num;



if (n < 0)

{

count += _putchar('-');

num = -n;

}

else

num = n;



if (num / 10)

count += print_number(num / 10);

count += _putchar((num % 10) + '0');

return (count);

}



/**

 * print_integer - print int from va_list

 * @args: va_list

 * Return: printed length

 */

int print_integer(va_list args)

{

return (print_number(va_arg(args, int)));

}
