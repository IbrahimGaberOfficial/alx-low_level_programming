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
 * add_node - function to insert new node at the beginning of linked list
 *
 * @head: head of linked list
 * @str: string to be duplicated to string variable of node
 *
 * Return: address of new node if success, NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
