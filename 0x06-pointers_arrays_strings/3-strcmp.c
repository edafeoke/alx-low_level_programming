#include "holberton.h"

/**
 * _strcmp - Compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Differencwe between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	for ( ; *s1 == *s2; s1++, s2++)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
	}
	return (*s1 - *s2);
}
