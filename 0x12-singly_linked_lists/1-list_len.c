#include "lists.h"

/**
 * list_len-  function that returns the number of elements in a linked  list.
 * @h: the node
 * Return: always success
*/

size_t list_len(const list_t *h)
{
	int kounter = 0;

	while (h != NULL)
	{
		kounter++;
		h = h->next;
	}
	return (kounter);
}
