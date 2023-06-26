#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * totalwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int total[100];
	int i, num, n;

	num = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		total[i] = rand() % 78;
		num += (total[i] + '0');
		putchar(total[i] + '0');
		if ((2772 - num) - '0' < 78)
		{
			n = 2772 - num - '0';
			num += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}

