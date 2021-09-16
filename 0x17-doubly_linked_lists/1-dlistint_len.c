#include "lists.h"

/**
 * dlistint_len - return no of elements of a doubly linkef list
 * @h: head
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h);
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
