#include "variadic_functions.h"

/**
 * print_numbers - printing of numbers
 * @n: numbers being printed
 * @separator: string printed between numbers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int idx;

	separator = ", ";

	va_start(args, n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", va_arg(args, int));
		if (idx < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
