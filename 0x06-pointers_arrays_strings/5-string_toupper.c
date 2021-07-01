#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @c: input characters
 *
 * Return: Pointer to characters
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			c[i] = c[i] - 32;
		}
		i++;
	}
	return (c);
}
