#include "main.h"

/**
 * reverse_array - reverse the content of the array
 * @a: array pointer
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int C, D, E;

	for (C = 0, D = n - 1; C < D; C++, D--)
	{
		E = a[C];
		a[C] = a[D];
		a[D] = E;
	}
}
