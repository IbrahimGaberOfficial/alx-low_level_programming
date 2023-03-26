#include "function_pointers.h"

/**
 * int_index - function return first index match function passed
 * through function pointer cmp
 *
 * @array: the array to seach into
 * @size: the size of the arry
 * @cmp: function based on, the search work
 *
 * Return: fist index if match, otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || !array || !size || !cmp)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
