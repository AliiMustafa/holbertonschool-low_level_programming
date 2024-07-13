#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function
 * @d: pointer
 * Retrun: dogs informtion
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(1);
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
