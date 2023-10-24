#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @c: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *c)
{
	int count = 0;

	for (; *(c + count) != '\0'; count++)
	{
		if (c[count] >= 97 && c[count] <= 122)
			c[count] = c[count] - 32;
	}

	return (c);
}
