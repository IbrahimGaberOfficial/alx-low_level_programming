#include "lists.h"
/**
 * free_list - function to free all linked list nodes
 *
 * @head: the head of the linked list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *now_node;

	while (head != NULL)
	{
		now_node = head;
		head = head->next;
		free(now_node->str);
		free(now_node);
	}
}
