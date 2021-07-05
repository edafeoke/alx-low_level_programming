#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: Pointer to memory area
 * @b: Constant bytes
 * @n: Number of bytes
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
