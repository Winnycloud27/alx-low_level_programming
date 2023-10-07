#include <stdio.h>

/**
 * main - Entry point. A program that prints the lowercase alphabet in reverse
 * Return: 0 on success. End program
*/
int main(void)
{
	char tebahpla = 'z';

	for (; tebahpla >= 'a'; tebahpla--)
	putchar(tebahpla);

	putchar('\n');
	return (0);
}
