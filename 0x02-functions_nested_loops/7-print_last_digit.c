#include "holberton.h"

/**
 * print_last_digit - Print the last digit of n
 * @n: The int to check
 *
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar((n % 10) + 48);
		return (n % 10);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar((-1 * (n % 10)) + 48);
	return (-1 * (n % 10));
}

