#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper - function check if c is upper or not
 *
 * @c: charcter
 *
 * Return: true if c is upper
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

