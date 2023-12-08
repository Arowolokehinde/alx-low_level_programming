#include "lists.h"

/**
 * add_dnodeint_end- function that adds a new node at the end of a list
 * @head: pointer to the first node
 * @n: variable
 * Return: Always success
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
		if (newnode == NULL)
		{
			return (NULL);
		}
		newnode->n = n;
		newnode->next = 0;
		newnode->prev = 0;
		if (*head == NULL)
		{
			*head = newnode;
		}
		else
		{
			temp = *head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = newnode;
			newnode->prev = temp;
		}
	return (newnode);
}
