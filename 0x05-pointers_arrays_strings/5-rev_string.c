#include "holberton.h"

/**
 * _strlen -  swaps the values of two integers.
 * @s: String input
 *
 * Return: Lenght of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * rev_string - Printsca string in reverse
 * @s: the string to print
 *
 * Return: void
 */
void rev_string(char *s)
{
	char tmp;
	int i = _strlen(s);
	int j = 0;

	while (j < i / 2)
	{
		tmp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = tmp;
		j++;
	}
}

