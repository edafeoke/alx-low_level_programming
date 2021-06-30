#include "holberton.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Destination
 * @src: Source
 * @n: Number of byte to concate
 *
 * Return: Pointer to the destination
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr;
	int count;

	dest_ptr = dest;
	while (*dest)
	{
		dest++;
	}
	for (count = 0; count < n && *src != '\0'; count++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_ptr);
}
