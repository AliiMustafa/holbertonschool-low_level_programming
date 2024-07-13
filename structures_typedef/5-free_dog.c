#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - function
 * @d: pointer
 * Retrun: frees d
 */
void free_dog(dog_t *d)
{
	free(d);
}
