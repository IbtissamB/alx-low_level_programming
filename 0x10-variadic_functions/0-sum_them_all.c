#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i;
	int sum;

	va_start(num_list, n);         /* Initialize the argument list. */
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(num_list, int);    /* Get the next argument value. */

	va_end(num_list);                  /* Clean up. */
	return (sum);
}
