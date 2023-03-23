#include "variadic_functions.h"

/**
 * sum_them_all - sum of all of the arguments
 * @n: all of the elements being used for the sum
 * Return: sum of all numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	int result;
	unsigned int idx;
	int num;

	va_start(args, n);


	if (n == 0)
	{
		return (0);
	}

	for (idx = 0; idx < n; idx++)
	{
		num = va_arg(args, unsigned int);
		result += num;
	}
	va_end(args);
	return (result);
}





