#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "lists.h"

/**
 * add_dnodeint_end- adds a new node at the end of a dlistint_t list.
 * @n: int
 * @head: list
 * Return: the number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
	{
		return (NULL);
	}
new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}

temp = *head;

while (temp->next != NULL)
temp = temp->next;

temp->next = new_node;

new_node->prev = temp;

return (new_node);
}
