#include "lists.h"

/**
 * list_len - Determines the length of a linked list
 * @h: Pointer to the head node of the linked list
 *
 * Return: The total length of the list, counting the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
