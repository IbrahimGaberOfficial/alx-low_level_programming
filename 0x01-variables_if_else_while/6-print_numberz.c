#include <stdio.h>

/**
 * main - print the number for  0 to 9 then newline
 *
 * Description: print from 0 to 9 followed by newline
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
