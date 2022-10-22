#include "main.h"

/**
 * print_diagonal - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int count, i;

		for (count = 0; count < n; count++)
		{
			for (i = 0; i < n; i++)
			{
				if (i == count)
					_putchar('\\');
				else if (i < count)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
