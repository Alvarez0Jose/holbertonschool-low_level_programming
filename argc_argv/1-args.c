#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: number of arguments
 * @argv: number of vectors
 * Return: number of arguments
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	printf("%d\n", argc);

	for (i = 1; i < argc; i++)
	{
		printf("%d\n", i);
	}
		return (0);
}
