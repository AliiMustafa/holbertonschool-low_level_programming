#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function
 * @b: variable
 * Return: malloc
 */

void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
	{
		exit(98);
	}
	return (t);
}
