#include "function_pointers.h"

/**
 * print_name - function takes string and function as arguments and based on
 * function argumest in give the function the string as argumest too
 *
 * @name: string
 * @f: function pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
	f(name);
	}
}
