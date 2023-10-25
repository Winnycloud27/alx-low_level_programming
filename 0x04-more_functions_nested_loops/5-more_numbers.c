#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: void.
 */
void more_numbers(void)
{
	int c, i;

	for (c = 0; c < 10; c++)
	{
		i = 0;

		while (i < 15)
		{
			if (i >= 10)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			i++;
		}
		_putchar('\n');
	}
}
