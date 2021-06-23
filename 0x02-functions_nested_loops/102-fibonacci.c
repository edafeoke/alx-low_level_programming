#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n = 1;
	long int m = 2;
	long int temp;
	int count;

	for (count = 0; count < 50; count++)
	{
		temp = n + m;
		n = m;
		m = temp;
		printf("%ld, ", n);
		printf("%ld", m);
		if (count < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

