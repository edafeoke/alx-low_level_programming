#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Prints from n to 98
 * @n: number to sstart from
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
		printf("%d", 98);
	putchar('\n');
	return;
}
