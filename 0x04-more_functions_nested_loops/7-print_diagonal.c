#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
		int i, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1 ; i <= n ; i++)
		{
			for (s = 1 ; s <= i ; s++)
			{
				if (s < i)
					_putchar(' ');
				else if (s == i)
					_putchar(92);
			}
			_putchar('\n');
		}
	}
}
