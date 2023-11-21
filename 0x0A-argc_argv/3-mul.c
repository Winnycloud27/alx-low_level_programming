#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: The argument count of the program.
 * @argv: The arrary size of argc
 *
 * Return: (1) if the program receives more or less 3 argument,
 * otherwise, returns (0) on success
 */
int main(int argc, char **argv)
{
	int opera1, opera2, times;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		opera1 = atoi(argv[1]);
		opera2 = atoi(argv[2]);
		times = opera1 * opera2;

		printf("%d\n", times);
	}
	return (0);
}
