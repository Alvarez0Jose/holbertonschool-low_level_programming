#include "search_algos.h"

/**
 * linear_search - searches the array for value
 * @array: the array being iterated through
 * @size: elements in the array
 * @value: element we're looking for
 * Return: the integer we are looking for or -1 if not possible.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Comparing value %d\n", array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
