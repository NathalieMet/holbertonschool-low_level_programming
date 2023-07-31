#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: list
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
int i = 0;

	while (h != NULL)
{
	h = h->next;
	i++;
}
return (i);
}
