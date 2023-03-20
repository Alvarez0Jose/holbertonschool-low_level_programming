#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print dog
 * @d: pointer to struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
	if (d->name == NULL)
		printf("Name: (nil\n");
	else
		printf("Name : %s\n", d->name);
	if (d->age < 0)
		printf("age: (nil)\n");
	else
		printf("age: %f\n", d->age);
}