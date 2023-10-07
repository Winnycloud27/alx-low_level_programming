#include <stdio.h>

void alpha_lower(void);

/**
 * main - Entry point, it will print the called function alpha_lower
 * Return: 0 on success. End program
*/
int main(void)
{
	alpha_lower();
	putchar('\n');
	return (0);
}

/**
 * alpha_lower - prints alphabets to the console when called
 * excluding 'e' and 'q'
*/
void alpha_lower(void)
{
	int lower_case = 97;

	for (; lower_case <= 122; lower_case++)
	{
		if (lower_case != 101 && lower_case != 113)
		{
		putchar(lower_case);
		}
	}
}
