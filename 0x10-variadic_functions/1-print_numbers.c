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
	unsigned int i;
	va_list print_int;

	va_start(print_int, n);

	if (separator == NULL)
		separator = " ";
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print_int, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(print_int);
}
