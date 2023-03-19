#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memcpy - function to copy src string in dest string based on n length
 *
 * @dest: pointer to destenation string
 * @src: pointer to source string
 * @n: number of charcters to be copied from src to dest
 *
 * Return: pointer to destenation after coping
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}

