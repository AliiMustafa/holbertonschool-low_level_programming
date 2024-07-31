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
 *  insert_dnodeint_at_index - pointer
 *  @h: double pointer
 *  @idx: variable
 *  @n: variable
 *  Return: pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head, *new, *node1, *node2;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	head = *h;
	node1 = get_node(head, idx - 1);
	node2 = get_node(head, idx);
	if (!node1 && !node2 && idx)
		return (NULL);
	if (idx == 0)
	{
		if (head)
			head->prev = new;
		new->prev = NULL;
		new->next = head;
		*h = new;
		return (*h);
	}
	new->prev = node1;
	new->next = node2;
	if (node1)
		node1->next = new;
	if (node2)
		node2->prev = new;
	return (new);
}
