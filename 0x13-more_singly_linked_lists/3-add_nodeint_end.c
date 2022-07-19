#include "lists.h"

/**
 * adds a new node at the end of a listint_t list
 * @head: head of a list
 * @n: n element
 *
 * Return: address of the new element,
 *	NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	(void)temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (*head);
}
