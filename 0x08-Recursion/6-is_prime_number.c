#include "main.h"

int prime_num(int n, int i);

/**
 * is_prime_number - checks if number is prime
 * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_num(2, n));
}

/**
 * prime_num - checks to see if number is prime
 * @n: The number to be evaluated
 * @i: An iterator
 * Return: 1 if n is prime, 0 if n is not a prime number
 */
int prime_num(int n, int i)
{
	if (i < 2 || i % n == 0)
		return (0);
	if (n > i / 2)
		return (1);
	else
		return (prime_num(n + 1, i));
}
