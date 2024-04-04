#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - ad node to the first index of list
 * @head: list_t type node
 * @str: string
 *
 * Return: ptr
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head;
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new_node;
	return (*head);
}
