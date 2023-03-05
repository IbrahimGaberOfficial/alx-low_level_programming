#include "main.h"

/**
 * print_alphabet_x10 - function print 10 times form 'a' to 'z'
 *
 * Retrun: nothing
 */
void print_alphabet_x10(void)
{
	int j = 0;
	int i = 97;

	while (j < 10)
	{
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
