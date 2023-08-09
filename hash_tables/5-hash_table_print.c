#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
#include <unistd.h>

/**
 * hash_table_print- prints a hash table.
 * @ht:is the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *p;
	unsigned long int i = 0;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	{
		while (i < ht->size)
		{
			p = ht->array[i];
			while (p != NULL)
			{
				if (!first)
					{printf(", "); }
				printf("'%s': '%s'", p->key, p->value);
				first = 0;
				p = p->next;
			}
			i++;
		}
		printf("}");
		printf("\n");
	}
}
