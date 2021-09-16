#include "lists.h"

/**
 * print_dlistint - print all elements of a doubly linkef list
 * @h: head
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
