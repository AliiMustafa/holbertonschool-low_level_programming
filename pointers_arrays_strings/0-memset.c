#include "main.h"

/**
 *reverse_array - reverses the content of an array of integers.
 *@a: array
 *@n: size
 *Return: void
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
