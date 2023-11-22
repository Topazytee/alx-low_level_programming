#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: A pointer to the first node in the list
 * @n: The data to insert in the new node
 *
 * Return: A pointer to the newly added node,
 * or NULL if memory allocation fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *code, *last;

	code = malloc(sizeof(listint_t));
	if (code == NULL)
		return (NULL);

	code->n = n;
	code->next = NULL;

	if (*head == NULL)
		*head = code;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = code;
	}

	return (*head);
}
