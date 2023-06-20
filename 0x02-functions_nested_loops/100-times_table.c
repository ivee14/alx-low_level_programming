#include "main.h"
/**
*Return: returns nothing
*/
void print_times_table(int n)
{
int digit, numb, result;
if (n <= 15 && n >= 0)
{
for (digit = 0; digit <= n; digit++)
{
_putchar('0');

for (numb = 1; numb <= n; numb++)
{
_putchar(',');
_putchar(' ');
result = digit * numb;
if (result <= 99)
_putchar(' ');

if (result <= 9)
_putchar(' ');
if (result >= 100)
{
_putchar((result / 100) + '0');
_putchar((result / 10) % 10 + '0');
}
else if (result <= 99 && result >= 10)
{
_putchar((result / 10) + '0');
}
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
}

