#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - copies memory area.
 * @s: string to search
 * @c: char to search for
 *
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
