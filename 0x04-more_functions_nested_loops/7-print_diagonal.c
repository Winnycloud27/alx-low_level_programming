#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
 *
 * Return: no return.
 */
void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
		i++;
	}
	_putchar('\n');
}
