#include "main.h"
/**
*Return: returns nothing
*/
void times_table(void)
{
int digit, numb, result;
for (digit = 0; digit <= 9; digit++)
{
_putchar('0');

for (numb = 1; numb <= 9; numb++)
{
_putchar(',');
_putchar(' ');
result = digit * numb;
if (result <= 9)
_putchar(' ');
else
_putchar((result / 10) + '0');

_putchar((result % 10) + '0');
}
_putchar('\n');
}
}

