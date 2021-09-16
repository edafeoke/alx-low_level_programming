#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - function that prints character
 * @l char specifier
 */

void print_char(va_list l)
{
	char c;

	c = va_arg(l, int);
	printf("%c", c);
}

/**
 * print_int - function that prints integer
 * @l: integer specifier
 */

void print_int(va_list l)
{
	int i;

	ni = va_arg(l, int);
	printf("%i", i);
}

/**
 * print_float - function that prints a float
 * @l: flat specifier
 */

void print_float(va_list l)
{
	float f;

	f = va_arg(l, double);
	printf("%f", f);
}

/**
 * print_string - function that prints string
 * @l: string specifier
 */

void print_string(va_list argptr)
{
	char *str;

	str = va_arg(argptr, char*);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - print all input
 * @format: format to follow
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list l;
	char *s = ", ";
	print_type types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	while (format != '\0')
	{
		i++;
	}
	va_start(l, n);
	
	if (separator && (i < n - 1))
		printf("%s", separator);
	va_end(l);
	printf("\n");
}
