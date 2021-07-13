#include <stdio.h>
#include <stdlib.h>

/**
 * isdigit - function that checks for a digit (0 through 9).
 * @c: function argument
 * Return: int.
 */

int isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}

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
