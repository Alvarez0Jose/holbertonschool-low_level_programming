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
	printf("%d\n", argc - 1);
	return (0);
}
