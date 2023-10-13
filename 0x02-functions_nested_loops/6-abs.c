#include "main.h"

/**
 * _abs - A function that prints absolute value of an integer.
 * @j: The number being checked
 *
 * Return: -j if less than 0, otherwise return the number given.
*/
int _abs(int j)
{
	if (j < 0)
		return (-j);

	return (j);
}
