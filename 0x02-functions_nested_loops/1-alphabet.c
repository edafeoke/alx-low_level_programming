#include "holberton.h"

/**
 * print_alphabet - Prints all letters of the alphabets in small caps
 *
 * Return: void
 */
void print_alphabet(void)
{
	int start = 97;
	int stop = 123;

	while (start < stop)
	{
		_putchar(start);
		++start;
	}
	_putchar('\n');
}

