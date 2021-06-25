#include "holberton.h"

/**
 * print_number - Prints number n
 * @n: Input number
 *
 * Return: void
 */
void print_number(int n)
{
	int k, l;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	k = n / 10;
	l = n % 10;
	if (k != 0)
	{
		_putchar(k + 48);
	}
	_putchar(l + 48);
}
