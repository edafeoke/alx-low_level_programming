#include "holberton.h"

/**
 * _strlen - Returns lenght of a string
 * @s: String
 *
 * Return: lenght of string (int)
 */
int _strlen(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (0);
	}
	length++;
	s++;
	length += _strlen(s);
	return (length);
}

/**
 * check - checks if it is a parlindro,e
 * @s: string
 * @t: temporal
 * @l: length
 * @c: counter
 *
 * Return: int
 */
int check(char *s, char *t, int l, int c)
{
	if (c >= (l / 2))
	{
		return (1);
	}
	if (s[c] != t[l - 1 - c])
	{
		return (0);
	}
	c++;
	return (check(s, t, l, c));
}

/**
 * is_palindrome -  Check if is_palindrom
 * @s: pinter to string
 *
 * Return: 1 if no other factors and 0 itherwise
 */
int is_palindrome(char *s)
{
	int length;
	char *t = s;

	length = _strlen(s);
	return (check(s, t, length, 0));
}
