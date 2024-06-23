#include "main.h"
/**
 * main - entry point
 *
 * Description : "print_alphabet" print alphabet in order
 *
 **
 *Return : Always 0
 */
void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
