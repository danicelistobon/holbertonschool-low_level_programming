#include "hash_tables.h"
/**
* hash_table_set - adds an element to the hash table
*
* @ht: hash table you want to add or update the key/value to
*
* @key: key (can not be an empty string)
*
* @value: value (must be duplicated - can be an empty string)
*
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new = NULL, *list = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	list = ht->array[index];

	while (list != NULL)
	{
		if (strcmp(key, list->key) == 0)
		{
			free(list->value);
			list->value = strdup(value);
			if (list->value == NULL)
				return (0);
			return (1);
		}
		list = list->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
