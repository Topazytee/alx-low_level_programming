#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: The head pointer of the singly linked list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current)
	{
		listint_t *code = current->next;

		free(current);
		current = code;
	}
}
