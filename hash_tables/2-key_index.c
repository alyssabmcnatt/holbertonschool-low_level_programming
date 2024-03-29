#include "hash_tables.h"

/**
 * key_index - get index
 * @key: get index of the key
 * @size: size
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
