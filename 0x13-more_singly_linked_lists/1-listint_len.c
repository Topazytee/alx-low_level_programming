#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: The head pointer of the singly linked list to measure
 *
 * Return: The number of nodes in the singly linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t code = 0;

	while (h)
	{
		code++;
		h = h->next;
	}

	return (code);
}
