#include "3-calc.h"

/**
 * main - Entry file
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int a;
	int (*fun_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	fun_ptr = get_op_func(argv[2]);
	if (!fun_ptr)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", fun_ptr(a, b));
	return (0);
}
