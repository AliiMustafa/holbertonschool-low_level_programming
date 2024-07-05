#include "main.h"

/**
 *_strlen_recursion - main
 *@s: pointer
 *Return: lengts of function
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != 0)
	{
		n++;
	}
	else
	{
		return (0);
	}

	return (n + _strlen_recursion(s + 1));

}
