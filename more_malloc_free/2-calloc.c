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

	t = malloc(nmemb * size);
	if (t == NULL || size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		t[i] = 0;
	}
	return (t);
}
