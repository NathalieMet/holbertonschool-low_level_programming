#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
int i = 0;

	while (h != NULL)
{
	if (h->n == '\0')
	{
		printf("0\n");
		h = h->next;
		i++;
	}
	else
	{
	printf("%d\n", h->n);
	h = h->next;
	i++;
	}

}
return (i);
}
