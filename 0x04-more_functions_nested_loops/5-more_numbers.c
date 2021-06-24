#include "holberton.h"

/**
 * more_numbers - Prints numbers 0 - 14 10 times
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_to_14();
	}
}

void print_to_14(void)
{
	int i, j, k;
	for (i = 0; i < 15; i++)
	{
		j = i / 10;
		k = i % 10;
		if (j != 0)
		{
			_putchar(j + 48);
		}
		_putchar(k + 48);
	}
	_putchar('\n');
}
