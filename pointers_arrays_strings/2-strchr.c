#include "main.h"
#include <stddef.h>
/**
 *_strchr - main
 *@s: pointer
 *@c: string
 *Return: print the string starting with c
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int count = 0;

	while (*(s + count) != 0)
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}

	}
	return (NULL);
}
