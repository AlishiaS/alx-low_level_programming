#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns number of elements in a linked dlistint_t list
 * @h: head
 *
 * Return: the number of elements in a linked dlistint_t list
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	int c;

	c = 0;

	if (h == NULL)
		return (c);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
