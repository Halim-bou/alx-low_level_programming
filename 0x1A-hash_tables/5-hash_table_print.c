#include "hash_tables.h"

/**
 * hash_table_print - a function that print a hash table
 * @ht: the hash table to print
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	unsigned long int elem_print = 0;
	hash_node_t *ptr;

	if (ht == NULL)
		return;
	printf("{");
	for (; idx < ht->size; idx++)
	{
		ptr = ht->array[idx];
		while (ptr)
		{
			if (elem_print > 0)
				printf(", ");
			printf("'%s' : '%s'", ptr->key, ptr->value);
			elem_print++;
		}
	}
	printf("}\n");
}
