#include "main.h"

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
