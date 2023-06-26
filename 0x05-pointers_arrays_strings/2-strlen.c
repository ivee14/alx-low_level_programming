#include <stdio.h>
/**
 * _strlen - Function that returns the length of a string
 *
 * @s: this is the input string
 *
 * Return: Lenngth of the string
 */
int _strlen(char *s)
{
	int number;

	for (number = 0; s[number] != '\0' ; number++)
		;
	return (number);
}

