#include "main.h"

/**
 * set_bit - function
 * @n: pointer
 * @index: variable
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a = 0;
	unsigned long int q, p = 1;

	q = *n;
	while (q)
	{
		if (a == index)
			break;
		q = q / 2;
		a++;
	}
	if (q == 0)
	{
		a = index;
	}
	while (a > 0)
	{
		p = p * 2;
		a--;
	}
	*n = *n + p;
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
