#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_note - pointer to list_h
 * @head: double pointer
 * @str: pointer
 * Return: pointer to list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;
	*head = new;
	return (*head);
}
