#include "main.h"

/**
 * rev_string - Main entry
 * @s: pointer
 * Return: change the string reverse
 */
void rev_string(char *s)
{
	int i;
	int m;
	int temp;

	i = 0;
	while (*(s + i) != 0)
	{
		i++;
	}
	m = i - 1;
	i = 0;
	while (m > i)
	{
		temp = *(s + i);
		*(s + i) = *(s + m);
		*(s + m) = temp;
		m--;
		i++;
	}
}
