#include "main.h"

/**
 * print_sign - A function that prints the sign of a number.
 * @n: Is the number being checked
 *
 * Return: 1 and + if number is greater than 0,
 * 0 if number is zero and -1 if number is less than zero.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
