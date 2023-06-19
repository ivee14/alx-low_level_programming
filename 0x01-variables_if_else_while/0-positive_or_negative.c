/*
 * File: 0-positive_or_negative.c
*/

#include <stdio.h>

/*
* Return: Always 0.
*/
int main(void)
{
	int n;

	printf(“please enter a number:”)
	

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}

