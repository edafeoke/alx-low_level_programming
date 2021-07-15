#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates array
 * @min: min value
 * @max: max value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *arr;
	int length;
	int i = 0;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	arr = malloc(length * sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (i < length)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
