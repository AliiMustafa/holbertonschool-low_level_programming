#include "main.h"

/**
 * _atoi - Main entry
 * @s: pointer
 * Return: takes the integers from the string
 */
int _atoi(char *s)
{
	int i,  negative = 0;
	unsigned int res = 0;
	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == '-')
		{
			negative++;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + s[i] - '0';
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
	}
	if (negative % 2 == 1)
	{
		res *= -1;
	}
	return (res);
}
