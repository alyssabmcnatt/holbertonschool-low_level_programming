#include "hash_tables.h"
#include <stddef.h>
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with key
 * @ht: pointer to hash table
 * @key: key to get the value
 * Return: value associated with element if success, or NULL if fail
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = hash_djb2((unsigned char *)key) % ht->size;

	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
