#include "main.h"
int is_prime_helper(int n, int i);

/**
 * is_prime_number - looks for prime numbers
 * @n: numbers being evaluated
 * Return: 1 if prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n == 2 || n == 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, 5));
}

/**
 * is_prime_helper - helps identify prime numbers
 * @n: number being evaluated
 * @i: number divisor
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0 || n % (i + 2) == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 6));
}
