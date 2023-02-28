#include "main.h"
/**
 * puts2 - fnction to print only the even index
 * @str: pointer refer to the string var
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
