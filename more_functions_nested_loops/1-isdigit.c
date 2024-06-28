#include "main.h"

/**
 * _isdigit - Main entry
 * @c: variable
 * Return: Prints 1 or 0
 * If variable in this range: (0;9) print 1 else print 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
