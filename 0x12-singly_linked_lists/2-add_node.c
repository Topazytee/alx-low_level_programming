#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: Double pointer to the head node of the linked list
 * @str: Pointer to the constant character string
 * to be stored in the new node
 *
 * Return: Pointer to the newly added node,
 * or NULL if memory allocation fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newn;
	unsigned int s, count = 0;

	newn = malloc(sizeof(list_t));
	if (newn == NULL)
		return (NULL);
	newn->str = strdup(str);
	for (s = 0; str[s] != '\0'; s++)
		count++;
	newn->len = count;
	newn->next = *head;
	*head = newn;

	return (*head);
}
