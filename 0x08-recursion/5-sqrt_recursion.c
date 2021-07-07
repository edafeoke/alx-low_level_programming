#include "holberton.h"

/**
 * is_sqrt - check if it is a sqrt
 * @a: root
 * @b: square
 *
 * Return: boolean
 */
int is_sqrt(float a, float b)
{
	return ((a * a) == b);
}

/**
 * find_sqrt - finds sqrt
 * @a: number
 * @b: guess
 *
 * Return: sqrt
 */
float find_sqrt(float a, float b)
{
	float f;

	f = (b + (a / b)) / 2;
	if (is_sqrt(f, a))
	{
		return (f);
	}
	return (find_sqrt(a, f));
}

/**
 * _sqrt_recursion - find the value of n
 * @n: number
 *
 * Return: power (Success) or -1 (error)
 */
int _sqrt_recursion(int n)
{
	int sqrt;

	if (n < 0)
	{
		return (-1);
	}
	sqrt = (int) find_sqrt(n, 1);
	if (is_sqrt(sqrt, n))
	{
		return (sqrt);
	}
	return (-1);
}
