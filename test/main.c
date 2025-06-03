#include "main.h"

/**
* main - Entry point for testing _printf
*
* Return: Always 0
*/
int main(void)
{
int len;

len = _printf("Character: %c\n", 'A');
_printf("Printed %d characters above.\n\n", len);

len = _printf("String: %s\n", "Hello, Holberton!");
_printf("Printed %d characters above.\n\n", len);

len = _printf("Integer (%%d): %d\n", 123);
_printf("Printed %d characters above.\n\n", len);

len = _printf("Integer (%%i): %i\n", -456);
_printf("Printed %d characters above.\n\n", len);

len = _printf("Percent sign: %%\n");
_printf("Printed %d characters above.\n", len);

return (0);
}
