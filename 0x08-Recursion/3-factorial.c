#include "main.h"

/**
 * factorial - This function returns the factorial of a number
 * @n: The number
 *
 * Return: returns (-1) if it is less than 0
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
