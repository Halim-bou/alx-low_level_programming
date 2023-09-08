#include "hash_tables.h"

/**
 * hash_table_get - function to get the value of a key from hash table
 * @ht: the hash table to look through
 * @key: the key that store the value
 * Return: The value looking for , or NULL if there is no value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *ptr;

	if (ht == NULL)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[idx];
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
