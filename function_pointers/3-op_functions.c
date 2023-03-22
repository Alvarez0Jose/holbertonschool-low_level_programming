#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: integer to be added
 * @b: integer to be added
 * Return: result of the sum of both integers
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subtracts two integers
 * @a: integer being subtracted from
 * @b: integer to be subtracted
 * Return: difference of subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: integer being multiplied
 * @b: integer being multiplied
 * Return: result of multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: integer being divided
 * @b: integer being divided by
 * Return: result of division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modular division of two integers
 * @a: integer being modular divided
 * @b: integer being modular divided by
 * Return: modular division result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
