#include "main.h"

/**
 * _memset - function that do the work of memest() func in sandard libray
 *
 * @s: array of character to set specific bytes of it with b
 * @b: the char that will set into s
 * @n: the number of bytes in s to be set with b
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
