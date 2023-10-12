#include "main.h"

/**
 * print_alphabet_x10 - It will print alphabet 10 times.
 */
void print_alphabet_x10(void)
{
	char i;
	char letters;

	for (i = 0; i < 10; i++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
		_putchar('\n');
	}
}
