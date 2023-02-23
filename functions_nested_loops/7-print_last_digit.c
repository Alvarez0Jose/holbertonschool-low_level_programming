#include "main.h"
/**
 * print_last_digit - entry point
 * Return: last digit
 * @DIG: value
 */
int print_last_digit(int DIG)
{
	int x;

	x = (DIG % 10);

	if (x > 0)
		return (DIG);
	else
		return (-DIG);
}
