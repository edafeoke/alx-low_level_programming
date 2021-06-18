#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base = 16;
	int count = 0;
	int char_0;

	while (count < base)
	{
		if (count < 10)
		{
			char_0 = 48;
		}
		else
		{
			char_0 = 87;
		}
		putchar(count + char_0);
		++count;
	}
	putchar('\n');
	return (0);
}
