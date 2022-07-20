#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list
 * @head: head of a list
 * @index: index of the list where the node is deleted
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next;

	if (!head)
		return (-1);
	if (index && *head)
		return (delete_nodeint_at_index(&(*head)->next, index - 1));
	if (index || !(*head))
		return (-1);

	next = (*head)->next;
	free(*head);
	*head = next;

	return (1);
}
