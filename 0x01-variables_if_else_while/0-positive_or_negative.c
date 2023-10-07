#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point, it will generate and print a random number
 * to the console by determine what they are
 * Return: 0 on success. End program
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
