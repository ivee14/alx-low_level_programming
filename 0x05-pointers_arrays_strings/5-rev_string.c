#include <stdio.h>
/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 */

void rev_string(char *s)
{
	int a, length;

	char *start, *stop = s;

	for (a = 0; s[a] != '\0' && s[a + 1] != '\0'; a++)
	{
		stop++;
	}
	length = a + 1;
	start = s;
	for (a = 0; a < length / 2; a++)
	{
		char x;
		x = *stop;
		*stop = *start;
		*start = x;
		start++;
		stop--;
	}
	stop[length + 1] = '\0';
}   

