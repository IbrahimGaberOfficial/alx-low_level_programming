#include "main.h"
#include <stdlib.h>

/**
 * array_range - function create array with max - min elements and assign
 * every element with value of min++ until min == max
 *
 * @min: first value in the array
 * @max: last value in the array
 *
 * Return: pointer to first element in the array
 */

int *array_range(int min, int max)
{
	int i = 0, j = 0, *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(((max - min) + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	j = max - min;
	for (i = 0; i <= j; j++)
	{
		ptr[i] = min++;
	}

	return (NULL);
}
