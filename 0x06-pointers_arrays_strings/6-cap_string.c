#include "holberton.h"

/**
 * cap_string - changes all lowercase letters of a string to uppercase.
 * @c: input characters
 *
 * Return: Pointer to characters
 */
char *cap_string(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (*c >= 97 && *c <= 122)
		{
			*c = *c - 32;
		}
		if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n' || c[i] == ','
		|| c[i] == ';' || c[i] == '.' || c[i] == '!' ||	c[i] == '?' ||
		c[i] == '\"' || c[i] == '(' || c[i] == ')' || c[i] == '{' ||
		c[i] == '}')
		{
			if (c[i + 1] >= 97 && c[i + 1] <= 122)
			{
				*(c + i + 1) = *(c + i + 1) - 32;
			}
		}
		i++;
	}
	return (c);
}
