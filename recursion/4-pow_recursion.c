#include "main.h"

/**
 * _pow_recursion - recursive power
 * @x: power being used
 * @y: digit being powered
 * Return: integer returned
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
