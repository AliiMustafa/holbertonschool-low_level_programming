#include "main.h"

/**
 * get_bit - function
 * @n: variable
 * @index: variable
 * Return: the value of a bit at a givven index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a = 0;
	int q;

	while (n)
	{
		if (a == index)
		{
			q = n % 2;
			return (q);
		}
		n = n / 2;
		a++;
	}
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
