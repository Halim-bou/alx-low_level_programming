#include "hash_tables.h"

/**
 * hash_table_delete - function that delete a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr = NULL, *temp = NULL;
	unsigned long int i = 0;

	if (ht->array)
	{
		for (; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				ptr = ht->array[i];
				while (ptr)
				{
					temp = ptr->next;
					if (ptr->value)
						free(ptr->value);
					if (ptr->key)
						free(ptr->key);
					free(ptr);
					ptr = temp;
				}
			}
		}
		free(ht->array);
	}
	free(ht);
}
