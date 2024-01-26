/**
  *print_dog - print structure variable
  *@d: pointer to variable of struct type
  */
#include <stdio.h>
#include "dog.h"
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

