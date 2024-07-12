#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function
 * @nmemb: variable
 * @size: variable
 * Return: calloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	t = malloc(nmemb * size);
	if (t == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		t[i] = 0;
	}
	return (t);
}
