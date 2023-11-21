#include <stdio.h>

/**
 * main - Prints the number of argument passed to the program
 * @argc: The argument count of the program.
 * @argv: The arrary of argc.
 *
 * Return: 0 on success and exit
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
