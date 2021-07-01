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
	else if (n == 0)
	{
		return;
	}
	else
	{
		_putchar(n % 10);
		n /= 10;
		print_number(n);
	}
}
