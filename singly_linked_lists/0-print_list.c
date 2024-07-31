#include "lists.h"
#include <stdio.h>

/**
 * print_list - function
 * @h: pointer
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		n++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			continue;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (n);
}
