#include "lists.h"

/**
 * print_list - prints content of a linked list
 * @h: head of list to be printed
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp;

	temp = h;
	while (temp)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		count++;
	}
	return (count);
}
