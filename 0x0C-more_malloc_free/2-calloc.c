#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - calloc
 * @nmemb: number of elements
 * @size: size in bytes
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i= 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		*(m + i) = 0;
		i++;
	}
	return ((void *) m);
}
