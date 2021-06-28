#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @s: String input
 *
 * Return: void
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}

