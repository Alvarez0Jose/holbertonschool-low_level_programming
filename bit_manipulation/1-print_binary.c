#include "main.h"

/**
 *print_binary - printing the representation of a binary number
 *@n: number being printed
 *Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int a = 1;
	int idx;

	while (a <= n)
		a <<= 1;
	a >>= 1;

	for (idx = 0; a > 0; a >>= 1, idx++)
	{
		if (( n & a) != 0)
			putchar('1');
		else
			putchar('0');
	}

	if (idx == 0)
		putchar('0');
}
