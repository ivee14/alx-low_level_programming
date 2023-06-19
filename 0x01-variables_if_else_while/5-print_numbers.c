/*
 * 5-print_numbers.c
*/

#include <stdio.h>

/**
 * main - Prints all single digit numbers .
 *
 * Return: Always 0.
 */
int main(void)
{
	int number;

	for (number= 0; number < 10; number++)
		printf("%d", number);

	printf("\n");

	return (0);
}

