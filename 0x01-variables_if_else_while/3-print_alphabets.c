#include <stdio.h>
/**
 * main - print the alphapet from a..zA..Z
 *
 * Description: using the main function print alphapets
 * Return: 0
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	i = 65;
	while (i <= 90)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
