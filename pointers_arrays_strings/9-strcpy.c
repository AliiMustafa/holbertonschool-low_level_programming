#include "main.h"

/**
 * _strcpy - Main entry
 * @dest: pointer
 * @src: pointer
 * Return: copy src to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
	{
		*temp = *src;
		 temp++;
		 src++;
	}
	*temp = '\0';
	return (dest);
}
