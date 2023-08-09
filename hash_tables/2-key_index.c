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
 * key_index- gives you the index of a key.
 * @size:is the size of the array of the hash table
 * @key:is the key
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
int index;
index = hash_djb2(key) % size;
return (index);
}
