#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strchr - search for the first occurrence of the character c
 * in the string pointed by s
 * @s: ponter to string to search into it
 * @c: the character to search for
 *
 * Return: pointer to the first occurrence to c in s string
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
