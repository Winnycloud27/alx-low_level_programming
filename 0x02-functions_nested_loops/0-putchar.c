#include "main.h"

/**
 * main - Will print _putchar using putchar function
 * Return: 0 on success. End program.
*/
int main(void)
{
	char *alpha = "_putchar";

	for (; *alpha != '\0'; *alpha++)
		putchar(*alpha);

	putchar('\n');
	return (0);
}