#include <stdio.h>
/**
 * swap_int - function that swaps the values of two integers.
 * @a: this is the first entry
 * @b: this is the second entry
 *
 *
 */
void swap_int(int *a, int *b)
{
	int value;

	value = *a;
	*a = *b;
	*b  = value;
}
