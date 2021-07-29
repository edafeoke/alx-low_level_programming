#include "lists.h"

/**
 * add_node - adds a new node to a linked list
 * @head: head of the list
 * @str: string to add
 *
 * Return: head of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
