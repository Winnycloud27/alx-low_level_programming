#include "main.h"

/**
 * _islower - A function that checks for lowercase
 * @c: The character to check.
 * Return: 1 if c is lowercase else return 0 and end
*/
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);

	else
		return (0);
}
