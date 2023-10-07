#include <stdio.h>

/**
 * main - Entry point. A program that prints all possible
 * different combinations of three digits
 * Return: 0 on success. End program
*/
int main(void)
{
	int x = 0, y, z;

	while (x < 8)
	{
		y = x + 1;
		while (y < 9)
		{
			z = y + 1;
			while (z <= 9)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');

				if (x != 7 || y != 8 || z != 9)
				{
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
