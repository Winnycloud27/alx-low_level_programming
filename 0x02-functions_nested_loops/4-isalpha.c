#include "main.h"

/**
 * _isalpha - checks if letters both lower or upper cases
 * @c: is the character being checked
 *
 * Return: 1 if true otherwise return 0.
*/
int _isalpha(int c)
{
	if ((c >= 97) && (c <= 122) || (c >= 65) && (c <= 90))
		return (1);

	else
		return (0);
}
