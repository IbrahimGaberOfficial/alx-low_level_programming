#include "main.h"

/**
 * _strcat - concatenate 2 strings without using functions
 *
 * @dest: the first  string which the second str will be appended to the
 * end of it
 * @src: the second string which will be appended to the end of dest
 *
 * Return: dest string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
