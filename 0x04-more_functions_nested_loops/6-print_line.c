#include "main.h"

/**
 * print_line - prints straight line n times.
 * @n: times straight line is printed.
 * Return: no return.
 */
void print_line(int n)
{
	int c = 0;

	while (c < n)
	{
		_putchar(95);
		c++;
	}
	_putchar('\n');
}
