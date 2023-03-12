#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Description: program print multiplication of the command line arguments
 * that it revives from the command promot or command line
 * Return: 1 if no command line arguments revives, 0 otherwise.
 */
int main(int argc, char *argv[])
{
	int i = 0, result = 1;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		result *= atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);

}
