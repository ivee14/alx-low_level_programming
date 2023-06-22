#include "main.h"
/**
 *_isdigit - checks for a digit
 *@c: char to be checked
 *Return: 1 or 0
 */

int _isdigit(int c)
{
char digit;
for (digit = '0'; digit <= '9'; digit++)
{
	if (digit == c)
		return (1);
}
return (0);
}
