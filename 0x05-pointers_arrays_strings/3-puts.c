#include "main.h"

/**
 * _puts - function to work like puts() which is in standard library
 * @str: the pointer that point to the string
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
