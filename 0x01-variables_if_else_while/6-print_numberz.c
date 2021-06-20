#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ten = 10;
	int count = 0;

	while (count < ten)
	{
		putchar(count + 48);
		++count;
	}
	putchar('\n');
	return (0);
}
