#include "main.h"

/**
 * print_number - custum function to print passed inger just jusing another
 * custum putchar() function
 *
 * @n: the passed intger
 *
 * Return: Always 0 nothing
 */

void print_number(int n)
{
	int reminder = 0;
	int rev_num = 0;
	char is_negative = '\0';

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n <= 0)
	{
		is_negative = '-';
		n = n * -1;
	}
	while (n != 0)
	{
		reminder = n % 10;
	       rev_num = rev_num * 10 + reminder;
	       n = n / 10;
	}
	_putchar(is_negative);
	while (rev_num != 0)
	{
		_putchar(rev_num % 10 + '0');
		rev_num = rev_num / 10;
	}

}
