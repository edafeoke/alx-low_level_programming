#include "holberton.h"

/**
 * _strlen -  swaps the values of two integers.
 * @s: String input
 *
 * Return: Lenght of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @s: the string to print
 *
 * Return: void
 */
void puts_half(char *s)
{
	int lenght = _strlen(s) + 1;
	int n;

	if (lenght % 2 == 0)
	{
		n = lenght / 2;
	}
	else
	{
		n = (lenght - 1) / 2;
	}

	while (s[n])
	{
		_putchar(s[n]);
		n++;
	}
	_putchar('\n');
}

