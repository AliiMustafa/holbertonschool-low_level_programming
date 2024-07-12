#include "main.h"
#include <stdlib.h>
/**
 *alloc grid - function
 *@width: variable
 *@height: variable
 *Return: cretae 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **t;
	int i;
	int j;
	int size = height * width;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	t = malloc(sizeof(int*) * size);
	if (t == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for(j = 0; j < width; j++)
		{
			t[i][j] = 0;
		}
	}
	return (t);
}
