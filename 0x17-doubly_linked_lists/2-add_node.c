#include "lists.h"
#include <string.h>

/**
 * *add_dnodeint - adds a node at beginning of dlistint_t list
 * @head: head of list
 * @n: element value
 *
 * Return: address of new element,
 *	Otherwise - NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}
