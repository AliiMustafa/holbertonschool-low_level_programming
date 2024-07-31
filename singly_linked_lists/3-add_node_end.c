#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - pointer to list_h
 * @head: double pointer
 * @str: pointer
 * Return: pointer to list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *t;
	int n = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	while (str[n])
	{
		n++;
	}
	new->str = strdup(str);
	new->len = n;
	if (*head == NULL)
	{
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
	new->next = NULL;
	return (new);
}
