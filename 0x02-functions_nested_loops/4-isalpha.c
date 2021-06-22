#include "holberton.h"

/**
 * _isalpha - Checks c if it is an alphabet
 * @c: The character to check
 *
 * Return: 1 if true and 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

