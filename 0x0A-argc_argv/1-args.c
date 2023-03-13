#include <stdio.h>

/**
 * main - print the number of arguments
 * @argc: number of command line arguments
 * @argv: array containing the program command line argumets
 *
 * * Description: program prints the number of program command line arguments
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
