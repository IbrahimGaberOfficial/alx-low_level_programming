#include "main.h"

/**
 * print_alphabet - function print form 'a' to 'z'
 *
 * Retrun: nothing
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
	}
	_putchar('\n');
}
