#include "main.h"

/**
 *_strcat - main
 * @dest: string
 * @src: string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int k;

	while (dest[a] != 0)
	{
		a++;
	}
	for (k = 0; src[k] != 0; k++)
	{
		dest[a] = src[k];
		a++;
	}
	return (dest);
}
