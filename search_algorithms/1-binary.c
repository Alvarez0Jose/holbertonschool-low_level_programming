#include "search_algos.h"

/**
 * binary_search - Searches in the arrye for a value
 * @array: array to be searched
 * @size: elements in the array
 * @value: element we are looking for
 * Return: the value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid = left + (right - left) / 2;
	int idx;


	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (idx = left; idx <= right; idx++)
		{
			if (idx == right)
			printf("%d\n", array[idx]);
			else
			printf("%d, ", array[idx]);
		}

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
