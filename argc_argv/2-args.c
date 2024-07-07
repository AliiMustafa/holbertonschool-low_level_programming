#include <stdlib.h>
#include <stdio.h>

/**
 * main - Main Entry
 * @argc: varaible
 * @argv: pointer
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
