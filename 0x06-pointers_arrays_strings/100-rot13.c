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

	char found[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char replace[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

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
