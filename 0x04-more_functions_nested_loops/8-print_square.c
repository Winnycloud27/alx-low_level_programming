#include "main.h"

/**
 * print_square - prints hashes squares.
 * @size: size of the square.
 * Return: no return.
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		j = 0;

		while (j < size)
		{
			_putchar(35);
			j++;
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
