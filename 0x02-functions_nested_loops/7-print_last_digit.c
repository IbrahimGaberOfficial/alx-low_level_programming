#include "main"
/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: the number
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar(n % 10 + '0');
	return (n % 10);
}
