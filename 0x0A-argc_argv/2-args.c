#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: The argument count of the program.
 * @argv: The arrary of argc.
 *
 * Return: 0 on success and exit
 */
int main(int argc, char **argv)
{
	int i;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
