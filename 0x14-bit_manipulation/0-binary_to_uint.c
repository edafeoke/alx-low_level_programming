#include "holberton.h"

/**
 * _strlen -  swaps the values of two integers.
 * @s: String input
 *
 * Return: Lenght of string
 */
unsigned int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen(s) + 1);
}

/**
 * _pow - function that returns the value of x
 * raised to the power of y
 *
 * @x: number
 * @y: power number
 * Return: x^y
 */
int _pow(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow(x, y - 1));
}

/**
 * binary_to_unit - Convert binary to unsigned int
 * #b: pointer to binary string
 *
 * Return: number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i, n = 0;
	char *s = malloc(sizeof(b));
       
	strcpy(s, b);
	len = _strlen(s);
	if (len == 0)
		return (0);
	for (i = 0; i < len; i++)
	{
		unsigned int c = len - (i + 1);

		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			n += _pow(2, c);
	}
	free(s);
	return (n);
}
