#include "lists.h"

/**
 * insert_nodeint_at_index - insert node
 * @head: pointer t0 head
 * @index: index
 *
 * Return: 1 if success and -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *temp;
	unsigned int i;

	if (!head || *head || index)
		return (-1);
	temp = malloc(sizeof(temp));
	prev = malloc(sizeof(prev));
	if (!temp || !prev)
	{
		free(temp);
		free(prev);
		return (-1);
	}
	temp = *head;
	for (i = 0; i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == *head)
		*head = temp->next;
	else
		prev->next = temp->next;
	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		temp = temp->next;
	}
	temp->next = prev->next;
	*head = temp;
	free(temp);
	return (1);
}
