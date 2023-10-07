#include <stdio.h>

/**
 * main - EntrNumComb2 point. A program that prints all possible
 * combinations of two two-digit numbers.
 * Return: 0 on success. End program
*/
int main(void)
{
	int NumComb1 = 0;
	int NumComb2 = 0;

	while (NumComb1 <= 99)
	{
		while (NumComb2 <= 99)
		{
			putchar((NumComb1 / 10) + '0');
			putchar((NumComb1 % 10) + '0');
			putchar(' ');
			putchar((NumComb2 / 10) + '0');
			putchar((NumComb2 % 10) + '0');
			putchar(',');
			putchar(' ');
			NumComb2++;
		}
		NumComb1++;
	}
	putchar('\n');
	return (0);
}
