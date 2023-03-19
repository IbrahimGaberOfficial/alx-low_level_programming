#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - function copy n of charcters fron src to dest
 *
 * @dest: pointer to destenation string
 * @src: pointer to source string
 * @n: number of charcters
 *
 * Return: pointer to destenation string after copying
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

