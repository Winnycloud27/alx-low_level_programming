#include "main.h"

/**
 * swap_int - A function that swaps a pointer
 * @a: Is first variable being swapped
 * @b: The second variable being swapped
*/

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
