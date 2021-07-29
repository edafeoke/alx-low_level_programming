#include "lists.h"

/**
 * list_len - get lenght of a list
 * @h: Head of the list
 *
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
