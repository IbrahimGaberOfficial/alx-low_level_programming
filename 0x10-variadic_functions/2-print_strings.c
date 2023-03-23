#include "variadic_functions.h"
/**
 * print_strings - function print (strings)arguments passed to function sprated
 * seprated by charcter "separator"
 *
 * @separator: the seprator char between strings
 * @n: number of arguments(numbers)
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *holder;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		holder = va_arg(args, char*);

		if (holder != NULL)
			printf("%s", holder);
		else
			printf("(nil)");
	}
	printf("\n");
	va_end(args);
}
