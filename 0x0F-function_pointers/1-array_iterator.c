#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - aray iterator func
 * @array: array of int
 * @size: size of array
 * @action: function to implement
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
