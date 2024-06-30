#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @a: str
 * Return: pointer to a
 */
char *cap_string(char *a)
{
		int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			if (a[i - 1] == ' ' || a[i - 1] == '\t')
			{
				a[i] = a[i] - 32;
			}
			else if (a[i - 1] == '\n' || a[i - 1] == ',')
			{
				a[i] = a[i] - 32;
			}
			else if (a[i - 1] == ';' || a[i - 1] == '.')
			{
				a[i] = a[i] - 32;
			}
			else if	(a[i - 1] == '!' || a[i - 1] == '?')
			{
				a[i] = a[i] - 32;
			}
			else if (a[i - 1] == '(' || a[i - 1] == ')')
			{
				a[i] = a[i] - 32;
			}
			else if (a[i - 1] == '{' || a[i - 1] == '}')
			{
				a[i] = a[i] - 32;
			}
			else if (a[i - 1] == '"' || a[i - 1] == '\0')
			{
				a[i] = a[i] - 32;
			}
		}
	}
	return (a);
}
