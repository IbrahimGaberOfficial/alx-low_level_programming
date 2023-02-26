#include <stdio.h>

/**
 * main - print size of variables based on the system
 * Description: use sizeof() function
 * Return: 0
 */

int main(void)
{
	char _char = sizeof(_char);
	int _int = sizeof(_int);
	long int _long_int = sizeof(_long_int);
	long long int _long_long_int = sizeof(_long_long_int);
	float _float = sizeof(_float);
	
	printf("Size of a char: %d byte(s)\n", _char);
	printf("Size of an int: %d byte(s)\n", _int);
	printf("Size of a long int: %d byte(s)\n", (int)_long_int);
	printf("Size of a long long int: %d byte(s)\n", (int)_long_long_int);
	printf("Size of a float: %d byte(s)\n", (int)_float);
}
