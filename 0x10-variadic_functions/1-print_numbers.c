#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - prints numbers adding seperator
 * @n: count of parameters
 * @separator: the separator
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, digit;

	va_list print_int;

	va_start(print_int, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			digit = va_arg(print_int, int);
			printf("%d", digit);
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print_int);
}
