#include "hash_tables.h"
/**
* hash_table_delete - deletes a hash table
*
* @ht: hash table
*
* Return: no return
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *list = NULL;
	hash_node_t *temp = NULL;
	unsigned int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		list = ht->array[i];

		while (list != NULL)
		{
			free(list->key);
			free(list->value);
			temp = list;
			list = list->next;
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
