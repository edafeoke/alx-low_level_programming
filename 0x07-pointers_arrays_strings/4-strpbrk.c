#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer
 * @size: size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int b = 0;
	int c = 0;

	while (i < (size * size))
	{
		j = *(a + i);
		b = b + j;
		i = i + size + 1;
	}
	i = size - 1;
	while (i < ((size * size) - 1))
	{
		j = *(a + i);
		c = c + j;
		i = i + (size - 1);
	}
	printf("%d, %d\n", b, c);
}
