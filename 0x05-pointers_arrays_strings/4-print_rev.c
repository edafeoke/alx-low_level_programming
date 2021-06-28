#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: String input
 *
 * Return: void
 */

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

void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

