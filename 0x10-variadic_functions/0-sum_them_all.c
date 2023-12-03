#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Adds up different integer input
 * @n: number of argument passed
 * Return: return 0 if n is equal to 0
 * otherwise return the result.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;

	va_list sum;

	va_start(sum, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		result = result + va_arg(sum, int);
	}
	return (result);
	va_end(sum);
}
