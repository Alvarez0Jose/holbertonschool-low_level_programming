#include "main.h"

/**
 * binary_to_uint - converting binary numbers to unsigned int
 *@b: string being analyzed for the converting of the binary number
 *Return: Number being converted to unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int idx;

	if (b == NULL)
		return (0);

	for (idx = 0; b[idx] != '\0'; idx++)
	{
		if (b[idx] == '1')
			number = (number << 1) | 1;
		else if (b[idx] == '0')
			number <<= 1;
		else
			return (0);
	}
	return (number);
}
