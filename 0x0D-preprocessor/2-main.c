#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program print the the name of the file it was compiled from
 * follwed by newline
 *
 * Return: 0 if success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
