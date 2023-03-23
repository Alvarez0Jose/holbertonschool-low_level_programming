#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - sees what function satisfies the operator needed
 * @s: operator used as argument
 * Return: pointer to correct operator function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int a;

	a = 0;

	while (a < 5)
	{
		if (strcmp(ops[a].op, s) == 0)
		{
			return (ops[a].f);
		}
		a++;
	}
	return (NULL);
}
