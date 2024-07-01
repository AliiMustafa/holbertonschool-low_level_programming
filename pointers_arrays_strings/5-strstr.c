#include "main.h"
#include <stddef.h>
/**
 *_strstr - main
 *@haystack: pointer
 *@needle: pointer
 *Return: print number of occurarance
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int count = 0;
	int b = 0;
	int c = 0;

	while (*(haystack + b) != 0)
	{
		b++;
	}
	while (*(needle + count) != 0)
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		for (c = 0;  c < b; c++)
		{
			if (*(needle + i) == *(haystack + c))
			{
				return (haystack + c);
	
			}
		}

	}
	return (NULL);
}
