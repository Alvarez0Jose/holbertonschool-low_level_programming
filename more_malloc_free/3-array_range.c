#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * array_range - range of array
 * @min: minimum number
 * @max: max number
 * Return: range of the array with numbers between them
 */

int *array_range(int min, int max)
{
	int *nums;
	int n;

	if (min > max)
		return (NULL);

	nums = malloc((max - min + 1) * sizeof(int));

	if (nums == NULL)
		return (NULL);

	for (n = 0; max - min >= n; n++)
		nums[n] = min + n;

	return (nums);
}
