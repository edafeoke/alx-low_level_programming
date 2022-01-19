#include "search_algos.h"

/**
 * print_array - prints array separated by commas
 * @array: the array to be printedd
 * @size: size of the array
 */
void print_array(int *array, size_t size)
{
	size_t i = 0;

	for ( ; i < size - 1; i++)
		printf("%i, ", array[i]);
	printf("%i\n", array[i]);
}

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	int loc;


	if (size == 0 || !array)
		return (-1);

	printf("Searching in array: ");
	print_array(array, size);

	/*Base case*/
	if (size == 1 && array[0] != value)
		return (-1);

	if (size % 2  == 0)
		mid -= 1;

	/*main case*/
	if (array[mid] > value)
		return (binary_search(array, mid, value));
	else if (array[mid] < value)
	{
		if (size % 2  == 0)
			mid = mid + 1;
		loc = binary_search(array + mid + ((size  % 2 == 0) ? 0 : 1), mid, value);
		if (loc == -1)
			return (-1);
		return (loc + mid);
	}

	return (mid);
}
