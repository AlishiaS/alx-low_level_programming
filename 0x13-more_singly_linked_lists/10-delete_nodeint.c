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

	p = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && p != NULL; i++)
		{
			p = p->n;
		}
	}

	if (p == NULL || (p->n == NULL && index != 0))
	{
		return (-1);
	}

	n = p->n;

	if (index != 0)
	{
		p->n = n->n;
		free(n);
	}
	else
	{
		free(p);
		*head = n;
	}
	return (1);
}
