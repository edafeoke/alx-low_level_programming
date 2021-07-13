#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: list of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int cent[5] = {25, 10, 5, 2, 1};
	int i = 0;
	int count = 0;
	int tmp = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (tmp < 0)
	{
		tmp = 0;
	}
	while (tmp > 0)
	{
		if (tmp >= cent[i])
		{
			tmp = tmp - cent[i];
			count++;
		}
		else
		{
			i++;
		}
	}
	printf("%d\n", count);
	return (0);
}
