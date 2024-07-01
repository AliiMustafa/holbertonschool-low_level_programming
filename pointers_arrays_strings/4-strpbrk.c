#include "main.h"
#include <stddef.h>
/**
 *_strpbrk - main
 *@s: pointer
 *@accept: pointer
 *Return: print number of occurarance
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int count = 0;
	int b = 0;
	int c = 0;

	while (*(s + b) != 0)
	{
		b++;
	}
	while (*(accept + count) != 0)
	{
		count++;
	}
	for (i = 0; i < b; i++)
	{
		for (c = 0;  c < count; c++)
		{
			if (*(s + i) == *(accept + c))
			{
				return (s + i);
			}
		}

	}
	return (NULL);
}
