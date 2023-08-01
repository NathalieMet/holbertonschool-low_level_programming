#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index- deletes the node at index "index" of a dlistint_t
 *  linked list.
 * @head: liste
 * @index: the index of the node that should be deleted.
 * Return: dlistint_t
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
		unsigned int i = 0;
		dlistint_t *temp = *head;

	if (index == 0 && temp != NULL)
	{
		*head = temp->next;
		if (*head != NULL)
		(*head)->prev = NULL;
	free(temp);
	return (1);
	}

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	return (-1);

	if (temp->prev != NULL)
	temp->prev->next = temp->next;
	if (temp->next != NULL)
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
