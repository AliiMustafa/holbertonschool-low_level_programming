#include <stdlib.h>
#include "main.h"

/**
 * array_range - function
 * @min: variable
 * @max: variable
 * Return: array between min and max
 */

int *array_range(int min, int max)
{
	int *t;
	int i;
	int j = min;

	if (min > max)
	{
		return (NULL);
	}
	t = malloc((max - min + 1) * sizeof(int));
	if (t == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
	{
		t[i] = j;
		j++;
	}
	return (t);
}
