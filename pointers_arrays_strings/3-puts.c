#include "main.h"

/**
 * _puts - Main entry
 * @str: pointer
 * Return: prints the string
 */
void _puts(char *str)
{
	int m = 0;

	while (*(str + m) != 0)
	{
		_putchar(*(str + m));
		m++;
	}
	_putchar('\n');
}
