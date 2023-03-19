#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcat - function to concatenate strings
 *
 * @dest: pointer to destnation string
 * @src: pointer to source string
 *
 * Return: pointer to the destenation string after concatenation
 */

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
