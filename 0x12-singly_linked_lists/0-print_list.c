#include "lists.h"
#include <stdlib.h>
/**
 * print_list - prinst elements of a linked list
 * @h: linked list
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}