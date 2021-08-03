#include "lists.h"

/**
 * get_nodeint_at_index - gets a node
 * @head: head node
 * @index: index to retrieve
 *
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *t;
	unsigned int i = 0;

	t = head;
	for (i = 0; i < index; i++)
	{
		if (!t)
			return (NULL);
		t = t->next;
	}
	return (t);
}
