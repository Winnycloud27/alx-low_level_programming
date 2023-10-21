#include "main.h"
int _strlen(char *s);

/**
 * _puts - Print out a string to the ouput
 * @str: is the character pointer being printed
*/

void _puts(char *str)
{
	int i;

/*The _strlen(str) returns the length of the string*/
	for (i = 0; i < _strlen(str) ; i++)
		_putchar(*(str + i));

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
