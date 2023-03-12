#include <stdio.h>

/**
 * main - function print the name of the programe even if it changed
 * @argc: the number of command line arguments
 * @argv: array comtaining the program command line arguments
 *
 * Description: program print name of itself
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
