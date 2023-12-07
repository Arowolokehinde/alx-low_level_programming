#include "lists.h"

/**
* dlistint_len- function that returns the number of elements in a list
* @h: pointer to the first node
* Return: Always success
*/

size_t dlistint_len(const dlistint_t *h)
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
			temp = temp->next;
			counter++;
		}
	}

		return (counter);
}
