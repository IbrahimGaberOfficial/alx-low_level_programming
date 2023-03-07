#include "main.h"

/**
 * print_chessboard - function print 2D array
 *
 * @a: the 2D array
 *
 * Return: no thing
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
