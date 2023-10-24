#include "lists.h"

/**
 * listint_len- function that returns the number of elements in a linked list.
 * @h: the head node
 * Return: always success
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	int amount = 0;

	while (temp != NULL)
	{
	temp = temp->next;
	amount++;
	}
	return (amount);
}
