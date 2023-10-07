#include <stdio.h>

/**
 * main - Entry point. A program that prints all the base 10 numbers.
 * Return: 0 on success. End program
*/
int main(void)
{
	int numbers = 48;

	while (numbers <= 57)
	{
		putchar(numbers);
		numbers++;
	}
	putchar('\n');
	return (0);
}
