#include "main.h"

/**
 * _isupper - Main entry
 * @c: variable
 * Return: Prints 1 or 0
 * If letter is in uppercase print 1 else print 0
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
