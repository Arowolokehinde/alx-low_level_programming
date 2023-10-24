#include "lists.h"

/**
 * print_listint- function that prints all the elements of a listint_t list.
 * @h: the head node
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int amount;

	temp = h;
	amount = 0;

	while (temp != NULL)
	{
	printf("%d\n", temp->n);
	temp = temp->next;
	amount++;
	}

	return (amount);
}
