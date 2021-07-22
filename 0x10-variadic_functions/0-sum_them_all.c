#include "variadic_functions.h"

/**
 * sum_them_all - sum all arguments
 * @n: number of arguments
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i = 0;
	va_list l;

	if (n != 0)
	{
		va_start(l, n);
		while (i < n)
		{
			sum += va_arg(l, unsigned int);
			i++;
		}
	}
	return (sum);
}
