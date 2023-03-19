#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - function to concatenate destnation string with source
 * string based on n numbers of source
 *
 * @dest: destenation string
 * @src: source string
 * @n: number of charcters from source
 *
 * Return: pointer to dest string after concatenation
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
