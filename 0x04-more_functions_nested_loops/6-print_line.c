#include "holberton.h"

/**
 * print_line - Prints line
 * @n: lenght of line
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
