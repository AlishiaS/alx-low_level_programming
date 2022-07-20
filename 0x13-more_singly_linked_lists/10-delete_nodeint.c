#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list
 * @head: head of a list
 * @index: index of the list where the node is deleted
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *p;
	listint_t *n;

	if (n == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(n);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (n->next == NULL)
			return (-1);

		n = n->next;
	}

	p = n->next;
	n->next = p->next;
	free(p);

	return (1);
}
