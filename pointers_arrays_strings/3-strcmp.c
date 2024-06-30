#include "main.h"

/**
 * _strcmp - compares two str
 * @s1: first str
 * @s2: second str
 * Return: - if lower; + if higher, 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0;
	int m = 0;

	while (*(s1 + n) != 0)
	{
		n++;
	}
	while (*(s2 + m) != 0)
	{
		m++;
	}
	if (n == m)
	{
		return (0);
	}
	else if (n > m)
	{
		return (13);
	}
	else
	{
		return (-13);
	}
}
