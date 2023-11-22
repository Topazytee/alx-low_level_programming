#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the node in the list
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newCode;

	newCode = malloc(sizeof(listint_t));
	if (newCode == NULL)
		return (NULL);

	newCode->n = n;
	newCode->next = *head;
	*head = newCode;

	return (newCode);
}
