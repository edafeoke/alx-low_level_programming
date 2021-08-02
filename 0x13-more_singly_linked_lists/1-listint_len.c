#include "lists.h"

/**
 * listint_len - a function that returns
 * the number of elements in a linked listint_t list
 * @h: pointer to head node of list
 *
 * Return: length of list
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;
	const listint_t *t;

	t = h;
	while (t)
	{
		c++;
		t = t->next;
	}
	return (c);
}
