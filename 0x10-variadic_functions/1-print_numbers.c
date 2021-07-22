#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: seperator
 * @n: number of numbers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list l;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(l, unsigned int));
		if (separator && (i < n - 1))
			printf("%s", separator);
	}
	va_end(l);
	printf("\n");
}
