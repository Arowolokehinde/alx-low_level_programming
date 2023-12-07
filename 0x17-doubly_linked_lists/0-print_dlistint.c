#include "lists.h"

/**
 * print_dlistint- function that prints all the elements of a dlistint_t list
 * @h: pointer to the first element of the node
 * Return: Always success
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (temp != NULL)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
			counter++;
		}
	}
	return (counter);
}
