#include "main.h"

/**
 * rev_string - used to reverse string and store it in the same var
 * @s: pointer hold the string address
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char _swap_char = '1';

	while (s[i] != '\0')
	{
		i++;
	}
	/* now i have the size of string */
	for (j = 0; j < (i / 2); j++)
	{
	/* make swap between the j index and the (i - j - 1) index */
		_swap_char = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = _swap_char;
	}
}
