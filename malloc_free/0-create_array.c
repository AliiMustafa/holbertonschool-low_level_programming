#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function
 *@size: variable
 *@c: varaible
 *Return: array
 */


char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i = 0;

	t = malloc(sizeof(char) * size);
	if (t == NULL || size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		t[i] = c;
		i++;
	}
	return (t);
}
