#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: This is the input array
 * @n: This is the lenght of the array
 *
 *
 */

void print_array(int *a, int n)
{
	int number;
	
	for (number = 0; number < n; number++)
	{
		printf("%d", a[number]);
		if (number != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}

