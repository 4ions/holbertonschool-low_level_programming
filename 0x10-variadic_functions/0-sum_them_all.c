#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - Return the sum of all its parameters
 *@n: parameters in
 *
 *Return: return int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num_sum;
	int total = 0;
	unsigned int i;


	if (n == 0)
		return (0);

	va_start(num_sum, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(num_sum, int);
	}

	va_end(num_sum);
	return (total);

}
