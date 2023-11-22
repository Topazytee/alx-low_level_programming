#include "lists.h"

/**
 * print_listint - Prints the elements of a singly linked list
 * @h: The head pointer of the singly linked list to print.
 *
 * Return: The number of nodes in the printed singly linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t code = 0;

	while (h)
	{
		printf("%d\n", h->n);
		code++;
		h = h->next;
	}

	return (code);
}
