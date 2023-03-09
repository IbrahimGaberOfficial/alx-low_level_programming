#include "main.h"
/**
 * _puts_recursion - print function using recursion
 *
 * @s: the string to be printed
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\n')
	{
		_putchar('\0');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}

}
