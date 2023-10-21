#include "main.h"

/**
 * rev_string - The function prints the reverse of the string
 * @s: The string being reversed
 *
 * Return: Nothing.
*/

void rev_string(char *s)
{
	int len = _strlen(s);
	int x = 0;
	int c = len - 1;
	char temp;


	while (x < c)
	{
		temp = s[x];
		s[x] = s[c];
		s[c] = temp;
		x++;
		c--;
	}
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
