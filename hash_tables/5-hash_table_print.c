#include "hash_tables.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_print - prints hash table
 * @ht: pointer to hash table
 * Description: key/value pairs are printed in the order they
 * appear in the array
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
