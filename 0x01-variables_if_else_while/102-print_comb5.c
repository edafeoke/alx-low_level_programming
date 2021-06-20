#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int count = 10;

	for (a = 0; a < count; ++a)
	{
		for (b = 0; b < count; ++b)
		{
			for (c = a; c < count; ++c)
			{
				for (d = ((a == c) ? (b + 1) : 0); d < count; ++d)
				{
					putchar(a + 48);
					putchar(b + 48);
					putchar(' ');
					putchar(c + 48);
					putchar(d + 48);
					if ((a < (count - 1)) || (b < (count - 2)) ||
							(c < (count - 1)) || (d < (count - 1)))
					{
						putchar(',');
						putchar(' ');
					}
				}
			};
		};
	}
	putchar('\n');
	return (0);
}
