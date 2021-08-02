#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: first node of list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
