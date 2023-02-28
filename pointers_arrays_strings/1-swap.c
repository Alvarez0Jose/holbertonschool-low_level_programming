#include "main.h"
/**
 * swap_int - swapping one number for another
 * @a: input for swap
 * @b: input for swap
 * Return: 0
*/
void swap_int(int *a, int *b)
{
	int S;

	S = *a;
	*a = *b;
	*b = S;
}
