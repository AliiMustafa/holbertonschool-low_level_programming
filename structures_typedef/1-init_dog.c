#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - function
 * @d: pointer
 * @name: pointer
 * @age: variable
 * @owner: pointer
 * Retrun: initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("Ok\n");
		exit(1);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
