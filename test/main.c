#include "main.h"
#include <stdio.h>

int main(void)
{
int len1, len2;

len1 = _printf("Char: %c\nString: %s\nPercent: %%\nInt(d): %d\nInt(i): %i\nUnsigned: %u\n",
'A', "Custom printf", -123, 456, 3000000000);
len2 = printf("Char: %c\nString: %s\nPercent: %%\nInt(d): %d\nInt(i): %i\nUnsigned: %u\n",
'A', "Custom printf", -123, 456, 3000000000);

_printf("Length (_printf): %d\n", len1);
printf("Length (printf): %d\n", len2);

return (0);
}
