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
	int len = strlen(s);
	int c;

	for (c = len - 1; c >= 0; c--)
		_putchar(*(s + c));

	_putchar('\n');
}
