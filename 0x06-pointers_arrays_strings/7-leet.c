#include "main.h"

/**
 * leet - encode the string in leet method
 *
 * @str: the target string
 *
 * Return: str
 */

char *leet(char *str)
{
	int i = 0;

	char found[10] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char replace[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (str[i] != '\0')
	{
		int j = 0;

		while (found[j] != '\0')
		{
			if (str[i] == found[j])
			{
				str[i] = replace[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
