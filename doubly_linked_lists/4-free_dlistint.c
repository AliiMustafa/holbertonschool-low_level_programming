#include "lists.h"

/**
 * free_dlistint - function
 * @head: pointer
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	if (!head)
	{
		return;
	}
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);

}
