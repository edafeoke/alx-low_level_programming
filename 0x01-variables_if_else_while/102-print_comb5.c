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
			for (c = 0; c < count; ++c)
			{
				for (d = 0; d < count; ++d)
				{
					if ((a == 0) & (b == 0) & (c == 0) & (d == 0))
					{
						++d;
					}
					putchar(a + 48);
					putchar(b + 48);
					putchar(' ');
					putchar(c + 48);
					putchar(d + 48);
					if ((a < (count - 1)) || (b < (count - 1)) ||
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