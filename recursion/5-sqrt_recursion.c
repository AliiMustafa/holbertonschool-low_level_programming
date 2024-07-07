#include "main.h"

/**
 * root_find - main
 * @r: variable
 * @number: variable
 * Return: root of number if is exsist
 */
int root_find(int r, int number)
{
	if (r * r == number)
	{
		return (r);
	}
	if (r * r > number)
	{
		return (-1);
	}
	return (root_find((r + 1), number));
}

	
	
/**
 *_sqrt_recursion - main
 *@n: variable
 *Return: root of n
 */
int _sqrt_recursion(int n)
{
	return (root_find(0, n));
}
