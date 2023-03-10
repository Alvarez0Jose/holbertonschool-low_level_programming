#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: argument counter
 * @argv: argument vector
 * Return: sum of argcs
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int a;
	int num;
	int j;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{

		num = atoi(argv[a]);

		for (j = 0; argv[a][j] != '\0'; j++)

		{
			if (argv[a][j] < '0' || argv[a][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}

		i += num;
	}
	printf("%d\n", i);
	return (0);
}

