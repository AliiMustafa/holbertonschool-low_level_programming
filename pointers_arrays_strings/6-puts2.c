#include "main.h"

/**
 * puts2 - Main entry
 * @str: pointer
 * Return: prints every other character of the string
 */
void puts2(char *str)
{
	int m = 0;

	while (*(str + m) != 0)
	{
		if ((m % 2) == 0)
		{
			_putchar(*(str + m));
			m++;
		}
		else
		{
			m++;
		}
	}
	_putchar('\n');
}
