#include <stdlib.h>
#include "main.h"

/**
 * create_array - function to create array with changable size
 *
 * @size: the size of array
 * @c: the char value to inistialize the array with it
 *
 * Return: pointer to the first address of array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	return (ptr);
}
