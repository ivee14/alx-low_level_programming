#include <stdio.h>
/**
 *puts_half - function that prints half of a string, followed by a new line.
 *
 *@str: This is the input string
 */
void puts_half(char *str)
{
	int number, half;

	number = 0;
	while (str[number] != '\0')
		number++;

	half = number / 2;

	if (number % 2 == 1)
		half++;

	while (half < number)
	{
		putchar(str[half]);
		half++;
	}
	putchar('\n');
}

