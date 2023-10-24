#include "lists.h"

/**
 * pop_listint-  function that deletes the head node of a listint_t linked list
 * @head: pointer that points to the first node
 * Return: the head node of n
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (*head == NULL)
	return (0);

	else
	{
	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	}
	return (data);
}
