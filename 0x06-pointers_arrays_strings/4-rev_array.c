#include "main.h"

/**
 * reverse_array - function to reverse the elements of array
 *
 * @a: the array itself
 * @n: the size of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int _tmp = 0;

	for (i; i < (n / 2); i++)
	{
		_tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = _tmp;
	}
}
