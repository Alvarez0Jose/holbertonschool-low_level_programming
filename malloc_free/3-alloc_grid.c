#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *alloc_grid - grid allocation
 * @width: grid width
 * @height: grid height
 * Return: if height or width is 0 or negative return NULL
 */

int **alloc_grid(int width, int height)
{
	int a;
	int b;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		arr[a] = malloc(width * sizeof(int));

			if (arr[a] == NULL)
			{
				for (b = 0; b < a; b++)
			{
				free(arr[b]);
			}
			free(arr);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			arr[a][b] = 0;
		}
	}
	return (arr);
}
