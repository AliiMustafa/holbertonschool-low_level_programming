#include "main.h"

/**
 *_pow_recursion - main
 *@x: variable
 *@y: variable
 *Return: x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 1 || y == 0)
	{
		return (x);
	}

	return (x * _pow_recursion(x, (y - 1)));
}
