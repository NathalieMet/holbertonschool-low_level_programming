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
		{return (0);
		}
		index = key_index((const unsigned char *)key, ht->size);
	item = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->key = strdup(key);
	item->value = strdup(value);
	current_item = ht->array[index];
	while (current_item != NULL)
	{
		if (strcmp(current_item->key, item->key) == 0)
		{
			current_item->value = item->value;
			return (1);
		}
		current_item = current_item->next;
	}
		item->next = ht->array[index];
		ht->array[index] = item;
return (1);
}


