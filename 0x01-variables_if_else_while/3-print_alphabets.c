#include <stdio.h>

void upper_lower_case(void);

/**
 * main - Entry point
 * Return: 0 on success. End program
*/
int main(void)
{
	upper_lower_case();
	putchar('\n');
	return (0);
}

/**
 * upper_lower_case - A function that prints alphabets both
 * in upper and lower case to the console when called
*/
void upper_lower_case(void)
{
	int lower_case = 97;
	int upper_case = 65;

	for (; lower_case <= 122; lower_case++)
	{
		putchar(lower_case);
	}

	for (; upper_case <= 90; upper_case++)
	{
		putchar(upper_case);
	}
}
