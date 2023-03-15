#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function concatenate command line arguments
 *
 * @ac: argument counter
 * @av: argument vector
 *
 * Return: pointer to new string contain concatinated arguments
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, size = 0, tmp = 0;
	char *new_str;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			size++, j++;
		}
		i++;
	}
	/* add ac to size to store suitable memeory for new line */
	size += ac;
	/* add one byte to size for last newline */
	size++;
	new_str = malloc(size * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			new_str[tmp] = av[i][j];
			tmp++, j++;
		}
		if (new_str[tmp] == '\0')
		new_str[tmp++] = '\n';
		i++;
	}
	return (new_str);
}
