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

	while (*(needle + count) != 0)
	{
		count++;
	}
	while (*(haystack + b) != 0)
	{
		i = 0;
		while ((*(needle + i) == *(haystack + i + b)) && (i < count))
		{
			if (i == count - 1)
			{
				return (haystack + b);
			}
			i++;
		}
		b++;
	}
	if (*needle == '\0')
	{
		return (haystack);
	}
	return (NULL);
}
