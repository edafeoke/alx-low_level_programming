#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int unit;
	int ten;
	int count = 10;

	for (ten = 0; ten < count; ten++)
	{
		for (unit = 0; unit < count; unit++)
		{
			if (unit > ten)
			{
				putchar(ten + 48);
				putchar(unit + 48);
				if (ten < (count - 2))
				{
					putchar(',');
					putchar(' ');
				}
			};
		};
	}
	putchar('\n');
	return (0);
}
