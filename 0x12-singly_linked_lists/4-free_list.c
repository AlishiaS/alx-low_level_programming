#include "lists"
/**
 * free_list - Frees a list.
 * @head: head of linked list.
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *c;

	while ((c = head) != NULL)
	{
		head = head->next;
		free(head->str);
		free(head)
	}
}
