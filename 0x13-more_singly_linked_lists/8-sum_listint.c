#include "lists.h"

/**
 * sum_listint- function that returns the sum of all the data (n) of a list
 * @head:pointer to the first node
 * Return: it should return sum
*/

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
	sum += current->n;
	current = current->next;
	}
	return (sum);
}
