#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int i = 0, c, temp;

	while (i < n - 1)
	{
		for (c = i + 1; c > 0; c--)
		{
			temp = *(a + c);
			*(a + c) = *(a + (c - 1));
			*(a + (c - 1)) = temp;
		}

		i++;
	}
}
