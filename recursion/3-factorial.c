#include "main.h"

/**
 * factorial - using factorial numbers
 * @n: number to be analyzed
 * Return: integer number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));


}
