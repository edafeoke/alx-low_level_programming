#include "lists.h"

/**
 * sum_listint - sums all integer of a list
 * @head: head node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *t;
	int i = 0;

	t = head;
	if (!t)
		return (i);
	while (t->next)
	{
		t = t->next;
		i += t->n;
	}
	free(t);
	return (i);
}
