#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Head.
 * @idx: The index position.
 * @n: The number for node.
 *
 * Return: Returns address of new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int l;
	listint_t *temp = *head;
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode || !head)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	for (l = 0; temp && l < idx; l++)
	{
		if (l == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
