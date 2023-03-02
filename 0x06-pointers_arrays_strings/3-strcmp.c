#include"main.h"

/**
* _strcmp - compare 2 string s1 and s2 then return value basec on compareson
* greater than , equla , less than respectively (s1) is greater, match, less
* than s2
*
* @s1: the first string
* @s2: the second string
*
* Return: intger
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int _compare = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;

	}
	if (s1[i] == s2[i])
	{
		_compare = 0;
	}
	else if (s1[i] > s2[i])
	{
		_compare = s1[i] - s2[i];
	}
	return (_compare);
}
