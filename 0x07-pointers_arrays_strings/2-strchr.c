#include "main.h"
/**
 * _strchr - search in s to find c
 *
 * @s: the string to search in
 * @c: the charcter to search for
 *
 * Return: if c is found return the address of it, if not return NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			break;
			return (&s[i]);
		}
		i++;
	}
	return ('\0');
}
