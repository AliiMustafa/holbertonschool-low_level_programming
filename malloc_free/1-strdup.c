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

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + j))
	{
		j++;
	}
	t = malloc(sizeof(char) * (j + 1));
	if (t == NULL)
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
