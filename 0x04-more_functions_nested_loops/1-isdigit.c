#include "holberton.h"

/**
 * _isdigit - Checks c if it is a digit
 * @c: The character to check
 *
 * Return: 1 if true and 0 if false
 */
int _isdigit(int c)
{
	if (c < 48 || c > 57)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
