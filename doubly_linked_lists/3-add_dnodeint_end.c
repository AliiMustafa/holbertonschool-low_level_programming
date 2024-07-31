#include "lists.h"
/**
 * add_dnodeint_end - pointer to list_h
 * @head: double pointer
 * @n: variable
 * Return: pointer
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *t;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	t = *head;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = new;
	neww->prev = t;
	new->next = NULL;
	return (new);
}
