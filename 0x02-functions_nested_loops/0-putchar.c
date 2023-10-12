#include "main.h"

/**
 * main - Will print _putchar using putchar function
 * Return: 0 on success. End program.
*/
int main(void)
{
	char alpha[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(alpha[i]);

	_putchar('\n');
	return (0);
}
