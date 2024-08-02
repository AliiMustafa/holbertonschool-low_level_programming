#include "main.h"

/**
 * binary_to_uint - function
 * @b: pointer
 * Return: number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int n = 0, m, l;
	unsigned int num = 0, p;

	while (b[n])
	{
		n++;
	}
	n = n - 1;
	l = n;
	while (n >= 0)
	{
		if (b[n] == '0')
		{
			n--;
		}
		else if (b[n] == '1')
		{
			p = 1;
			m = l - n;
			while (m > 0)
			{
				p = p * 2;
				m--;
			}
			num = num + p;
			n--;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}

