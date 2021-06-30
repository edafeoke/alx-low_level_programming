#include "holberton.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination
 * @src: Source
 *
 * Return: Pointer to the destination
 */
char *_strcat(char *dest, char *src)
{
	char *dest_ptr;

	dest_ptr = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return dest_ptr;
}
