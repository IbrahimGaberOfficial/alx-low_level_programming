#include <stdlib.h>
#include "main.h"

/**
 * _strdup - strdub() custom function
 * function create space and dublicate str to it then
 * return pointer to new string
 *
 * @str: the string to copy to new allocated memory which means the new string
 *
 * Return: pointer to the new string
 */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	ptr = (char *)malloc(i * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (j < i)
	{
		ptr[j] = str[j];
		j++;
	}

	/* ptr[j] = '\0'; */

	return (ptr);

}
