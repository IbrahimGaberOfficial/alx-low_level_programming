#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr - searches needle substring in haystack string
 *
 * @haystack: string to search into
 * @needle: substring to search for
 *
 * Return: pointer to the first occurrence to needle in haystack if matches
 * NULL otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

