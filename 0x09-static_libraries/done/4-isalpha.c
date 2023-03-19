#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isalpha - function check if c is alphbet or not
 *
 * @c: character to check
 *
 * Return: non-zero intger if c is alphabet, if not it returns 0
 */

int _isalpha(int c)
{
	return (isalpha(c));
}

