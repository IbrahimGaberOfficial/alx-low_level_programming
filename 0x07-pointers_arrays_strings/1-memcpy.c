#include "main.h"

/**
 * _memcpy - function cpy n area of src to dest
 *
 * @dest: the destenation array of char
 * @src: the source aray of char
 * @n: the area of memory
 *
 * Return: the dest after being modefied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
