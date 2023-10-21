#include "main.h"

/**
 * _puts - Print out a string to the ouput
 * @str: is the character pointer being printed
*/

void _puts(char *str)
{
	int i;

/*The _strlen(str) returns the length of the string*/
	for (i = 0; i < _strlen(str) ; i++)
		_putchar(*(str + i));

	_putchar('\n');
}
