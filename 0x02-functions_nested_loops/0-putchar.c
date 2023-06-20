#include "main.h"

/**
*Return:return 0
*main – print _putchar
*/
int main(void)
{
	char house[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(house[i]);
	}
	_putchar(10);
	return (0);
}

