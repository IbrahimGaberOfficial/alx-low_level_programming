#include "main.h"

/**
 * string_toupper - function convert every lowercase to uppercase
 *
 * @str: the string
 *
 * Return: string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
