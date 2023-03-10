#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that print the sum of command line argumets.
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Description: program print sum of the command line arguments
 * that it revives from the command promot or command line
 * Return: 1 if no command line arguments revives or revives non digit number
 * , 0 otherwise.
 */
int main(int argc, char *argv[])
{
	int i = 0, result = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		int j = 0;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
