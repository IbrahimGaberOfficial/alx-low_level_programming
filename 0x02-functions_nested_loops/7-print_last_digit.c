#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: the number
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	unsigned int i = 0;

	if (n < 0)
	{
		n = n * -1;
	}
	i = n;
	_putchar(i % 10 + '0');
	return (i % 10);
}
