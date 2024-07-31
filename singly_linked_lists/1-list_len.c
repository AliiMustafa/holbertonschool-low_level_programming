#include "lists.h"
#include <stdio.h>

/**
 * list_len - function
 * @h: pointer
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
