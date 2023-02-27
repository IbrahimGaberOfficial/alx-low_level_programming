#include "main.h"

/**
 * _strlen - get the length of the string
 * @s: pointer point to the string which it's lenght will be calculated
 *
 * Return: the lenght of the string
 */
int _strlen(char *s)
{	int i = 0;
	while (s[i] != '\0')
	{	i++;
	}
	return (i);
}
