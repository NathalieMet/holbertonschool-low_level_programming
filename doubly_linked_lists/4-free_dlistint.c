#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: liste
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
