#include "holberton.h"

/**
 * print_numbers - Prints numbers 0 - 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
