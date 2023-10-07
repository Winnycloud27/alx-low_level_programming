#include <stdio.h>

/**
 * main - Entry point. A program that prints all the base 10 numbers
 * with comma and space separating them.
 * Return: 0 on success. End program
*/
int main(void)
{
	int numbers = 48;

	for (; numbers <= 57;)
	{
		putchar(numbers);
		if (numbers != 57)
		{
		putchar(',');
		putchar(' ');
		}
		numbers++;
	}
	putchar('\n');
	return (0);
}
