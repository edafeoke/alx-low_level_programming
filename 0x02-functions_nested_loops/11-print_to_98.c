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
			printf("%d", i);
			if (i > 98)
			{
				printf(", ");
			}
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
		printf("%d", 98);
	putchar('\n');
}
