#include "hash_tables.h"

int list_checker(hash_table_t *ht, char *key,
		unsigned long int index, char *value);
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
	hash_node_t *new_node;
	int failer;

	if (ht == NULL)
		return (0);
	failer = 1;
	idx = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_table_t));
	if (new_node == NULL)
		return (0);
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = new_node;
		new_node->key = strdup(key);
		if (new_node->key == NULL)
			return (0);
		new_node->value = strdup(value);
		if (new_node->value == NULL)
			return (0);
		new_node->next = NULL;
	}
	else
		failer = list_checker(ht, (char *)key, idx, (char *)value);
	return (failer);
}

/**
 * list_checker - check the list at the key index
 * @key: key to check for
 * @ht: the hash table to check through
 * @index: index of the hashed key value
 * @value: the value that associated with the key we need to add
 * Return: 1 if it succeded or 0 otherwise.
 */
int list_checker(hash_table_t *ht, char *key,
		unsigned long int index, char *value)
{
	hash_node_t *ptr, *new_node;

	ptr = ht->array[index];
	while (ptr)
	{
		if (strcmp(key, ptr->key) == 0)
		{
			ptr->value = strdup(value);
			if (ptr->value == NULL)
				return (0);
			return (1);
		}

		ptr = ptr->next;
	}
	ptr = ht->array[index];
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->next = ptr;
	new_node->key = strdup(key);
	if (new_node->value == NULL)
		return (0);
	new_node->value = strdup(value);
	if (new_node->value == NULL)
		return (0);
	ht->array[index] = new_node;
	return (1);
}
