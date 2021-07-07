#include "holberton.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: String
 *
 * Return: void;
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s++);
	_putchar(*s);
}
