#include "lists.h"

/**
 * get_dnodeint_at_index - pointer
 * @head: pointer
 * @index: variable
 * Return: pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *t;
	unsigned int l = 0;

	t = head;
	while (t != NULL)
	{
		if (l == index)
		{
			return (t);
		}
		l++;
		t = t->next;
	}
	return (NULL);
}
