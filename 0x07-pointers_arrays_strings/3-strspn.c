#include "main.h"

/**
 * _strspn - strspn() clone: function return the number of bytes in
 * the initial segments of s which consists only of bytes from accept
 *
 * @s: the string to search in
 * @accept: the substring to match it's charcters with s characters
 *
 * Return: lenght
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	unsigned int length = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
			j++;
		}
		if (s[i] != accept[j])
		{
			break;
		}
		i++;
	}
	return (length);
}
