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
 * hash_table_get- adds an element to the hash table.
 * @ht:is the hash table
 * @key:is the key
 * Return: 1 if success, 0 otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	if (temp == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (!strcmp(key, temp->key))
			return (temp->value);
	}
	temp = temp->next;
	return (0);
}
