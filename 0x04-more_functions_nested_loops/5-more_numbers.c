#include "main.h"
/**
 *more_numbers - prints more numbers
 *
 *Return: Always 0
 */

void more_numbers(void)
{
	int i, c;

	for (i = 1; i <= 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			int tens, ones;

			tens = c / 10;
			ones = c % 10;

		if (tens != 0)
	               _putchar (tens + '0');
		_putchar (ones + '0');

		}
		_putchar('\n');
	}
}
