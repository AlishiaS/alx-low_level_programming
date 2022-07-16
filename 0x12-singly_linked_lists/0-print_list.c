#include "lists.h"
<<<<<<< HEAD

=======
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
>>>>>>> parent of 7f8a414 (Print list)
/**
 * print_list - prinst elements of a linked list
 * @h: linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (*h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		*h = h->next;
	}
	return (nodes);
}
