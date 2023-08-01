#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "lists.h"

/**
 * add_dnodeint- adds a new node at the beginning of a dlistint_t list.
 * @n: int
 * @head: list
 * Return: the number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
	{
		return (NULL);
	}
new_node->n = n;
new_node->next = *head;
new_node->prev = NULL;

if (*head != NULL)
{
	(*head)->prev = new_node;
}

*head = new_node;

return (new_node);
}
