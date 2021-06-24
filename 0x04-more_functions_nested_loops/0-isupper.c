#include "holberton.h"

/**
 * _isupper - Checks c if it is uppercase
 * @c: The character to check
 *
 * Return: 1 if true and 0 if false
 */
int _isupper(int c)
{
	if (c < 65 || c > 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
