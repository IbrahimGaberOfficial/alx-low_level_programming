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
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			break;
	return (s[i] == c ? (s + i) : '\0');
}
