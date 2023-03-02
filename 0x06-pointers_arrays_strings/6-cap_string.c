#include "main.h"

/**
 * cap_string - make the first charcter of words that match cases in
 * the if condition be uppercase
 *
 * @str: the target string
 *
 * Return: the string after being modefied
 */

char *cap_string(char *str)
{
	int i = 0;

	if ('z' >= str[i] && str[i] >= 'a')
	{
		str[i] -= 32;
	}
	i++;
	while (str[i] != '\0')
	{
		if (str[i - 1] == 32 || str[i - 1] == '\n'
			|| str[i - 1] == '\t'
			|| str[i - 1] == ','
			|| str[i - 1] == ';'
			|| str[i - 1] == '.'
			|| str[i - 1] == '!'
			|| str[i - 1] == '?'
			|| str[i - 1] == '"'
			|| str[i - 1] == '('
			|| str[i - 1] == ')'
			|| str[i - 1] == '{'
			|| str[i - 1] == '}')
		{

			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
			i++;
	}
	return (str);
}
