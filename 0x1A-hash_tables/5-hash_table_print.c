#include "hash_tables.h"

/**
 * hash_table_print - a function that print a hash table
 * @ht: the hash table to print
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx, elem_print;
	hash_node_t *ptr;

	if (ht == NULL)
		return;
	idx = elem_print = 0;
	printf("{");
	while (idx < ht->size)
	{
		ptr = ht->array[idx];
		while (ptr != NULL)
		{
			if (elem_print > 0)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			elem_print++;
			ptr = ptr->next;
		}
		idx++;
	}
	printf("}\n");
}
