#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the
 * beginning of a listint_t list
 * @h: pointer to head node of list
 * @n: integer to add
 *
 * Return: Address of added element or NULL
 */
listint_t *add_nodeint(listint_t **h, const int n)
{
	listint_t *t;

	t = malloc(sizeof(listint_t));
	if (!t)
		return (NULL);
	t->n = n;
	t->next = *h;
	*h = t;
	return (*h);
}
