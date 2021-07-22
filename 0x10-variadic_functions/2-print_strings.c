#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: seperator
 * @n: number of numbers
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list l;
	char *s;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(l, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (separator && (i < n - 1))
			printf("%s", separator);
	}
	va_end(l);
	printf("\n");
}
