#include "lists.h"

/**
 * get_nodeint_at_index- function that returns the nth node of a linked list
 * @head: the pointer that points to thee first node
 * @index: the curent number
 * Return: always success
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int amount;

	amount = 0;
	while (current != NULL)
	{
	if (amount == index)
	{
	return (current);
	}
	amount++;
	current = current->next;
	}
	return (NULL);
}
