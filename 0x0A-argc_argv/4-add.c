#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: list of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;
	int n;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		while (i < argc)
		{
			n = atoi(argv[i]);
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += n;
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
