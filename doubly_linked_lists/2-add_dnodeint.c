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
	(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (*head);
}
