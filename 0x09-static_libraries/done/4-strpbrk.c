#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strpbrk - function find first charcter in s that is matches with
 * character in accept string
 *
 * @s: string to search into
 * @accept: string to search with it's characters
 *
 * Return: NULL if not match, pointer to first match if found
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

