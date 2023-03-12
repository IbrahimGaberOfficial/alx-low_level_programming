#include <stdio.h>

/**
 * main - program print the command arguments it receives
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Description: program print the command line that it revives from the command
 * promot or command line
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int i = 0;

	(void) argc;
	while (*argv[i] != '\0')
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
