#include "hash_tables.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_print - prints hash table
 * @ht: pointer to hash table
 * Description: key/value pairs are printed in the order they
 * appear in the array
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s'! '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}

	printf("}\n");
}
