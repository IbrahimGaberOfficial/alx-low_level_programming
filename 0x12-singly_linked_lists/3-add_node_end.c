#include "lists.h"

/**
 * _strlen - function claculate the length of passed string
 *
 * @str: passed string
 *
 * Return: lenghth of string (unsigned int);
 */

unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * add_node_end - function to add node at the end of linked list
 *
 * @head: head of linked list
 * @str: string pointer
 *
 * Return: pointer to new node
 */

list_t *add_node_end(list_t **head, const char *str);
{
	list_t *new_node, *last;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (new_node);
}
