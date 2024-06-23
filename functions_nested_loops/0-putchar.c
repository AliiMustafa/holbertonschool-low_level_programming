#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Return: if
 *
 * return: Always 0 (succes)
 */
int main(void)
{
	char word[] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}

	_putchar('\n');
	return (0);
}
