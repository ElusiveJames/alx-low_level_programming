#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer to the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_cpy;
	char *owner_cpy;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
		name_cpy = malloc(sizeof(char) * (strlen(name) + 1));
	if (name_cpy == NULL)
	{
		free(d);
		return (NULL);
	}
	owner_cpy = malloc(sizeof(char) * (strlen(owner) + 1));
	if (owner_cpy == NULL)
	{
		free(d);
		free(name_cpy);
		return (NULL);
	}
	strcpy(name_cpy, name);
	strcpy(owner_cpy, owner);
	d->name = name_cpy;
	d->age = age;
	d->owner = owner_cpy;
	return (d);
}
