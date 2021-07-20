#include "function_pointers.h"

/*print_name - print a name from a filter function
 * @name: The name to print
 * @f: filter functio
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
