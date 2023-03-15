#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function concatenate 2 strings in new allocated memory
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, Counter = 0;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	j++;

	new_str = malloc((i + j) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	/** start in concatenate strings in new string */
	for (Counter = 0; Counter < i; Counter++)
	{
		new_str[Counter] = s1[Counter];
	}
	for (Counter = 0; Counter < j; Counter++)
	{
		new_str[Counter + i] = s2[Counter];
	}
	new_str[Counter + i] = '\0';
	return (new_str);
}
