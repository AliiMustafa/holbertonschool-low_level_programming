#include "main.h"
#include <stdlib.h>
/**
 *_strdup - function
 *@str: pointer
 *Return: string
 */


char *_strdup(char *str)
{
	char *t;
	int i = 0;
	int j = 0;

	while (*(str + j))
	{
		j++;
	}
	t = malloc(sizeof(char) * j);
	if (t == NULL || str == NULL)
	{
		return (NULL);
	}
	while (*(str + i))
	{
		t[i] = str[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}
