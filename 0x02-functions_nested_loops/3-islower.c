#include "main.h"

/**
 * _islower -  function that checks for lowercase character.
 * @c: the charcter which will be ckeck
 *
 * Return: 1 of lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
