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
				i = -1;
				break;

			}
			j++;
		}
		if (i == -1)
			break;
		i++;
	}
return (&s[j - 1]);
}
