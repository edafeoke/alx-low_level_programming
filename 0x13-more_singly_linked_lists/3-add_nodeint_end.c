#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the
 * end of a listint_t list
 * @h: pointer to head node of list
 * @n: integer to add
 *
 * Return: Address of added element or NULL
 */
listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *t, *temp;

	t = malloc(sizeof(listint_t));
	temp = malloc(sizeof(listint_t));
	if (!t || !temp)
	{
		free(t);
		free(temp);
		return (NULL);
	}
	t->n = n;
	if (*h == NULL)
		*h = t;
	else
	{
		temp = *h;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = t;
	}
	return (t);
}
