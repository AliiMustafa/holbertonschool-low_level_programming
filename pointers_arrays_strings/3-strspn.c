#include "main.h"
/**
 *_strspn - main
 *@s: pointer
 *@accept: pointer
 *Return: print number of occurarance
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int count = 0;
	int b = 0;
	int c = 0;
	char *bos = " ";
	unsigned int n = 0;

	while (*(s + count) != 0)
	{
		if (*(s + count) == *bos)
		{
			break;
		}
		else
		{
			b++;
		}
		count++;
	}
	count = 0;
	while (*(accept + count) != 0)
	{
		count++;
	}
	for (i = 0; i < b; i++)
	{
		for (c = 0;  c < count; c++)
		{
			if (*(s + i) == *(accept + c))
			{
				n++;
			}
		}

	}
	return (n);
}
