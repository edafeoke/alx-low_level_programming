#include "holberton.h"

/**
 *getlength - returns the lenth of string
 *@num: Input number
 *Return: number of digits of n
 */
int getlenght(int num)
{
	int lenght = 0;

	if (!num)
		return (1);

	while (num)
	{
		num = num / 10;
		lenght += 1;
	}
	return (lenght);
}

/**
 *getpow - raises the number base to power
 *@base : the base
 *@power : the power
 *Return: return the power of base
 */
int getpow(int base, int power)
{
	int i;
	int j = 1;

	for (i = 0; i < power; i++)
	{
		j = j * base;
	}
	return (j);
}


/**
 * print_number - Prints number n
 * @n: Input number
 *
 * Return: void
 */
void print_number(int n)
{
	int tmp, lenght, i;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	tmp = n;
	lenght = getlenght(n);
	for (i = lenght; i > 0; i--)
	{
		_putchar((tmp / getpow(10, i)) + 48);
		tmp = tmp % getpow(10, i);
	}
}
