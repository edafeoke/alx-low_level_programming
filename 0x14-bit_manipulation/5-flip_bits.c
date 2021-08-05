#include "holberton.h"
/**
 * flip_bits - returns number of bits you would need to flip to get from one
 * number to another
 * @n: long int
 * @m: long int
 * Return: number of bits to flip to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, x;

	i = 0;
	x = n ^ m;
	while (x != 0)
	{
		if ((x & 1) == 1)
		{
			i++;
		}
		x = x >> 1;
	}
	return (i);
}
