#include "main.h"

/**
 * swap_int - function swap 2 intger numbers
 * @a: the first pointer argument
 * @b: the second pointer argument
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{	int c = *a;
	*a = *b;
	*b = c;
}
