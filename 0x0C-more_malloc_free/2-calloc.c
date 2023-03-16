#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocate memory of nmem number of elemets
 * every element with size equal argument size, then initialize them with 0
 *
 * @nmemb: array elmemnt number
 * @size: size of every elment
 *
 * Return: pointer to first element
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		*ptr + i = 0;
	}

	return (NULL);
}
