#include "lists.h"

/**
 * pop_listint - pops the head node
 * @h: pointer to head node
 *
 * Return: data of new head node
 */
int pop_listint(listint_t **h)
{
	listint_t *t;
	int n = 0;

	t = *h;
	if (!t)
		return (0);

	n = t->n;
	*h = t->next;
	free(t);
	return (n);
}
