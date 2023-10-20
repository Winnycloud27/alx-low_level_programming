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
	int characters = length - 1;

	while (characters >= 0)
	{
		putchar(*(s + characters));
		characters--;
	}

	putchar('\n');
}
