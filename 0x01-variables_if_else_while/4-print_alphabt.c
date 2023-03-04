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
	int i = 96;

	while (i < 122)
	{
		i++;
		if (i == 101 || i == 113)
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
