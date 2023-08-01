#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "lists.h"

/**
 * dlistint_len - prints all the elements of a dlistint_t list.
 * @h: list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
int i = 0;

	while (h != NULL)
{
	h = h->next;
	i++;
}

return (i);
}
