#include "lists.h"

/**
 * add_dnodeint - return no of elements of a doubly linkef list
 * @head: head
 * @n: value
 *
 * Return: pointer to new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	(*head) = new;
	return (new);
}
