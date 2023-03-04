#include <stdio.h>

/**
 * main - print all lower expect 'e' and 'q'
 *
 * Description: print the alpahpets expect 'e' and 'q'
 *
 * Return: 0
 */

int main(void)
{
	int i = 123;

	while (i > 97)
	{
		i--;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
