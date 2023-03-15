#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function use dynamic allocation to create changable size
 *of 2d array
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer point to 2d array
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **arr;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (i = i; i >= 0; i--)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
