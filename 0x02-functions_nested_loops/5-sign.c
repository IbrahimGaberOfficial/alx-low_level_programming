#include "main.h"

/**
 * print_sign - print if n greater than 0 print + and return 1
 * if n  equal 0 print 0 and return 0
 * if n less than 0 print - and return -1
 *
 * @n: the num which will be checked
 * Return: 1 , 0 or -1
 */
int print_sign(int n)
{
	int sing_num = 0;
	char sing_char = '\0';

	if (n > 0)
	{
		sing_num = 1;
		sing_char = '+';
	}
	else if (n == 0)
	{
		sing_num = 0;
		sing_char = '0';
	}
	else
	{
		sing_num = -1;
		sing_char = '-';
	}
	_putchar(sing_char);
	return (sing_num);
}

