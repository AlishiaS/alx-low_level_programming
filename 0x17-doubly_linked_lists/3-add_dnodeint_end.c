#include "lists.h"
#include <string.h>

/**
 * *add_dnodeint_end - returns the address of the new element
 * @head: head of list
 * @n: element value
 *
 * Return: the address of the new element,
 *	Otherwise - NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tm;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	tm = *head;

	while (tm && tm->next)
		tm = tm->next;

	if (tm)
	{
		new->prev = tm;
		tm->next = new;
	}

	else
	{
		*head = new;
		new->prev = NULL;
	}
	return (new);
}
