#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - fucntion being executed
 * @d: struct name
 * @name: name of the dog
 * @age: dogs age
 * @owner: owners name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
