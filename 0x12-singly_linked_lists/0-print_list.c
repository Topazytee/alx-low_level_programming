#include "lists.h"

/**
 * print_list - Prints all the elements of a singly linked list
 * @h: Pointer to the head node of the singly linked list
 *
 * Return: The total number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);
}
