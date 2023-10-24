#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: input string.
 * Return: the pointer to dest.
 */

char *leet(char *c)
{
	int j = 0, i;
	int lowercase[] = {97, 101, 111, 116, 108};
	int uppercase[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	for (; c[j] != '\0'; j++)
	{
		for (i = 0; i < 5; i++)
		{
			if (*(c + j) == lowercase[i] || *(c + j) == uppercase[i])
			{
				*(c + j) = num[i];
				break;
			}
		}

	}

	return (c);
}
