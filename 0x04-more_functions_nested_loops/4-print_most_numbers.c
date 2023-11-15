#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * skipping 2 and 4.
 * Return: nothing.
 */
void print_most_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		if (c != 50 && c != 52)
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
