#include "holberton.h"

/**
 * factorial - Returns factorial of a given numer
 * @n: number
 *
 * Return: factorial (Success) or -1 (error)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
