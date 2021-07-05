#include "holberton.h"

/**
 * _memcpy - copies memory area.
 * @dest: destination
 * @src: source
 * @n: Number of bytes
 *
 * Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
