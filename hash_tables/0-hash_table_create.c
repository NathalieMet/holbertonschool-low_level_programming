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
 * hash_table_create- creates a hash table.
 * @size:name of the file
 * Return: hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	{
		hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

		table->size = size;
		table->array = calloc(size, sizeof(hash_node_t *));

		for (i = 0; i < table->size; i++)
			table->array[i] = NULL;

		return (table);
	}
}
