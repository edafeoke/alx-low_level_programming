#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - copy string from src to dest
 * @dest: pointer to destinaiton
 * @src: pointer to source
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	char *pointer = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (pointer);
}

