#include "main.h"

/**
 * puts_half - A function that prints half of a string
 * @str: The str being divide and printed
 *
 * Return: void
*/
void puts_half(char *str)
{
	int j;
	int length = 0;

	while (length >= 0)
	{
		if (str[length] == '\0')
			break;
		length++;
	}

	if (length % 2 == 1)
		j = length / 2;

	else
		j = (length - 1) / 2;

	for (j++; j < length; j++)
		_putchar(str[j]);

	_putchar('\n');
}
