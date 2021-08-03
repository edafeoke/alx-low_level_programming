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
	listint_t *current;
	listint_t *temp;

	if (!head || *head || index)
		return (-1);
	temp = malloc(sizeof(temp));
	current = malloc(sizeof(current));
	if(!temp || !current)
	{
		free(temp);
		free(current);
		return (-1);
	}
	for (temp = *head; index > 0 && temp != NULL; index--)
	{
		current = temp;
		temp = temp->next;
	}
	if (!temp)
		return (-1);
	if (temp == *head)
		*head = temp->next;
	else
		current->next = temp->next;
	free(temp);
	return (1);
}
