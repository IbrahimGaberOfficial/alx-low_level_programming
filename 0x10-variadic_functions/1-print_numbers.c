#include "variadic_functions.h"
/**
 * print_numbers - function print arguments passed to function sprated
 * seprated by charcter "separator"
 *
 * @separator: the seprator char between numbers
 * @n: number of arguments(numbers)
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		printf("%d", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
