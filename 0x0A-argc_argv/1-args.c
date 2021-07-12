#include <stdio.h>

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: list of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
