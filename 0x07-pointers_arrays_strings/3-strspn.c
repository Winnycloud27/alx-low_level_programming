#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: Number of bytes in the intial segment of `s`
 */

unsigned int _strspn(char *s, char *accept)
{
	int c1, c2, i;

	c1 = 0;
	i = 0;

	while (s[c1] != '\0')
	{
		if (s[c1] != 32)
		{
			for (c2 = 0; accept[c2] != '\0'; c2++)
			{
				if (s[c1] == accept[c2])
					i++;
			}
		}
		c1++;
	}
	return (i);
}
