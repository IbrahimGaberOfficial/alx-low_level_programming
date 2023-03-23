#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function sum all (variable) arguments passed to function
 *
 * @n: number of arguments
 *
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	int i = 0, sum = 0, x = 0;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}

	va_end(args);
	return (sum);
}
