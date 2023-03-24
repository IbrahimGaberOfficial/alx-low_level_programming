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
	int i = 0, len = 0, turn = 0;
	char *check_string;
	va_list args;

	while (format[len++] != '\0')

	len--;
	va_start(args, format);

	while (format[i] != '\0')
	{
		turn = 1;
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				check_string = va_arg(args, char *);
				if (check_string)
				{
					printf("%s", check_string);
					break;
				}
				printf("(nail)");
				break;
			default:
				turn = 0;
				break;
		}
		if (turn && i < len)
			printf(", ");
	}
	printf("\n");
}
