#include "holberton.h"

/**
 * print_mote_numbers - Prints numbers 0 - 14 10 times
 *@print_to_14:print 0 to 14
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			k = j /10;
			l = j % 10;
			if (k != 0)
			{
				_putchar(k + 48);
			}
			_putchar(l + 48);
		}
		_putchar('\n');
	}
}
