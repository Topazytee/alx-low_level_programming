#include "lists.h"

/**
 * sum_listint - Calculates the sum of nodes.
 * @head: The head of list.
 *
 * Return: Returns the sum.
 */

int sum_listint(listint_t *head)
{
	size_t sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
