#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int start = 97;
	int stop = 123;

	while (start < stop)
	{
		if ((start != 'e') && (start != 'q'))
		{
			putchar(start);
		}
		++start;
	}
	putchar('\n');
	return (0);
}
