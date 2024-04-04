#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - ad node to the first index of list
 * @head: list_t type node
 * @str: string
 *
 * Return: ptr
 */
list_t *add_node(list_t **head, const char *str)
{
	if (*head == NULL)
	{
		if (*head == NULL)
		{
			return (NULL);
		}
		(*head)->str = strdup(str);
		(*head)->len = strlen(str);
		(*head)->next = NULL;
	}
	else
	{
		list_t *new_node;

		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}
