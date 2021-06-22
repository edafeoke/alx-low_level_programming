#include "holberton.h"

/**
 * print_alphabet_x10 - Prints all letters of the alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char start = 97;
	char stop = 123;
	int count = 0;

	while (count < 10)
	{
		while (start < stop)
		{
			_putchar(start);
			++start;
		}
		_putchar('\n');
		start = 97;
		++count;
	}
}

