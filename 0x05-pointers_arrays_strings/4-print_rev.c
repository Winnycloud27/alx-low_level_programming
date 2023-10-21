#include "main.h"

/**
 * print_rev - A function that print string in reverse
 * @s: The string being printed.
 *
 * The _putchar function call is defined in another file.
 *
 * Return: None.
*/

void print_rev(char *s)
{
	int c;
	int j = _strlen(s);

	for (c = j - 1; c >= 0; c--)
		_putchar(s[c]);

	_putchar('\n');
}
