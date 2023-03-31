#include "lists.h"

/**
 * print_list - function to print elements of node in specific format
 * and return the number of elements of it
 *
 * @h: the node to print it's elements
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int j = 0;
	const list_t *tmp_h = h;

	for (; tmp_h; tmp_h = tmp_h->next, j++)
	{
		if (tmp_h->str == NULL)
		{
			printf("[%d]", 0);
			printf("(nil)\n");
		}
		else
		{
			printf("[%d]", tmp_h->len);
			printf("%s\n", tmp_h->str);
		}
	}
	return (j);
}
