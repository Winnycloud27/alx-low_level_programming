#include "main.h"

/**
 * print_array - Prints the n element of an interger
 * @a: input array.
 * @n: input n element
 *
 * Return: no return.
*/
void print_array(int *a, int n)
{
	int c = 0;

	while (c < n)
	{
		printf("%d", a[c]);
		if (c != (n - 1))
			printf(", ");
		c++;
	}

	printf("\n");
}
