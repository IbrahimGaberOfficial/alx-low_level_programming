#include "main.h"
/**
 * _print_rev_recursion - function prints the string in revere
 *
 * @s: the string to be printed
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
		//_putchar('\0');
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
