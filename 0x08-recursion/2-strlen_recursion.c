#include "holberton.h"

/**
 * _strlen_recursion - Returns lenght of a string
 * @s: String
 *
 * Return: lenght of string (int)
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (0);
	}
	length++;
	s++;
	length += _strlen_recursion(s);
	return (length);
}
