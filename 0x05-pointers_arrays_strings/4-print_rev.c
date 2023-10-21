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

/**
 * _strlen - A function that prints the length of a string
 * @s: The string being checked.
 *
 * Return: Returns the length of the string.
*/
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}

