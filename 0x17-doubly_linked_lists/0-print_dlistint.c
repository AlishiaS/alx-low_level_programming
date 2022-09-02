#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all elements of a dlistint_t list
 * @h: head
 *
 * Return: the number of nodes.
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	int c;

	c = 0;

	if (h == NULL)
		return (c);

	while (h-> != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}

	return (c);
}
