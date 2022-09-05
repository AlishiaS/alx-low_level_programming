#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of list
 * @idx: index
 * @n: number
 *
 * Return: the address of the new node,
 *	Otherwise - NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tm = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tm = tm->next;
		if (tm == NULL)
			return (NULL);
	}

	if (tm->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tm;
	new->next = tm->next;
	tm->next->prev = new;
	tm->next = new;

	return (new);
}
