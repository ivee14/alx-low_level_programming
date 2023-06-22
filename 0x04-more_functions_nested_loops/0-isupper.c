#include "main.h"
/**
 * _isupper - uppercase character
 *@c: char to check
 *Return: 1 or  0 
 */

int _isupper(int c)
{
char letter;
for (letter = 'A'; letter <= 'Z'; letter++)
{
	if (c == letter)
		return (1);
}
}
