#include "main.h"

/**
  * more_numbers - print digits 0 through 9, 10 times
  * except 2 and 4
  */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
	}
	_putchar('\n');
}
