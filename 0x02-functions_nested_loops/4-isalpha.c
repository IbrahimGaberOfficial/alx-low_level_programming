#include "main.h"

/**
 * _isalpha -  function that checks for alphabetic charcter.
 * @c: the charcter which will be ckeck
 *
 * Return: 1 if c is alphabetic charcter, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
