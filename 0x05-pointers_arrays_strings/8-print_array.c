#include "holberton.h"
#include <stdio.h>

/**
 * @a: pointer to the array
 * @n: Number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < a[n])
	{
		printf("%d", a[n]);
		if (count < n-1)
		{
			printf(", ");
		count++;
	}
	_putchar('\n');
}

