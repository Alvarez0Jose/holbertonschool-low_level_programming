#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @n: ammount of arguments
 * @separator: stirng separator
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list Args;

	unsigned int a;
	const char *b;

	va_start(Args, n);

	for (a = 0; a < n; a++)
	{
		b = va_arg(Args, const char *);

		if (b == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", b);
		}

		if (separator != NULL && a < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(Args);
	printf("\n");
}
