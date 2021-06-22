#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[10] = "Holberton";
	int count = 0;

	while (count < 10)
	{
		_putchar(str[count]);
		++count;
	}
	_putchar('\n');
	return (0);
}
