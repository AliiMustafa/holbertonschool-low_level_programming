#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase followed by a newline.
 *
 * Description:
 * This function iterates through the lowercase letters from 'a' to 'z'
 * and prints each character using the _putchar function. After printing
 *  all letters, it prints a newline character '\n' to terminate the line.
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
