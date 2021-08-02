#include "lists.h"

/**
 * print_listint - Prints all element of a list
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *t;
	size_t c = 0;

	t = h;
	while (t)
	{
		printf("%d\n", t->n);
		c++;
		t = t->next;
	}
	return (c);
}
