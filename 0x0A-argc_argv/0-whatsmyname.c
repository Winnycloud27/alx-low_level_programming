#include <stdio.h>

/**
 * main - Takes in two commandline argument as the  parameter
 * @argc: The argument count of the program.
 * @argv: The arrary of argc.
 *
 * Return: 0 on success and exit
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv);

	return (0);
}
