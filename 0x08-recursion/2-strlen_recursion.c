#include "main.h"
/**
 * _strlen_recursion - function to find the lenght of string using recursion
 *
 * @s: the string
 * 
 * Return: the lengh of the string s 
 */
int _strlen_recursion(char *s)
{
	if(s[0] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
