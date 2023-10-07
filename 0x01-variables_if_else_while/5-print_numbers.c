#include <stdio.h>

/**
 * main - Entry point. A program that prints all the base 10 numbers.
 * Return: 0 on success. End program
*/
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
