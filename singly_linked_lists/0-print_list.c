#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
int i = 0;

	while (h != NULL)
{
	if (h->str == NULL)
	{
		printf("[0] ");
		printf("(nil)\n");
		h = h->next;
		i++;
	}
	else
	{
		printf("[%u] ", h->len);
	printf("%s\n", h->str);
	h = h->next;
	i++;
	}

}
return (i);
}

