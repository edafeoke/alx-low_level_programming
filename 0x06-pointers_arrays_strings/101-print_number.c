#include "holberton.h"
/**
 * print_number - prints a number
 * @n: number
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else
	{
		int x = n;

		n = n / 10;
		if (n > 0)
		{
			print_number(n);
		}
		_putchar((x % 10) + 48);
	}
}
