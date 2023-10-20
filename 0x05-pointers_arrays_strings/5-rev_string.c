#include "main.h"

/**
 * rev_string - The function that reverse the string
 * @s: The string being reversed
 *
 * Return: Nothing.
*/

void rev_string(char *s)
{
	int length = strlen(s);
	int j = length - 1;

	while (j >= 0)
	{
		_putchar(*(s + j));
		j--;
	}

	_putchar('\n');
}
