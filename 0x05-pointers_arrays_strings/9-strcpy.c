#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: Destination being copied to
 * @src: The string being pointed to.
 * Return: It will return dest.
*/
char *_strcpy(char *dest, char *src)
{
	int direction;

	for (direction = 0; direction >= 0; direction++)
	{
		*(dest + direction) = *(src + direction);
		if (*(src + direction) == '\0')
			break;
	}
	return (dest);
}
