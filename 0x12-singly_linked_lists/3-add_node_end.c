#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: Double pointer to the head node of the linked list
 * @str: Pointer to the constant character string
 * to be stored in the new node
 *
 * Return: Pointer to the newly added node,
 * or NULL if memory allocation fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newn;
	list_t *temp = *head;
	unsigned int s = 0;

	while (str[s])
		s++;

	newn = malloc(sizeof(list_t));
	if (!newn)
		return (NULL);

	newn->str = strdup(str);
	newn->len = s;
	newn->next = NULL;

	if (*head == NULL)
	{
		*head = newn;
		return (newn);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newn;

	return (newn);
}
