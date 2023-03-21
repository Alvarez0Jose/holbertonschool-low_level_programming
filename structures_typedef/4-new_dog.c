#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * new_dog - new created dog
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *ND = (dog_t *)malloc(sizeof(dog_t));

	if (!ND)
		return (NULL);
	ND->name = (char *)malloc(strlen(name) + 1);
	if (!ND->name)
	{
		free(ND);
		return (ND);
	}
	strcpy(ND->name, name);

	ND->owner = (char *)malloc(strlen(owner) + 1);

	if (!ND->owner)
	{
	free(ND->name);
	free(ND);
	return (NULL);
	}
	strcpy(ND->owner, owner);

	ND->age = age;

	return (ND);
}
