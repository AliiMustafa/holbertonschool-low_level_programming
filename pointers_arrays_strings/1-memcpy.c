#include "main.h"

/**
 *_memcpy - main
 *@dest: pointer
 *@n: variable
 *@src: point
 *Return: copy first n value of buffer to b
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char const *pointer = src;
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(pointer + i);
	}
	return (dest);
}
