#include <stdio.h>

/**
 * main - Entry point. A program that prints all possible
 * different combinations of two digits
 * Return: 0 on success. End program
*/
int main(void)
{
	int x = 0, y;

	while (x < 9)
	{
		y = x + 1;
		while (y <= 9)
		{
			putchar(x + '0');
			putchar(y + '0');

			if (x != 8 || y != 9)
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
