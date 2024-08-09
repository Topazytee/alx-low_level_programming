#include "lists.h"

/**
 * free_listint_safe - Frees a linked list.
 * @h: Head.
 *
 * Return: The number of elements in the freed list.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int c;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		c = *h - (*h)->next;
		if (c > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}

	*h = NULL;

	return (l);
}
