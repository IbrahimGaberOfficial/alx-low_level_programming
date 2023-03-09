#include "main.h"

/**
 * _strstr - custum function for strstr() function in standary library
 *
 * @haystack: the string to search into
 * @needle: the sub-string to search for
 *
 * Return: pointer to the start match with sub-string in the original string
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, found = 1;

	while (haystack[i] != '\0')
	{
		found = 1;
		j = 0;
		while (found && needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				found = 0;
			}
			j++;
		}
		if (found)
		{
			return (haystack + i);
		}
		i++;
	}
	return ('\0');
}
