#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory
 * @ptr: pointer to memory
 * @old_size: old size
 * @new_size: new size
 *
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;
	char *tmp;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	tmp = (char *) ptr;
	for (i = 0; i < old_size; i++)
	{
		p[i] = *(tmp + i);
	}
	free(ptr);
	return (p);
}
