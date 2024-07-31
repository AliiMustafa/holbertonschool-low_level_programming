#include "lists.h"

/**
 * print_dlistint - function
 * @h: pointer
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int l = 0;

	while (h != NULL)
	{
		l++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (l);
}
