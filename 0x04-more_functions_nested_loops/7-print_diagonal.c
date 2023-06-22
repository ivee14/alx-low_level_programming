#inclue "main.h"
/**
 *print-diagonal-draw diagonal line
 *@n:number
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}else
		int i,j;
                for (i = 0; i < n; i++)
		{
			if (j == i)
				_putchar('\\');
			else if (j < i)
				_putchar('');
		}
		_putchar('\n');

}
}
}
