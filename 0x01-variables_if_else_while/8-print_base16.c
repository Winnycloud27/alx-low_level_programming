#include <stdio.h>

/**
 * main - Entry point. A program that prints all hexadecimal numbers
 * Return: 0 on success. End program
*/
int main(void)
{
	int base16 = 48;
	char base16_caps = 'a';

	for (; base16 <= 57; base16++)
		putchar(base16);

	while (base16_caps <= 'f')
	{
		putchar(base16_caps);
		base16_caps++;
	}

	putchar('\n');
	return (0);
}
