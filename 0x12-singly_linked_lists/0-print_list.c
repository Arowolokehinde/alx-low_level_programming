#include "lists.h"

/**
 * print_list- function that prints all the elements of a list_t list.
 * @h: node
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	int kounter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
			kounter++;
			h = h->next;
	}
		return (kounter);
}
