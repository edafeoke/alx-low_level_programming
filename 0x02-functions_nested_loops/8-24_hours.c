#include "holberton.h"

/**
 * jack_bauer - Print every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h0, h1, m0, m1 = 0;

	while (m0 < 10)
	{
		_putchar(h1 + 48);
		_putchar(h0 + 48);
		_putchar(':');
		_putchar(m1 + 48);
		_putchar(m0 + 48);
		_putchar('\n');
		m0++;
		if (m0 > 9)
		{
			m0 = 0;
			m1++;
		}
		if (m1 > 5)
		{
			m1 = 0;
			h0++;
		}
		if (h0 > 9)
		{
			h0 = 0;
			h1++;
		}
		if (h1 > 1 && h0 > 3)
			return;
	}
	return;
}

