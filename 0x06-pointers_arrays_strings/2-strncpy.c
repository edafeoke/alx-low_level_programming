#include "holberton.h"

/**
 * _strncpy - Copies a string
 * @dest: Destination
 * @src: Source
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ptr;
	int count;

	dest_ptr = dest;
	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}
	for (; count < n; count++)
	{
		dest[count] = '\0';
	}
	return (dest_ptr);
}
