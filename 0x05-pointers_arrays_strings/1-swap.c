#include "main.h"

/**
 * swap_int - swaps the value of the variables
 * the pointer points
 * @a: pointer
 * @b: pointer
 */
void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}
