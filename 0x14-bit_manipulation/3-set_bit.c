#include "holberton.h"

/**
 * set_bit - Sets value of a bit to 1
 * @n: number
 * @index: index
 *
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 64)
	{
		*n = *n | 1 << index;
		return (1);
	}
	return (-1);
}
