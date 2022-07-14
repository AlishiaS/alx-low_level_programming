#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Frees a list.
 * @head: A pointer to the list_t list.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(head->str);
		free(head)
	}
}
