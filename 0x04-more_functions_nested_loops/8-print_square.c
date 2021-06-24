#include "holberton.h"

/**
 * print_square - prints square of n square size
 * @n: size
 * Return: Result (a*b)
 */
void print_square(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
