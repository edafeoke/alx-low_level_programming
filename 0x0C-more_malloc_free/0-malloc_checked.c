#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - memory allocator
 * @b: bytes
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (!m)
	{
		exit(98);
	}
	return (m);
}
