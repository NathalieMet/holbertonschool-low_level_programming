#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
#include <unistd.h>

/**
 * hash_table_delete- prints a hash table.
 * @ht:is the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *p;
	hash_node_t *temp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		p = ht->array[i];
		while (p != NULL)
		{
			temp = p;
			p = p->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		i++;
	}
		free(ht->array);
		free(ht);
}
