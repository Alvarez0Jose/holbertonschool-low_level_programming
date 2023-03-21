#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - name printing function
 * @name: pointer to name
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;

	f(name);
}
