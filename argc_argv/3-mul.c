#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry
 * @argv: argument vector
 * @argc: argument counter
 * Return: argument result
 */

int main(int argc, char *argv[])
{
	int n;
	int i;
	int a;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = 0;
		if (*argv[1] != '\0')
		{
			i = atoi(argv[1]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	a = 0;
		if (*argv[2] != '\0')
		{
			a = atoi(argv[2]);
		}
		else
		{
			printf("Error\n");
				return (1);
		}

		n = i * a;

		printf("%d\n", n);
		return (0);
}
