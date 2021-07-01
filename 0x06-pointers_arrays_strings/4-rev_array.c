#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: Array
 * @n: Lenght of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = tmp;
	}
}
