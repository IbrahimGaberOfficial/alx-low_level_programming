#include "main.h"

/**
 * _strncpy - function to do the strncpy() fnction job
 *
 * @dest: the string to copy into
 * @src: the string to copy from
 * @n: the number of cpy characters
 *
 * Return: the dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
