#ifndef DOG_H

#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - function
 * @name:  name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - new struct name
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
