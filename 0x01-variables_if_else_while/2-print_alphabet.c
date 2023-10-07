#include <stdio.h>

void alpha(void);

/**
 * main - Entry point, it will generate and print a random number
 * to the console by determine what they are
 * Return: 0 on success. End program
*/
int main(void)
{
	alpha();
	putchar('\n');
	return (0);
}

/**
 * alpha - prints alphabets to the console when called
*/
void alpha(void)
{
	char letters = 'a';

	for (; letters <= 'z'; letters++)
	putchar(letters);
}
