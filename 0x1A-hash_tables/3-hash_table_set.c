#include "hash_tables.h"

/**
 * hash_table_set - function that adds element to the hash table
 * @ht: the hash table we want to adds the new element
 * @key: the new key to add
 * @value: the value associated with the key
 * Return: 1 if it succeeded or 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new_node, *ptr;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);

	ptr = ht->array[idx];
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = (value != NULL) ? strdup(value) : NULL;
			if (ptr->value == NULL)
				return (0);
			return (1);
		}
		ptr = ptr->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (new_node->value == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = (value != NULL) ? strdup(value) : NULL;
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
