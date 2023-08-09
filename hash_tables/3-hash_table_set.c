#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * hash_table_set- adds an element to the hash table.
 * @ht:is the hash table
 * @key:is the key
 * @value:is the value associated with the key.
 * Return: 1 if success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)

{
	int index;
	hash_node_t *current_item;
	hash_node_t *item;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	item = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->key = strdup(key);
	item->value = strdup(value);
	if (item->key == NULL || item->value == NULL)
	{
		free(item);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];
	if (current_item == NULL)
	{
		item->next = NULL;
		ht->array[index] = item;
	}
	else
	{
		if (!strcmp(current_item->key, key))
		{
			item->next = current_item;
		ht->array[index] = item;
		}
		else
		{
			current_item->value = strdup(value);
			free(item);
		}
	}
return (1);
}


