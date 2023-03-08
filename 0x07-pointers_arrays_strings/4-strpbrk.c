#include "main.h"

/**
 * _strpbrk - function search in accept to find any character from s
 *
 * @s: string to search with it 's caracters in accept
 * @accept: strin to search into
 *
 * Return: the address of first occurrence occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{

			if (s[i] == accept[j])
			{
				j = -1;
				break;

			}
			j++;
		}
		if (j == -1)
		{
			return (&s[i]);
		}
		i++;
	}
	return ('\0');
}
