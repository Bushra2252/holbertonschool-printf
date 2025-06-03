#include <unistd.h>

/**
 * _putchar - print a char to stdout
 * @c: char to print
 * Return: 1
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
