#include "lists.h"

/**
 * add_node -  function that adds a new node at the beginning of a list_t list.
 * @head: the node
 * @str: the sring
 * Return: always success
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
	len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}

