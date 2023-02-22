#include "main.h"
/**
 * print_sign - entry
 * Return: 1 (greater that zero) 0 (zero) -1 (less than zero)i
 * @n: placeholder
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
