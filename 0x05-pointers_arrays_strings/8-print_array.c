#include <stdio.h>
#include "main.h"

/**
 * print_array - print the array of numbers only using _putchar() function
 * which prints only one character at time
 *
 * @a: the pointer points to the array
 * @n: the lenght of array
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != 0)
		{
		printf(", %d", a[i]);
		}
		else
		{
		printf("%d", a[i]);
		}
		i++;
	}
	printf("\n");

}
