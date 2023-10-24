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
	int i = 0, j; /*This serves as an iterator and is initialized to zero*/

	while (dest[i] != '\0')
	{
		i++;
	}

	i = 8; /*This is the last value of index value of dest[i] in the memory*/

	j = 0; /*This serves as the iterator for the second char pointer*/

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}





















