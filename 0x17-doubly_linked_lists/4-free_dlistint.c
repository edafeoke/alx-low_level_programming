#include "lists.h"

/**
 * free_dlistint -  a function that free a dlistint_t list
 * @head: head of the linkedlist
 * Return: Nothing!
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	head = NULL;
}
