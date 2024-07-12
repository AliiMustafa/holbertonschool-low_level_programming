#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - function
 *@width: variable
 *@height: variable
 *Return: cretae 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **t;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	t = malloc(sizeof(int *) * height);
	if (t == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		t[i] = malloc(sizeof(int) * width);
		if (!t[i])
		{
			for (j = 0; j < i; j++)
			{
				free(t[j]);
			}
			free(t);
		}
		for (j = 0; j < width; j++)
		{
			t[i][j] = 0;
		}
	}
	return (t);
}
