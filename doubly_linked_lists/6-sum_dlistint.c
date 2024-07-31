#include "lists.h"

/**
 * sum_dlistint - function
 * @head: pointer
 * Return: 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *t;
	int sum = 0;

	t = head;
	if (t == NULL)
	{
		return (0);
	}
	while (t != NULL)
	{
		sum = sum + t->n;
		t = t->next;
	}
	return (sum);
}
