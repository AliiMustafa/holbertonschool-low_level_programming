#include "main.h"

/**
 * _strlen - Main entry
 * @s: pointer
 * Return: lengs of the string
 */
int _strlen(char *s)
{
	int m = 0;

	while (*(s + m) != 0)
	{
		m++;
	}
	return (m);
}
