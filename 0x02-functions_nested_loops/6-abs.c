#include "holberton.h"

/**
 * _abs - Prints absolute value of n
 * @n: The int to check
 *
 * Return: Absolute value on n
 */
int _abs(int n)
{
	if (n <= 0)
	{
		return (-1 * n);
	}
	return (n);
}

