#include "main.h"

/**
 *_print_rev_recursion - main
 *@s: pointer
 *Return: prints string reverase
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
