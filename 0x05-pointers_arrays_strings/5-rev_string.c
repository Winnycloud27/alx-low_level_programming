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
	int x = 0;
	int characters = length - 1;
	char temp;

	while (x < characters)
	{
		temp = s[x];
		s[x] = s[characters];
		s[characters] = temp;
		x++;
		characters--;
	}

	putchar('\n');
}
