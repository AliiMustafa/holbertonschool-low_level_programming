#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - function
 *@s1: pointer
 *@s2: pointer
 *@n: variable
 *Return: concatenate 2 string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + i))
	{
		i++;
	}
	t = malloc(sizeof(char) * (i + n + 1));
	if (t == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*(s1 + i))
	{
		t[i] = s1[i];
		i++;
	}
	while (*(s2 + n) && j < n)
	{
		t[i] = s2[j];
		i++;
		j++;
	}
	t[i] = '\0';
	return (t);
}
