#include "holberton.h"

/**
 * print_binary - prints binary number
 * @n: numbder
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int b = ((n & 1) + '0');

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar(b);
}
