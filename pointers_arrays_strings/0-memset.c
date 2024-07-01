#include "main.h"

/**
 *_memset - main
 *@s: pointer
 *@n: variable
 *@b: string
 *Return: change first n value of buffer to b
 */
char *_memset(char *s, char b, unsigned int n)
{
	char const *pointer = &b;
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(s + i) = *pointer;
	}
	return (s);
}
