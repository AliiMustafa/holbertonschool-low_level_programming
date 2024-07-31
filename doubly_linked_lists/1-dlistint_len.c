#include "lists.h"

/**
 * print_dlistint_len - function
 * @h: pointer
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int l = 0;

	while (h != NULL)
	{
		l++;
		h = h->next;
	}
	return (l);
}
