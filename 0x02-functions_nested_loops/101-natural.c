#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count, sum = 0;

	for (count = 0; count < 1024; count++)
	{
		if ((count % 3 == 0) || (count % 5 == 0))
		{
			sum = sum + count;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}

