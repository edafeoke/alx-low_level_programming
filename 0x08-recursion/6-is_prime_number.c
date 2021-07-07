#include "holberton.h"

/**
 * test_factors - Test all prime factors
 * @n: number to test
 * @i: factor counter
 *
 * Return: 1 if no other factors and 0 itherwise
 */
int test_factors(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (test_factors(n, ++i));
}

/**
 * is_prime_number - Check if prime
 * @n: number
 *
 * Return: 1 if true or 0 if false
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (test_factors(n, 2));
}
