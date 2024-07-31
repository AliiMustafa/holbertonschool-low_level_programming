#include "lists.h"

/**
 * add_dnodeint - pointer
 * @head: double pointer
 * @n: variable
 * Return: pointer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (!(*head))
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
