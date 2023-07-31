#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: liste
 * @str: string
 * Return: the number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(*new_node));

	if (str == NULL || new_node == NULL)
	{
		return (NULL);
	}
new_node->str = strdup(str);
new_node->len = strlen(str);
new_node->next = *head;
*head = new_node;
return (new_node);
}
