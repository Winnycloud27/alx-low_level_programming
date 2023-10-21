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
