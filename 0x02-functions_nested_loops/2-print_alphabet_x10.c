#include "main.h"

/**
 * print_alphabet_x10 - It will print alphabet 10 times.
 */
void print_alphabet_x10(void)
{
	char *letters = "abcdefghijklmnopqrstuvwxyz";
	char i = 0;

	for (; i < 10; i++)
	{
		for (; *letters != '\0'; letters++)
		{
			_putchar(*letters);
		}
		putchar(i);
	}
	putchar('\n');
}
