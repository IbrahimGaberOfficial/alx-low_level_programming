#include "lists.h"

/**
 * list_len - function return the number of elements in a linked list list_t
 *
 * @h: pointer to linked list
 *
 * Return: int
 */

size_t list_len(const list_t *h)
{
	unsigned int j = 0;
	const list_t *tmp = h;

	for (; tmp; tmp = tmp->next)
	{
		j++;
	}
	return (j);
}
