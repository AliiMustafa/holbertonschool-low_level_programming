#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function
 * @head: pointer
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *new, *pr;

	if (!head)
	{
		return;
	}
	new = head;
	while (new)
	{
		pr = new;
		new = pr->next;
		free(pr->str);
		free(pr);
	}

}
