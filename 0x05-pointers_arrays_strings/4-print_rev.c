#include "main.h"

/**
 * print_rev - function print the string in reverse
 * @s: the pointer that hold the string address
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
