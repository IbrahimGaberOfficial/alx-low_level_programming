#include "variadic_functions.h"

/**
 * print_all - printf custum function
 *
 * @format: the format specifier and first argument
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0, len = 0;
	char character;
	va_list args;

	len = strlen(format);
	va_start(args, format);
	while (format[i] != '\0')
	{
		character = format[i];
		if (character != 'c' && character != 'i' && character != 'f'
				&& character != 's')
		{
			i++;
			continue;
		}
		else if (character == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (character == 'i')
		{
			printf("%i", va_arg(args, int));
		}
		else if (character == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (character == 's')
		{
			printf("%s", va_arg(args, char *));
		}
		if (i < (len - 1))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
