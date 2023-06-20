#include "main.h"
/**
*Return: returns 0
*/
int print_lastDigit(int n)
{
int lastDigit = n % 10;
if (lastDigit < 0)
lastDigit *= -1;

_putchar (lastDigit + '0');
return (lastDigit);
}

