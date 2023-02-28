#include "main.h"

/**
 * puts_half - print the last half of passed string
 * @str: pointer hold adress of working on string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = (i / 2); j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
