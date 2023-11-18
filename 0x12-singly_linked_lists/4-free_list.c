#include "lists.h"

/**
 * free_list - Frees the memory allocated for the entire linked list
 * @head: Pointer to the head node of the linked list
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head->next;

		free(head->str);
		free(head);

		head = temp;
	}
}
