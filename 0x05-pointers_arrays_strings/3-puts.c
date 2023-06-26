#include <stdio.h>
/**
 * _puts - Write a function that prints a string, followed by a new line, to
 * stdout.
 *
 * @str: This is my input string
 *
 */

void _puts(char *str)
{
	int number;

	for (number = 0; str[number] != '\0'; number++)
	{
		putchar(str[number]);
	}
	putchar('\n');
}
