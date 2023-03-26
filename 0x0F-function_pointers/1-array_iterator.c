#include "function_pointers.h"

/**
 * array_iterator - function print array based on function passed using
 * function pointer action
 *
 * @array: the array to work on
 * @size: size of array passed to me
 * @action: the function based on, the print will work
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
