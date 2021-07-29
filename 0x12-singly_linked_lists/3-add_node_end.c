#include "lists.h"

/**
 * add_node_end - Adds a node at the end of linked list
 * @head: the first node
 * @str: str to add
 *
 * Return: Added node or NULL is it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	temp = malloc(sizeof(list_t));
	if (!new || !temp)
	{
		free(new);
		free(temp);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
