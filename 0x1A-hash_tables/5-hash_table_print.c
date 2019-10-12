#include "hash_tables.h"
/**
* hash_table_print - prints a hash table
*
* @ht: hash table
*
* Return: no return
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *list = NULL;
	unsigned int i = 0;
	char *del = "";

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		list = ht->array[i];

		while (list != NULL)
		{
			printf("%s", del);
			printf("'%s': '%s'", list->key, list->value);
			del = ", ";
			list = list->next;
		}
	}
	printf("}\n");
}
