#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct prints - Structure to format printer
 * @notation: type of data type
 * @print_dType: pointer to function that prints data types
 * according to their notation
 */

typedef struct print
{
	char *f;
	void (*func_print)(va_list l);
} print_type;

void print_char(va_list l);
void print_int(va_list l);
void print_float(va_list l);
void print_string(va_list l);
#endif
