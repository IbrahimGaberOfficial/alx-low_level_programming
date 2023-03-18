#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function entry point for program
 * @argc: number of command line arguments
 * @argv: pinter to array contins the command line arguemnts
 * Return: 1 for error, 0 for success
 */

int main(int argc, char *argv[])
{
	int i, j, change, value;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	while (value > 0)
	{
		if (value >= 25)
			change++, value -= 25;
		else if (value >= 10)
			change++, value -= 10;
		else if (value >= 5)
			change++, value -= 5;
		else if (value >= 2)
			change++, value -= 2;
		else if (value >= 1)
			change++, value -= 1;
	}
	printf("%d\n", change);
	return (0);
}
