#include "main.h"

/**
 * _strcat - A function that concatenate(joins) two string
 * @dest: The string being append to
 * @src: The string that is appended
 *
 * Return: returns a char pointer
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0; /*This serves as an iterator and is initialized to zero*/

	while (dest[i] != '\0')
	{
		i++;
	}

	for (; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}





















