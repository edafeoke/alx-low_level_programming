#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @c: input characters
 *
 * Return: Pointer to characters
 */
char *string_toupper(char *c)
{
	while (*c)
	{
		if (*c >= 97 && *c <= 122)
		{
			*c = *c - 32;
		}
		c++;
	}
	return (c);
}
