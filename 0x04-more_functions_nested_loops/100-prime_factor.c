#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int c, pf;

	c = 612852475143;
	for (pf = 2; pf <= c; pf++)
	{
		if (c % pf == 0)
		{
			c /= pf;
			pf--;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
