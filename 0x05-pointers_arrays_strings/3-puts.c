#include "main.h"

/**
 * _puts - Print out a string to the ouput
 * @str: is the character pointer being printed
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(*(str + i));

	_putchar('\n');
}
