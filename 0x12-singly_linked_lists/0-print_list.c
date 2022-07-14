#include "lists.h"
#include <stdio.h>
/**
 * print_list - print elements of a linked list
 * @h: linked list
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t n_nodes = 0;
	const list_t *c = h;

	while (c != NULL)
	{
		printf("[%d] %s\n", c->len,
		c->str != NULL ? c->str : "(nil)");
		c = c->next;
		n_nodes++;
	}
	return (n_nodes);
}
