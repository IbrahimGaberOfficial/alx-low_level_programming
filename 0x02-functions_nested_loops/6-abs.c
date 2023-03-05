#include "main.h"

/**
 * _abs - return the absolute value of an intger
 *
 * @n: the intge wich will be ckecked
 *
 * Return: the abs of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
