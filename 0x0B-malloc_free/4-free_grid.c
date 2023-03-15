#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function to free(delete) allocated 2d array
 *
 * @grid: double pointer point to name of the 2D array
 * @height: column size of 2D arry
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
