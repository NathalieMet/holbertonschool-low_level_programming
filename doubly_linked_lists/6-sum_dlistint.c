#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t
 *  linked list.
 * @head: liste
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	if (head == NULL)
	return (0);

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
