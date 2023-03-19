#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - function to find the first character in s
 * that is not not of accept charcters
 *
 * @s: string to search in
 * @accept: set of characters search from
 *
 * Return: lenth from first characters in s to first character in s
 * that not part of accept
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

