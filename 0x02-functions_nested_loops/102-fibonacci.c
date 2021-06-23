#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int fib[50];
	int c;

	fib[1] = 2;
	fib[0] = 1;
	for (c = 2; c < 50; c++)
	{
		fib[c] = fib[c - 1] + fib[c - 2];
	}

	for (c = 0; c < 50; c++)
	{
		printf("%ld", fib[c]);
		if (c < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

