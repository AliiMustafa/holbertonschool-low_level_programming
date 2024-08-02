#include "main.h"

/**
 * clear_bit - function
 * @n: pointer
 * @index: variable
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a = 0;
	unsigned long int q, p = 1, r;

	if (*n != 0)
	{
		q = *n;
		while (q)
		{
			if (a == index)
			{
				r = q % 2;
				break;
			}
			q = q / 2;
			a++;
		}
		while (a > 0)
		{
			p = p * 2;
			a--;
		}
		if (r == 1)
		{
			*n = *n - p;
		}
	}
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
