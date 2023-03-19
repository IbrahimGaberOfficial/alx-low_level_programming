#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower - function check if c is lower or not
 *
 * @c: character to be checkked
 *
 * Return: trur if c is lower false otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
