#include "variadic_functions.h"

/**
 * print_all - printing all formats
 * @format: types of argument
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list list;

	char c;
	int i;
	float f;
	const char *s;
	const char *F = format;

	va_start(list, format);

	while (*F != '\0')
	{
		switch (*F)
		{
			case 'c':
				{
					c = (char)va_arg(list, int);
					printf("%c", c);
					break;
				}
			case 'f':
				{
					f = va_arg(list, double);
					printf("%f", f);
					break;
				}
			case 'i':
				{
					i = va_arg(list, int);
					printf("%i", i);
					break;
				}
			case 's':
				{
					s = va_arg(list, const char *);
					printf("%s", s == NULL ? "(nil)" : s);
					break;
				}
			default:
				break;
		}
		F++;
	}
}
