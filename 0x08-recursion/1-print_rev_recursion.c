#include "holberton.h"

/**
 * _print_rev_recursion - prints a string, followed by a new line.
 * @s: String
 *
 * Return: void;
 */
void _print_rev_recursion(char *s)
{
	char tmp;

	if (*s == '\0')
	{
		return;
	}
	tmp = *s;
	s++;
	_print_rev_recursion(s);
	_putchar(tmp);
}
