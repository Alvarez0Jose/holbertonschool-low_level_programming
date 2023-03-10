#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: counts the arguments
 * @argv: argument vectors
 * Return: argument count
 */

int main(int argc, char *argv[])
{
	int i;

	printf("%s\n", argv[0]);

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
