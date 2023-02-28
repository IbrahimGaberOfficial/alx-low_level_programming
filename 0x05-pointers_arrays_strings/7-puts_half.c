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
	/* if the number is odd */
	if (i % 2 != 0)
	{
		j = (i + 1) / 2;
	}
	else
	{
		j = i / 2;
	}
	for (j; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
