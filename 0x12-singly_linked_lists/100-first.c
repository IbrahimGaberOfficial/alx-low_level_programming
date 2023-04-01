#include "lists.h"

/**
 * myStartFun - function that executed before the main function
 * 
 * Return: nothing
 */

void myStartFun() __attribute__((constructor));

void myStartFun()
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n ");
}