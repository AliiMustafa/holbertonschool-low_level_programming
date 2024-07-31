#include "lists.h"

/**
 *  get_node - pointer
 *  @head: pointer
 *  @index: variable
 *  Return: pointer
 */
dlistint_t *get_node(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *t;

	t = head;
	while (t)
	{
		if (n == index)
			return (t);
		t = t->next;
		n++;
	}
	return (NULL);
}
/**
 *  delete_dnodeint_at_index - function
 *  @head: double pointer
 *  @index: variable
 *  Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *d, *prev_node, *next_node;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		if (!((*head)->next))
		{
			*head = NULL;
			return (1);
		}
		d = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(d);
		return (1);
	}
	if (get_node(*head, index))
	{
		d = get_node(*head, index);
		prev_node = get_node(*head, index - 1);
		next_node = get_node(*head, index + 1);
		prev_node->next = next_node;
		if (next_node)
			next_node->prev = prev_node;
		free(d);
		return (1);
	}
	return (-1);
}
