#include "main.h"

/**
 * print_array - print the array of numbers only using _putchar() function
 * which prints only one character at time
 *
 * @a: the pointer points to the array
 * @n: the lenght of array
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		int j = a[i];
		int reminder = 0;
		int rev_num = 0;
		char negative = '\0';

		while (j != 0)
		{
			reminder = j % 10;
			rev_num = rev_num * 10 + reminder;
			j = j / 10;
		}
		j = rev_num;
		if (j < 0)
		{
			j = j * -1;
			negative = '-';
		}
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar(negative);
		while (j != 0)
		{
			_putchar(j % 10 + '0');
			j = j / 10;
		}
		i++;
	}
}
